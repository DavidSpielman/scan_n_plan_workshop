#include "planner_profiles.hpp"
#include "taskflow_generators.hpp"
#include <tesseract_process_managers/core/process_planning_server.h>
#include <tesseract_motion_planners/default_planner_namespaces.h>
#include <tesseract_process_managers/task_profiles/check_input_profile.h>
#include <tesseract_process_managers/task_profiles/seed_min_length_profile.h>
#include <tesseract_process_managers/task_profiles/interative_spline_parameterization_profile.h>

#include <rclcpp/rclcpp.hpp>
#include <snp_msgs/srv/generate_motion_plan.hpp>
#include <tesseract_command_language/command_language.h>
#include <tesseract_command_language/utils/utils.h>
#include <tesseract_rosutils/utils.h>
#include <tf2_eigen/tf2_eigen.h>

static const std::string TRANSITION_PLANNER = "TRANSITION";
static const std::string FREESPACE_PLANNER = "FREESPACE";
static const std::string RASTER_PLANNER = "RASTER";
static const std::string PROFILE = "SNPD";
static const std::string PLANNING_SERVICE = "create_motion_plan";

tesseract_common::Toolpath fromMsg(const snp_msgs::msg::ToolPaths& msg)
{
  tesseract_common::Toolpath tps;
  tps.reserve(msg.paths.size());
  for (const auto& path : msg.paths)
  {
    for (const auto& segment : path.segments)
    {
      tesseract_common::VectorIsometry3d seg;
      seg.reserve(segment.poses.size());
      for (const auto& pose : segment.poses)
      {
        Eigen::Isometry3d p;
        tf2::fromMsg(pose, p);

        // Rotate the pose 180 degrees about the x-axis such that the z-axis faces into the part
        p *= Eigen::AngleAxisd(M_PI, Eigen::Vector3d::UnitX());

        seg.push_back(p);
      }
      tps.push_back(seg);
    }
  }
  return tps;
}

template <typename T>
T get(rclcpp::Node* node, const std::string& key)
{
  node->declare_parameter(key);
  T val;
  if (!node->get_parameter(key, val))
    throw std::runtime_error("Failed to get '" + key + "' parameter");
  return val;
}

class PlanningServer : public rclcpp::Node
{
public:
  PlanningServer()
    : rclcpp::Node("snp_planning_server")
    , env_(std::make_shared<tesseract_environment::Environment>())
    , planning_server_(std::make_shared<tesseract_planning::ProcessPlanningServer>(env_))
    , verbose_(get<bool>(this, "verbose"))
  {
    // TODO: Set up an environment monitor
    {
      auto urdf_string = get<std::string>(this, "robot_description");
      auto srdf_string = get<std::string>(this, "robot_description_semantic");
      auto resource_locator = std::make_shared<tesseract_rosutils::ROSResourceLocator>();
      if (!env_->init(urdf_string, srdf_string, resource_locator))
        throw std::runtime_error("Failed to initialize environment");

      // TODO: remove arbitrary start state
      const std::vector<std::string> joint_names = env_->getJointGroup("manipulator")->getJointNames();
      Eigen::VectorXd joints = Eigen::VectorXd::Zero(joint_names.size());
      joints(2) = M_PI / 2.0;
      env_->setState(joint_names, joints);
    }

    // Register custom process planners
    planning_server_->registerProcessPlanner(TRANSITION_PLANNER, createTransitionTaskflow());
    planning_server_->registerProcessPlanner(FREESPACE_PLANNER, createFreespaceTaskflow());
    planning_server_->registerProcessPlanner(RASTER_PLANNER, createRasterTaskflow());

    // Add custom profiles
    {
      auto pd = planning_server_->getProfiles();
      pd->addProfile<tesseract_planning::SimplePlannerPlanProfile>(
          tesseract_planning::profile_ns::SIMPLE_DEFAULT_NAMESPACE, PROFILE, createSimplePlannerProfile());
      pd->addProfile<tesseract_planning::OMPLPlanProfile>(tesseract_planning::profile_ns::OMPL_DEFAULT_NAMESPACE,
                                                          PROFILE, createOMPLProfile());
      pd->addProfile<tesseract_planning::TrajOptPlanProfile>(tesseract_planning::profile_ns::TRAJOPT_DEFAULT_NAMESPACE,
                                                             PROFILE, createTrajOptToolZFreePlanProfile());
      pd->addProfile<tesseract_planning::TrajOptCompositeProfile>(
          tesseract_planning::profile_ns::TRAJOPT_DEFAULT_NAMESPACE, PROFILE, createTrajOptProfile());
      pd->addProfile<tesseract_planning::DescartesPlanProfile<float>>(
          tesseract_planning::profile_ns::DESCARTES_DEFAULT_NAMESPACE, PROFILE, createDescartesPlanProfile<float>());
      pd->addProfile<tesseract_planning::CheckInputProfile>(
          tesseract_planning::profile_ns::CHECK_INPUT_DEFAULT_NAMESPACE, PROFILE,
          std::make_shared<tesseract_planning::CheckInputProfile>());
      pd->addProfile<tesseract_planning::SeedMinLengthProfile>(
          tesseract_planning::profile_ns::SEED_MIN_LENGTH_DEFAULT_NAMESPACE, PROFILE,
          std::make_shared<tesseract_planning::SeedMinLengthProfile>(5));
      pd->addProfile<tesseract_planning::IterativeSplineParameterizationProfile>(
          tesseract_planning::profile_ns::ITERATIVE_SPLINE_PARAMETERIZATION_DEFAULT_NAMESPACE, PROFILE,
          std::make_shared<tesseract_planning::IterativeSplineParameterizationProfile>());
    }

    // Advertise the ROS2 service
    server_ = create_service<snp_msgs::srv::GenerateMotionPlan>(
        PLANNING_SERVICE, std::bind(&PlanningServer::plan, this, std::placeholders::_1, std::placeholders::_2));
    RCLCPP_INFO(get_logger(), "Started SNP motion planning server");
  }

private:
  tesseract_planning::CompositeInstruction createProgram(const tesseract_planning::ManipulatorInfo& info,
                                                         const tesseract_common::Toolpath& raster_strips)
  {
    std::vector<std::string> joint_names = env_->getJointGroup(info.manipulator)->getJointNames();

    tesseract_planning::CompositeInstruction program(PROFILE, tesseract_planning::CompositeInstructionOrder::ORDERED,
                                                     info);

    // Perform a freespace move to the first waypoint
    tesseract_planning::StateWaypoint swp1(joint_names, env_->getCurrentJointValues(joint_names));
    tesseract_planning::PlanInstruction start_instruction(swp1, tesseract_planning::PlanInstructionType::START,
                                                          PROFILE);
    program.setStartInstruction(start_instruction);

    for (std::size_t rs = 0; rs < raster_strips.size(); ++rs)
    {
      if (rs == 0)
      {
        // Define from start composite instruction
        tesseract_planning::CartesianWaypoint wp1 = raster_strips[rs][0];
        tesseract_planning::PlanInstruction plan_f0(wp1, tesseract_planning::PlanInstructionType::FREESPACE, PROFILE);
        plan_f0.setDescription("from_start_plan");
        tesseract_planning::CompositeInstruction from_start(PROFILE);
        from_start.setDescription("from_start");
        from_start.push_back(plan_f0);
        program.push_back(from_start);
      }

      // Define raster
      tesseract_planning::CompositeInstruction raster_segment(PROFILE);
      raster_segment.setDescription("Raster #" + std::to_string(rs + 1));

      for (std::size_t i = 1; i < raster_strips[rs].size(); ++i)
      {
        tesseract_planning::CartesianWaypoint wp = raster_strips[rs][i];
        raster_segment.push_back(
            tesseract_planning::PlanInstruction(wp, tesseract_planning::PlanInstructionType::LINEAR, PROFILE));
      }
      program.push_back(raster_segment);

      if (rs < raster_strips.size() - 1)
      {
        // Add transition
        tesseract_planning::CartesianWaypoint twp = raster_strips[rs + 1].front();

        tesseract_planning::PlanInstruction transition_instruction1(
            twp, tesseract_planning::PlanInstructionType::FREESPACE, PROFILE);
        transition_instruction1.setDescription("transition_from_end_plan");

        tesseract_planning::CompositeInstruction transition(PROFILE);
        transition.setDescription("transition_from_end");
        transition.push_back(transition_instruction1);

        program.push_back(transition);
      }
      else
      {
        // Add to end instruction
        tesseract_planning::PlanInstruction plan_f2(swp1, tesseract_planning::PlanInstructionType::FREESPACE, PROFILE);
        plan_f2.setDescription("to_end_plan");
        tesseract_planning::CompositeInstruction to_end(PROFILE);
        to_end.setDescription("to_end");
        to_end.push_back(plan_f2);
        program.push_back(to_end);
      }
    }

    return program;
  }

  void plan(const snp_msgs::srv::GenerateMotionPlan::Request::SharedPtr req,
            snp_msgs::srv::GenerateMotionPlan::Response::SharedPtr res)
  {
    try
    {
      RCLCPP_INFO_STREAM(get_logger(), "Received motion planning request");

      // Create a manipulator info and program from the service request
      const std::string& base_frame = req->tool_paths.paths.at(0).segments.at(0).header.frame_id;
      tesseract_planning::ManipulatorInfo manip_info(req->motion_group, base_frame, req->tcp_frame);

      tesseract_planning::ProcessPlanningRequest plan_req;
      plan_req.name = RASTER_PLANNER;
      plan_req.instructions = createProgram(manip_info, fromMsg(req->tool_paths));
      plan_req.env_state = env_->getState();

      auto log_level = console_bridge::getLogLevel();
      if (verbose_)
        console_bridge::setLogLevel(console_bridge::LogLevel::CONSOLE_BRIDGE_LOG_DEBUG);

      tesseract_planning::ProcessPlanningFuture plan_result = planning_server_->run(plan_req);
      plan_result.wait();

      // Reset the log level
      console_bridge::setLogLevel(log_level);

      if (!plan_result.interface->isSuccessful())
        throw std::runtime_error("Failed to create motion plan");

      // Convert to joint trajectory
      tesseract_common::JointTrajectory jt =
          toJointTrajectory(plan_result.results->as<tesseract_planning::CompositeInstruction>());
      res->motion_plan = tesseract_rosutils::toMsg(jt, env_->getState());

      res->message = "Succesfully planned motion";
      res->success = true;
    }
    catch (const std::exception& ex)
    {
      res->message = ex.what();
      res->success = false;
    }

    RCLCPP_INFO_STREAM(get_logger(), res->message);
  }

  tesseract_environment::Environment::Ptr env_;
  tesseract_planning::ProcessPlanningServer::Ptr planning_server_;
  rclcpp::Service<snp_msgs::srv::GenerateMotionPlan>::SharedPtr server_;
  bool verbose_{ false };
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto server = std::make_shared<PlanningServer>();
  rclcpp::spin(server);
  rclcpp::shutdown();
}
#include <iomanip>
#include <control_msgs/action/follow_joint_trajectory.hpp>
#include <trajectory_msgs/msg/joint_trajectory_point.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <snp_msgs/srv/execute_motion_plan.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <motoros2_interfaces/srv/start_traj_mode.hpp>
#include <motoros2_interfaces/srv/reset_error.hpp>
#include <industrial_msgs/msg/robot_status.hpp>

static const std::string MOTION_EXEC_SERVICE = "execute_motion_plan";
static const std::string ENABLE_SERVICE = "start_traj_mode";
static const std::string RESET_ERROR_SERVICE = "reset_error";
static const std::string JOINT_STATES_TOPIC = "joint_states";
static const std::string ROBOT_STATUS_TOPIC = "robot_status";
static const double JOINT_STATE_TIME_THRESHOLD = 0.1;  // seconds

using FJT = control_msgs::action::FollowJointTrajectory;
using FJT_Result = control_msgs::action::FollowJointTrajectory_Result;
using FJT_Goal = control_msgs::action::FollowJointTrajectory_Goal;

template <typename T>
T get(rclcpp::Node* node, const std::string& key)
{
  node->declare_parameter(key);
  T val;
  if (!node->get_parameter(key, val))
    throw std::runtime_error("Failed to get '" + key + "' parameter");
  return val;
}

class MotionExecNode : public rclcpp::Node
{
public:
  explicit MotionExecNode()
    : Node("motion_execution_node"), cb_group_(create_callback_group(rclcpp::CallbackGroupType::Reentrant))
  {
    const std::string fjt_action = get<std::string>(this, "follow_joint_trajectory_action");
    fjt_client_ = rclcpp_action::create_client<control_msgs::action::FollowJointTrajectory>(this, fjt_action);

    enable_client_ = create_client<motoros2_interfaces::srv::StartTrajMode>(ENABLE_SERVICE);
    reset_error_client_ = create_client<motoros2_interfaces::srv::ResetError>(RESET_ERROR_SERVICE);

    server_ = create_service<snp_msgs::srv::ExecuteMotionPlan>(
        MOTION_EXEC_SERVICE,
        std::bind(&MotionExecNode::executeMotionPlan, this, std::placeholders::_1, std::placeholders::_2),
        rmw_qos_profile_services_default, cb_group_);

    joint_state_sub_ = create_subscription<sensor_msgs::msg::JointState>(
        JOINT_STATES_TOPIC, 1, std::bind(&MotionExecNode::callbackJointState, this, std::placeholders::_1));

    robot_status_sub_ = create_subscription<industrial_msgs::msg::RobotStatus>(
        ROBOT_STATUS_TOPIC, 1, std::bind(&MotionExecNode::callbackRobotStatus, this, std::placeholders::_1));

    RCLCPP_INFO(get_logger(), "Motion execution node started");
  }

private:
  rclcpp_action::Client<control_msgs::action::FollowJointTrajectory>::SharedPtr fjt_client_;
  rclcpp::Client<motoros2_interfaces::srv::StartTrajMode>::SharedPtr enable_client_;
  rclcpp::Client<motoros2_interfaces::srv::ResetError>::SharedPtr reset_error_client_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
  sensor_msgs::msg::JointState latest_joint_state_;

  rclcpp::Service<snp_msgs::srv::ExecuteMotionPlan>::SharedPtr server_;
  rclcpp::CallbackGroup::SharedPtr cb_group_;
  std::mutex mutex_;

  rclcpp::Subscription<industrial_msgs::msg::RobotStatus>::SharedPtr robot_status_sub_;
  industrial_msgs::msg::RobotStatus::SharedPtr robot_status_;

  void callbackJointState(const sensor_msgs::msg::JointState::SharedPtr state)
  {
    std::lock_guard<std::mutex> lock{ mutex_ };
    latest_joint_state_ = *state;
  }

  double getJointStateAge()
  {
    std::lock_guard<std::mutex> lock{ mutex_ };
    return (get_clock()->now() - latest_joint_state_.header.stamp).seconds();
  }

  void callbackRobotStatus(const industrial_msgs::msg::RobotStatus::SharedPtr msg)
  {
    std::lock_guard<std::mutex> lock{ mutex_ };
    robot_status_ = msg;
  }

  industrial_msgs::msg::RobotStatus::SharedPtr getRobotStatus()
  {
    std::lock_guard<std::mutex> lock{ mutex_ };
    if (robot_status_ == nullptr)
      RCLCPP_ERROR_STREAM(get_logger(), "robot_status_ is null???");
    return robot_status_;
  }

  /**
   * @brief resetError Resets robot error if present
   */
  void resetError()
  {
    bool needs_reset = getRobotStatus()->in_error.val == 1;
    if (!needs_reset)
      return;
    if (!reset_error_client_->service_is_ready())
      throw std::runtime_error("reset_error_client_ not ready: " +
                               std::string(reset_error_client_->get_service_name()));

    auto request = std::make_shared<motoros2_interfaces::srv::ResetError::Request>();
    auto fut = reset_error_client_->async_send_request(request);
    fut.wait();
    auto response = fut.get();
    if (response->result_code.value != motoros2_interfaces::msg::MotionReadyEnum::READY)
    {
      throw std::runtime_error("resetError failed: " + response->message);
    }
    RCLCPP_INFO_STREAM(get_logger(), "Robot error reset");
  }

  void executeMotionPlan(const std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan::Request> request,
                         const std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan::Response> result)
  {
    try
    {
      RCLCPP_INFO_STREAM(get_logger(),
                         "####Current motion ready status: " << (int)(getRobotStatus()->motion_possible.val));
      // Check the last recieved joint state first
      double js_age = getJointStateAge();
      if (js_age > JOINT_STATE_TIME_THRESHOLD)
      {
        std::stringstream ss;
        ss << "Last joint state was not received within threshold (" << js_age << " > " << JOINT_STATE_TIME_THRESHOLD
           << ")";
        throw std::runtime_error(ss.str());
      }

      resetError();

      // enable robot
      {
        RCLCPP_INFO(get_logger(), "Enabling robot");
        if (!enable_client_->service_is_ready())
        {
          throw std::runtime_error("Robot enable server is not available");
        }

        auto request = std::make_shared<motoros2_interfaces::srv::StartTrajMode::Request>();
        auto future = enable_client_->async_send_request(request);
        future.wait();

        auto response = future.get();       
        if (response->result_code.value != motoros2_interfaces::msg::MotionReadyEnum::READY)
        {
          throw std::runtime_error("Failed to enable robot: '" + response->message + "'");
        }
        RCLCPP_INFO(get_logger(), "Robot enabled");
      }

      // Check that the server exists
      if (!fjt_client_->action_server_is_ready())
      {
        throw std::runtime_error("Action server not available");
      }

      // Sleep to ensure that robot_enable actually did everything it had to. This is probably only necessary the first
      // time that servos are

      int max_motion_ready_ms = 5000;

      rclcpp::Duration max_elapsed_enable_duration = rclcpp::Duration(std::chrono::milliseconds(max_motion_ready_ms));
      rclcpp::Time start_time = this->get_clock()->now();
      rclcpp::Time exec_time = this->get_clock()->now();

      while (true)
      {
        if (getRobotStatus()->motion_possible.val == 1)
          break;
        exec_time = this->get_clock()->now();
        if ((exec_time - start_time) > max_elapsed_enable_duration)
        {
          RCLCPP_ERROR_STREAM(get_logger(), "getRobotStatus()->motion_possible.val != 1");
          throw std::runtime_error("Robot motion_possible flag not set!");
        }
      }

      RCLCPP_INFO_STREAM(get_logger(), "motion_possible turned to "
                                           << (int)(getRobotStatus()->motion_possible.val) << " in " << std::fixed
                                           << std::setprecision(4) << (exec_time - start_time).seconds() << " seconds");
      // Small sleep to allow INFORM program to settle
      rclcpp::sleep_for(std::chrono::milliseconds(100));

      //      RCLCPP_ERROR_STREAM(get_logger(), "###### GONNA SLEEP 5 seconds");
      //      rclcpp::sleep_for(std::chrono::seconds(5));
      //      RCLCPP_ERROR_STREAM(get_logger(), "###### done SLEEP 5 seconds");
      // Send motion trajectory
      control_msgs::action::FollowJointTrajectory::Goal goal_msg;
      goal_msg.trajectory = request->motion_plan;

      // Replace the start state of the trajectory with the current joint state
      {
        trajectory_msgs::msg::JointTrajectoryPoint start_point;
        start_point.positions.resize(goal_msg.trajectory.joint_names.size());
        start_point.velocities = std::vector<double>(start_point.positions.size(), 0);
        start_point.accelerations = std::vector<double>(start_point.positions.size(), 0);
        start_point.effort = std::vector<double>(start_point.positions.size(), 0);
        start_point.time_from_start = rclcpp::Duration::from_seconds(0.0);

        // Find the index of the trajectory joint in the latest joint state message
        for (std::size_t i = 0; i < goal_msg.trajectory.joint_names.size(); ++i)
        {
          std::lock_guard<std::mutex> lock{ mutex_ };

          const std::string& name = goal_msg.trajectory.joint_names[i];
          auto it = std::find(latest_joint_state_.name.begin(), latest_joint_state_.name.end(), name);
          if (it == latest_joint_state_.name.end())
            throw std::runtime_error("Failed to find joint '" + name + "' in latest joint state message");

          auto idx = std::distance(latest_joint_state_.name.begin(), it);
          start_point.positions[i] = latest_joint_state_.position[idx];
        }

        goal_msg.trajectory.points[0] = start_point;
      }
      auto num_pts = goal_msg.trajectory.points.size();
      RCLCPP_INFO_STREAM(get_logger(), "Number of points in trajectory: " << num_pts);
      if (num_pts >= 200)
      {
        RCLCPP_ERROR_STREAM(this->get_logger(), "More than 200 points! " << num_pts << " > 200");
        std::stringstream sss;
        sss << "Follow joint trajectory action goal was not accepted due to too many points in trajectory! "
            << goal_msg.trajectory.points.size() << " > 200";
        throw std::runtime_error(sss.str());
      }
      RCLCPP_INFO_STREAM(get_logger(), "Sending joint trajectory");
      auto goal_handle_future = fjt_client_->async_send_goal(goal_msg);
      goal_handle_future.wait();

      using FJTGoalHandle = rclcpp_action::ClientGoalHandle<control_msgs::action::FollowJointTrajectory>;
      FJTGoalHandle::SharedPtr goal_handle = goal_handle_future.get();
      int8_t status = goal_handle->get_status();
      switch (status)
      {
        case rclcpp_action::GoalStatus::STATUS_ACCEPTED:
        case rclcpp_action::GoalStatus::STATUS_SUCCEEDED:
        case rclcpp_action::GoalStatus::STATUS_EXECUTING:
          break;
        default:
          throw std::runtime_error("Follow joint trajectory action goal was not accepted (code " +
                                   std::to_string(status) + ")");
      }

      // Wait for the trajectory to complete
      auto fjt_future = fjt_client_->async_get_result(goal_handle);
      std::chrono::duration<double> timeout(static_cast<double>(goal_msg.trajectory.points.back().time_from_start.sec) *
                                            1.5);
      switch (fjt_future.wait_for(timeout))
      {
        case std::future_status::ready:
          break;
        default:
          throw std::runtime_error("Timed out waiting for trajectory to finish");
      }

      // Handle the action result code
      FJTGoalHandle::WrappedResult fjt_wrapper = fjt_future.get();
      switch (static_cast<rclcpp_action::ResultCode>(fjt_wrapper.code))
      {
        case rclcpp_action::ResultCode::SUCCEEDED:
          break;
        default:
          throw std::runtime_error("Follow joint trajectory action call did not succeed");
      }

      // Handle the FJT error code
      switch (fjt_wrapper.result->error_code)
      {
        case control_msgs::action::FollowJointTrajectory::Result::SUCCESSFUL:
          break;
        default:
          throw std::runtime_error("Follow joint trajectory action did not succeed: '" +
                                   fjt_wrapper.result->error_string + "'");
      }

      // Communicate success
      result->success = true;
    }
    catch (const std::exception& ex)
    {
      // Cancel any goals in the case of a timeout
      fjt_client_->async_cancel_all_goals();

      result->message = ex.what();
      result->success = false;

      RCLCPP_ERROR_STREAM(get_logger(), "exeception in executeMotionPlan: " << result->message);
    }
  }
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<MotionExecNode>();

  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);

  executor.spin();
  rclcpp::shutdown();

  return 0;
}

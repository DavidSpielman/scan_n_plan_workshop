// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__BUILDER_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__BUILDER_HPP_

#include "snp_msgs/srv/detail/generate_motion_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateMotionPlan_Request_mesh_frame
{
public:
  explicit Init_GenerateMotionPlan_Request_mesh_frame(::snp_msgs::srv::GenerateMotionPlan_Request & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::GenerateMotionPlan_Request mesh_frame(::snp_msgs::srv::GenerateMotionPlan_Request::_mesh_frame_type arg)
  {
    msg_.mesh_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Request msg_;
};

class Init_GenerateMotionPlan_Request_mesh_filename
{
public:
  explicit Init_GenerateMotionPlan_Request_mesh_filename(::snp_msgs::srv::GenerateMotionPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMotionPlan_Request_mesh_frame mesh_filename(::snp_msgs::srv::GenerateMotionPlan_Request::_mesh_filename_type arg)
  {
    msg_.mesh_filename = std::move(arg);
    return Init_GenerateMotionPlan_Request_mesh_frame(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Request msg_;
};

class Init_GenerateMotionPlan_Request_tcp_frame
{
public:
  explicit Init_GenerateMotionPlan_Request_tcp_frame(::snp_msgs::srv::GenerateMotionPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMotionPlan_Request_mesh_filename tcp_frame(::snp_msgs::srv::GenerateMotionPlan_Request::_tcp_frame_type arg)
  {
    msg_.tcp_frame = std::move(arg);
    return Init_GenerateMotionPlan_Request_mesh_filename(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Request msg_;
};

class Init_GenerateMotionPlan_Request_motion_group
{
public:
  explicit Init_GenerateMotionPlan_Request_motion_group(::snp_msgs::srv::GenerateMotionPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMotionPlan_Request_tcp_frame motion_group(::snp_msgs::srv::GenerateMotionPlan_Request::_motion_group_type arg)
  {
    msg_.motion_group = std::move(arg);
    return Init_GenerateMotionPlan_Request_tcp_frame(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Request msg_;
};

class Init_GenerateMotionPlan_Request_tool_paths
{
public:
  Init_GenerateMotionPlan_Request_tool_paths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateMotionPlan_Request_motion_group tool_paths(::snp_msgs::srv::GenerateMotionPlan_Request::_tool_paths_type arg)
  {
    msg_.tool_paths = std::move(arg);
    return Init_GenerateMotionPlan_Request_motion_group(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::GenerateMotionPlan_Request>()
{
  return snp_msgs::srv::builder::Init_GenerateMotionPlan_Request_tool_paths();
}

}  // namespace snp_msgs


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateMotionPlan_Response_message
{
public:
  explicit Init_GenerateMotionPlan_Response_message(::snp_msgs::srv::GenerateMotionPlan_Response & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::GenerateMotionPlan_Response message(::snp_msgs::srv::GenerateMotionPlan_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Response msg_;
};

class Init_GenerateMotionPlan_Response_success
{
public:
  explicit Init_GenerateMotionPlan_Response_success(::snp_msgs::srv::GenerateMotionPlan_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateMotionPlan_Response_message success(::snp_msgs::srv::GenerateMotionPlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GenerateMotionPlan_Response_message(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Response msg_;
};

class Init_GenerateMotionPlan_Response_motion_plan
{
public:
  Init_GenerateMotionPlan_Response_motion_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateMotionPlan_Response_success motion_plan(::snp_msgs::srv::GenerateMotionPlan_Response::_motion_plan_type arg)
  {
    msg_.motion_plan = std::move(arg);
    return Init_GenerateMotionPlan_Response_success(msg_);
  }

private:
  ::snp_msgs::srv::GenerateMotionPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::GenerateMotionPlan_Response>()
{
  return snp_msgs::srv::builder::Init_GenerateMotionPlan_Response_motion_plan();
}

}  // namespace snp_msgs

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__BUILDER_HPP_

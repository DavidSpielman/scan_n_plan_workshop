// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snp_msgs:srv/ExecuteMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__BUILDER_HPP_
#define SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__BUILDER_HPP_

#include "snp_msgs/srv/detail/execute_motion_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteMotionPlan_Request_use_tool
{
public:
  explicit Init_ExecuteMotionPlan_Request_use_tool(::snp_msgs::srv::ExecuteMotionPlan_Request & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::ExecuteMotionPlan_Request use_tool(::snp_msgs::srv::ExecuteMotionPlan_Request::_use_tool_type arg)
  {
    msg_.use_tool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::ExecuteMotionPlan_Request msg_;
};

class Init_ExecuteMotionPlan_Request_motion_plan
{
public:
  Init_ExecuteMotionPlan_Request_motion_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPlan_Request_use_tool motion_plan(::snp_msgs::srv::ExecuteMotionPlan_Request::_motion_plan_type arg)
  {
    msg_.motion_plan = std::move(arg);
    return Init_ExecuteMotionPlan_Request_use_tool(msg_);
  }

private:
  ::snp_msgs::srv::ExecuteMotionPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::ExecuteMotionPlan_Request>()
{
  return snp_msgs::srv::builder::Init_ExecuteMotionPlan_Request_motion_plan();
}

}  // namespace snp_msgs


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteMotionPlan_Response_message
{
public:
  explicit Init_ExecuteMotionPlan_Response_message(::snp_msgs::srv::ExecuteMotionPlan_Response & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::ExecuteMotionPlan_Response message(::snp_msgs::srv::ExecuteMotionPlan_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::ExecuteMotionPlan_Response msg_;
};

class Init_ExecuteMotionPlan_Response_success
{
public:
  Init_ExecuteMotionPlan_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotionPlan_Response_message success(::snp_msgs::srv::ExecuteMotionPlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteMotionPlan_Response_message(msg_);
  }

private:
  ::snp_msgs::srv::ExecuteMotionPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::ExecuteMotionPlan_Response>()
{
  return snp_msgs::srv::builder::Init_ExecuteMotionPlan_Response_success();
}

}  // namespace snp_msgs

#endif  // SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__BUILDER_HPP_

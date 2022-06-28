// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATHS__BUILDER_HPP_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATHS__BUILDER_HPP_

#include "snp_msgs/msg/detail/tool_paths__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace snp_msgs
{

namespace msg
{

namespace builder
{

class Init_ToolPaths_paths
{
public:
  Init_ToolPaths_paths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::snp_msgs::msg::ToolPaths paths(::snp_msgs::msg::ToolPaths::_paths_type arg)
  {
    msg_.paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::msg::ToolPaths msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::msg::ToolPaths>()
{
  return snp_msgs::msg::builder::Init_ToolPaths_paths();
}

}  // namespace snp_msgs

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATHS__BUILDER_HPP_

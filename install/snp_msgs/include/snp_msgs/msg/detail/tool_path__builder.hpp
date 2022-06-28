// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATH__BUILDER_HPP_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATH__BUILDER_HPP_

#include "snp_msgs/msg/detail/tool_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace snp_msgs
{

namespace msg
{

namespace builder
{

class Init_ToolPath_segments
{
public:
  Init_ToolPath_segments()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::snp_msgs::msg::ToolPath segments(::snp_msgs::msg::ToolPath::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::msg::ToolPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::msg::ToolPath>()
{
  return snp_msgs::msg::builder::Init_ToolPath_segments();
}

}  // namespace snp_msgs

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATH__BUILDER_HPP_

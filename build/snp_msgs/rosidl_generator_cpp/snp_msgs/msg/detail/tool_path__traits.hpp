// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATH__TRAITS_HPP_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATH__TRAITS_HPP_

#include "snp_msgs/msg/detail/tool_path__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::msg::ToolPath>()
{
  return "snp_msgs::msg::ToolPath";
}

template<>
inline const char * name<snp_msgs::msg::ToolPath>()
{
  return "snp_msgs/msg/ToolPath";
}

template<>
struct has_fixed_size<snp_msgs::msg::ToolPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::msg::ToolPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::msg::ToolPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATH__TRAITS_HPP_

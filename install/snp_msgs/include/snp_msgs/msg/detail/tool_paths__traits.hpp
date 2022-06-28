// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATHS__TRAITS_HPP_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATHS__TRAITS_HPP_

#include "snp_msgs/msg/detail/tool_paths__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::msg::ToolPaths>()
{
  return "snp_msgs::msg::ToolPaths";
}

template<>
inline const char * name<snp_msgs::msg::ToolPaths>()
{
  return "snp_msgs/msg/ToolPaths";
}

template<>
struct has_fixed_size<snp_msgs::msg::ToolPaths>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::msg::ToolPaths>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::msg::ToolPaths>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATHS__TRAITS_HPP_

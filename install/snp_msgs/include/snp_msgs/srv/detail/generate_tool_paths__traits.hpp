// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__TRAITS_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__TRAITS_HPP_

#include "snp_msgs/srv/detail/generate_tool_paths__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::GenerateToolPaths_Request>()
{
  return "snp_msgs::srv::GenerateToolPaths_Request";
}

template<>
inline const char * name<snp_msgs::srv::GenerateToolPaths_Request>()
{
  return "snp_msgs/srv/GenerateToolPaths_Request";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateToolPaths_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateToolPaths_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::srv::GenerateToolPaths_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::GenerateToolPaths_Response>()
{
  return "snp_msgs::srv::GenerateToolPaths_Response";
}

template<>
inline const char * name<snp_msgs::srv::GenerateToolPaths_Response>()
{
  return "snp_msgs/srv/GenerateToolPaths_Response";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateToolPaths_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateToolPaths_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::srv::GenerateToolPaths_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::GenerateToolPaths>()
{
  return "snp_msgs::srv::GenerateToolPaths";
}

template<>
inline const char * name<snp_msgs::srv::GenerateToolPaths>()
{
  return "snp_msgs/srv/GenerateToolPaths";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateToolPaths>
  : std::integral_constant<
    bool,
    has_fixed_size<snp_msgs::srv::GenerateToolPaths_Request>::value &&
    has_fixed_size<snp_msgs::srv::GenerateToolPaths_Response>::value
  >
{
};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateToolPaths>
  : std::integral_constant<
    bool,
    has_bounded_size<snp_msgs::srv::GenerateToolPaths_Request>::value &&
    has_bounded_size<snp_msgs::srv::GenerateToolPaths_Response>::value
  >
{
};

template<>
struct is_service<snp_msgs::srv::GenerateToolPaths>
  : std::true_type
{
};

template<>
struct is_service_request<snp_msgs::srv::GenerateToolPaths_Request>
  : std::true_type
{
};

template<>
struct is_service_response<snp_msgs::srv::GenerateToolPaths_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__TRAITS_HPP_

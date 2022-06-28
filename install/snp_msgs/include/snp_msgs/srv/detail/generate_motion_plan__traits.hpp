// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__TRAITS_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__TRAITS_HPP_

#include "snp_msgs/srv/detail/generate_motion_plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::GenerateMotionPlan_Request>()
{
  return "snp_msgs::srv::GenerateMotionPlan_Request";
}

template<>
inline const char * name<snp_msgs::srv::GenerateMotionPlan_Request>()
{
  return "snp_msgs/srv/GenerateMotionPlan_Request";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'motion_plan'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::GenerateMotionPlan_Response>()
{
  return "snp_msgs::srv::GenerateMotionPlan_Response";
}

template<>
inline const char * name<snp_msgs::srv::GenerateMotionPlan_Response>()
{
  return "snp_msgs/srv/GenerateMotionPlan_Response";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::GenerateMotionPlan>()
{
  return "snp_msgs::srv::GenerateMotionPlan";
}

template<>
inline const char * name<snp_msgs::srv::GenerateMotionPlan>()
{
  return "snp_msgs/srv/GenerateMotionPlan";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateMotionPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Request>::value &&
    has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateMotionPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Request>::value &&
    has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Response>::value
  >
{
};

template<>
struct is_service<snp_msgs::srv::GenerateMotionPlan>
  : std::true_type
{
};

template<>
struct is_service_request<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__TRAITS_HPP_

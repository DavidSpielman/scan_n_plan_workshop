// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__BUILDER_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__BUILDER_HPP_

#include "snp_msgs/srv/detail/generate_tool_paths__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateToolPaths_Request_search_radius
{
public:
  explicit Init_GenerateToolPaths_Request_search_radius(::snp_msgs::srv::GenerateToolPaths_Request & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::GenerateToolPaths_Request search_radius(::snp_msgs::srv::GenerateToolPaths_Request::_search_radius_type arg)
  {
    msg_.search_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

class Init_GenerateToolPaths_Request_point_spacing
{
public:
  explicit Init_GenerateToolPaths_Request_point_spacing(::snp_msgs::srv::GenerateToolPaths_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateToolPaths_Request_search_radius point_spacing(::snp_msgs::srv::GenerateToolPaths_Request::_point_spacing_type arg)
  {
    msg_.point_spacing = std::move(arg);
    return Init_GenerateToolPaths_Request_search_radius(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

class Init_GenerateToolPaths_Request_min_segment_length
{
public:
  explicit Init_GenerateToolPaths_Request_min_segment_length(::snp_msgs::srv::GenerateToolPaths_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateToolPaths_Request_point_spacing min_segment_length(::snp_msgs::srv::GenerateToolPaths_Request::_min_segment_length_type arg)
  {
    msg_.min_segment_length = std::move(arg);
    return Init_GenerateToolPaths_Request_point_spacing(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

class Init_GenerateToolPaths_Request_min_hole_size
{
public:
  explicit Init_GenerateToolPaths_Request_min_hole_size(::snp_msgs::srv::GenerateToolPaths_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateToolPaths_Request_min_segment_length min_hole_size(::snp_msgs::srv::GenerateToolPaths_Request::_min_hole_size_type arg)
  {
    msg_.min_hole_size = std::move(arg);
    return Init_GenerateToolPaths_Request_min_segment_length(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

class Init_GenerateToolPaths_Request_line_spacing
{
public:
  explicit Init_GenerateToolPaths_Request_line_spacing(::snp_msgs::srv::GenerateToolPaths_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateToolPaths_Request_min_hole_size line_spacing(::snp_msgs::srv::GenerateToolPaths_Request::_line_spacing_type arg)
  {
    msg_.line_spacing = std::move(arg);
    return Init_GenerateToolPaths_Request_min_hole_size(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

class Init_GenerateToolPaths_Request_mesh_filename
{
public:
  Init_GenerateToolPaths_Request_mesh_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateToolPaths_Request_line_spacing mesh_filename(::snp_msgs::srv::GenerateToolPaths_Request::_mesh_filename_type arg)
  {
    msg_.mesh_filename = std::move(arg);
    return Init_GenerateToolPaths_Request_line_spacing(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::GenerateToolPaths_Request>()
{
  return snp_msgs::srv::builder::Init_GenerateToolPaths_Request_mesh_filename();
}

}  // namespace snp_msgs


namespace snp_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateToolPaths_Response_message
{
public:
  explicit Init_GenerateToolPaths_Response_message(::snp_msgs::srv::GenerateToolPaths_Response & msg)
  : msg_(msg)
  {}
  ::snp_msgs::srv::GenerateToolPaths_Response message(::snp_msgs::srv::GenerateToolPaths_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Response msg_;
};

class Init_GenerateToolPaths_Response_tool_paths
{
public:
  explicit Init_GenerateToolPaths_Response_tool_paths(::snp_msgs::srv::GenerateToolPaths_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateToolPaths_Response_message tool_paths(::snp_msgs::srv::GenerateToolPaths_Response::_tool_paths_type arg)
  {
    msg_.tool_paths = std::move(arg);
    return Init_GenerateToolPaths_Response_message(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Response msg_;
};

class Init_GenerateToolPaths_Response_success
{
public:
  Init_GenerateToolPaths_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateToolPaths_Response_tool_paths success(::snp_msgs::srv::GenerateToolPaths_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GenerateToolPaths_Response_tool_paths(msg_);
  }

private:
  ::snp_msgs::srv::GenerateToolPaths_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::snp_msgs::srv::GenerateToolPaths_Response>()
{
  return snp_msgs::srv::builder::Init_GenerateToolPaths_Response_success();
}

}  // namespace snp_msgs

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__BUILDER_HPP_

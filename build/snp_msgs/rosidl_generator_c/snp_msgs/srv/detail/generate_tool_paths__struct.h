// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_H_
#define SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mesh_filename'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GenerateToolPaths in the package snp_msgs.
typedef struct snp_msgs__srv__GenerateToolPaths_Request
{
  rosidl_runtime_c__String mesh_filename;
  double line_spacing;
  double min_hole_size;
  double min_segment_length;
  double point_spacing;
  double search_radius;
} snp_msgs__srv__GenerateToolPaths_Request;

// Struct for a sequence of snp_msgs__srv__GenerateToolPaths_Request.
typedef struct snp_msgs__srv__GenerateToolPaths_Request__Sequence
{
  snp_msgs__srv__GenerateToolPaths_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__GenerateToolPaths_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/GenerateToolPaths in the package snp_msgs.
typedef struct snp_msgs__srv__GenerateToolPaths_Response
{
  bool success;
  snp_msgs__msg__ToolPaths tool_paths;
  rosidl_runtime_c__String message;
} snp_msgs__srv__GenerateToolPaths_Response;

// Struct for a sequence of snp_msgs__srv__GenerateToolPaths_Response.
typedef struct snp_msgs__srv__GenerateToolPaths_Response__Sequence
{
  snp_msgs__srv__GenerateToolPaths_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__GenerateToolPaths_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_H_

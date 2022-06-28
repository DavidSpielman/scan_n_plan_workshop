// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATH__STRUCT_H_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'segments'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

// Struct defined in msg/ToolPath in the package snp_msgs.
typedef struct snp_msgs__msg__ToolPath
{
  geometry_msgs__msg__PoseArray__Sequence segments;
} snp_msgs__msg__ToolPath;

// Struct for a sequence of snp_msgs__msg__ToolPath.
typedef struct snp_msgs__msg__ToolPath__Sequence
{
  snp_msgs__msg__ToolPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__msg__ToolPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATH__STRUCT_H_

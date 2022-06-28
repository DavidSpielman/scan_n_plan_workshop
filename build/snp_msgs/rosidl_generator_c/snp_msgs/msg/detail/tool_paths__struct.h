// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATHS__STRUCT_H_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATHS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'paths'
#include "snp_msgs/msg/detail/tool_path__struct.h"

// Struct defined in msg/ToolPaths in the package snp_msgs.
typedef struct snp_msgs__msg__ToolPaths
{
  snp_msgs__msg__ToolPath__Sequence paths;
} snp_msgs__msg__ToolPaths;

// Struct for a sequence of snp_msgs__msg__ToolPaths.
typedef struct snp_msgs__msg__ToolPaths__Sequence
{
  snp_msgs__msg__ToolPaths * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__msg__ToolPaths__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATHS__STRUCT_H_

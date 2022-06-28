// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snp_msgs/msg/detail/tool_paths__rosidl_typesupport_introspection_c.h"
#include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snp_msgs/msg/detail/tool_paths__functions.h"
#include "snp_msgs/msg/detail/tool_paths__struct.h"


// Include directives for member types
// Member `paths`
#include "snp_msgs/msg/tool_path.h"
// Member `paths`
#include "snp_msgs/msg/detail/tool_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__msg__ToolPaths__init(message_memory);
}

void ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_fini_function(void * message_memory)
{
  snp_msgs__msg__ToolPaths__fini(message_memory);
}

size_t ToolPaths__rosidl_typesupport_introspection_c__size_function__ToolPath__paths(
  const void * untyped_member)
{
  const snp_msgs__msg__ToolPath__Sequence * member =
    (const snp_msgs__msg__ToolPath__Sequence *)(untyped_member);
  return member->size;
}

const void * ToolPaths__rosidl_typesupport_introspection_c__get_const_function__ToolPath__paths(
  const void * untyped_member, size_t index)
{
  const snp_msgs__msg__ToolPath__Sequence * member =
    (const snp_msgs__msg__ToolPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ToolPaths__rosidl_typesupport_introspection_c__get_function__ToolPath__paths(
  void * untyped_member, size_t index)
{
  snp_msgs__msg__ToolPath__Sequence * member =
    (snp_msgs__msg__ToolPath__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ToolPaths__rosidl_typesupport_introspection_c__resize_function__ToolPath__paths(
  void * untyped_member, size_t size)
{
  snp_msgs__msg__ToolPath__Sequence * member =
    (snp_msgs__msg__ToolPath__Sequence *)(untyped_member);
  snp_msgs__msg__ToolPath__Sequence__fini(member);
  return snp_msgs__msg__ToolPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_member_array[1] = {
  {
    "paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__msg__ToolPaths, paths),  // bytes offset in struct
    NULL,  // default value
    ToolPaths__rosidl_typesupport_introspection_c__size_function__ToolPath__paths,  // size() function pointer
    ToolPaths__rosidl_typesupport_introspection_c__get_const_function__ToolPath__paths,  // get_const(index) function pointer
    ToolPaths__rosidl_typesupport_introspection_c__get_function__ToolPath__paths,  // get(index) function pointer
    ToolPaths__rosidl_typesupport_introspection_c__resize_function__ToolPath__paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_members = {
  "snp_msgs__msg",  // message namespace
  "ToolPaths",  // message name
  1,  // number of fields
  sizeof(snp_msgs__msg__ToolPaths),
  ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_member_array,  // message members
  ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_init_function,  // function to initialize message memory (memory has to be allocated)
  ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_type_support_handle = {
  0,
  &ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, msg, ToolPaths)() {
  ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, msg, ToolPath)();
  if (!ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_type_support_handle.typesupport_identifier) {
    ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ToolPaths__rosidl_typesupport_introspection_c__ToolPaths_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

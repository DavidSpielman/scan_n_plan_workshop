// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice
#include "snp_msgs/msg/detail/tool_paths__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "snp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "snp_msgs/msg/detail/tool_paths__struct.h"
#include "snp_msgs/msg/detail/tool_paths__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "snp_msgs/msg/detail/tool_path__functions.h"  // paths

// forward declare type support functions
size_t get_serialized_size_snp_msgs__msg__ToolPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_snp_msgs__msg__ToolPath(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, msg, ToolPath)();


using _ToolPaths__ros_msg_type = snp_msgs__msg__ToolPaths;

static bool _ToolPaths__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ToolPaths__ros_msg_type * ros_message = static_cast<const _ToolPaths__ros_msg_type *>(untyped_ros_message);
  // Field name: paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, snp_msgs, msg, ToolPath
      )()->data);
    size_t size = ros_message->paths.size;
    auto array_ptr = ros_message->paths.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ToolPaths__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ToolPaths__ros_msg_type * ros_message = static_cast<_ToolPaths__ros_msg_type *>(untyped_ros_message);
  // Field name: paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, snp_msgs, msg, ToolPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->paths.data) {
      snp_msgs__msg__ToolPath__Sequence__fini(&ros_message->paths);
    }
    if (!snp_msgs__msg__ToolPath__Sequence__init(&ros_message->paths, size)) {
      return "failed to create array for field 'paths'";
    }
    auto array_ptr = ros_message->paths.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_snp_msgs
size_t get_serialized_size_snp_msgs__msg__ToolPaths(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ToolPaths__ros_msg_type * ros_message = static_cast<const _ToolPaths__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name paths
  {
    size_t array_size = ros_message->paths.size;
    auto array_ptr = ros_message->paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_snp_msgs__msg__ToolPath(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ToolPaths__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_snp_msgs__msg__ToolPaths(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_snp_msgs
size_t max_serialized_size_snp_msgs__msg__ToolPaths(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: paths
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_snp_msgs__msg__ToolPath(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ToolPaths__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_snp_msgs__msg__ToolPaths(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ToolPaths = {
  "snp_msgs::msg",
  "ToolPaths",
  _ToolPaths__cdr_serialize,
  _ToolPaths__cdr_deserialize,
  _ToolPaths__get_serialized_size,
  _ToolPaths__max_serialized_size
};

static rosidl_message_type_support_t _ToolPaths__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ToolPaths,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, msg, ToolPaths)() {
  return &_ToolPaths__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice
#include "snp_msgs/srv/detail/generate_motion_plan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "snp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "snp_msgs/srv/detail/generate_motion_plan__struct.h"
#include "snp_msgs/srv/detail/generate_motion_plan__functions.h"
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

#include "rosidl_runtime_c/string.h"  // mesh_filename, mesh_frame, motion_group, tcp_frame
#include "rosidl_runtime_c/string_functions.h"  // mesh_filename, mesh_frame, motion_group, tcp_frame
#include "snp_msgs/msg/detail/tool_paths__functions.h"  // tool_paths

// forward declare type support functions
size_t get_serialized_size_snp_msgs__msg__ToolPaths(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_snp_msgs__msg__ToolPaths(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, msg, ToolPaths)();


using _GenerateMotionPlan_Request__ros_msg_type = snp_msgs__srv__GenerateMotionPlan_Request;

static bool _GenerateMotionPlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenerateMotionPlan_Request__ros_msg_type * ros_message = static_cast<const _GenerateMotionPlan_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tool_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, snp_msgs, msg, ToolPaths
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tool_paths, cdr))
    {
      return false;
    }
  }

  // Field name: motion_group
  {
    const rosidl_runtime_c__String * str = &ros_message->motion_group;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: tcp_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->tcp_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mesh_filename
  {
    const rosidl_runtime_c__String * str = &ros_message->mesh_filename;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mesh_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->mesh_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GenerateMotionPlan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenerateMotionPlan_Request__ros_msg_type * ros_message = static_cast<_GenerateMotionPlan_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tool_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, snp_msgs, msg, ToolPaths
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tool_paths))
    {
      return false;
    }
  }

  // Field name: motion_group
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motion_group.data) {
      rosidl_runtime_c__String__init(&ros_message->motion_group);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motion_group,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motion_group'\n");
      return false;
    }
  }

  // Field name: tcp_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tcp_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->tcp_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tcp_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tcp_frame'\n");
      return false;
    }
  }

  // Field name: mesh_filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mesh_filename.data) {
      rosidl_runtime_c__String__init(&ros_message->mesh_filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mesh_filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mesh_filename'\n");
      return false;
    }
  }

  // Field name: mesh_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mesh_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->mesh_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mesh_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mesh_frame'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_snp_msgs
size_t get_serialized_size_snp_msgs__srv__GenerateMotionPlan_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenerateMotionPlan_Request__ros_msg_type * ros_message = static_cast<const _GenerateMotionPlan_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tool_paths

  current_alignment += get_serialized_size_snp_msgs__msg__ToolPaths(
    &(ros_message->tool_paths), current_alignment);
  // field.name motion_group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motion_group.size + 1);
  // field.name tcp_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tcp_frame.size + 1);
  // field.name mesh_filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mesh_filename.size + 1);
  // field.name mesh_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mesh_frame.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GenerateMotionPlan_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_snp_msgs__srv__GenerateMotionPlan_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_snp_msgs
size_t max_serialized_size_snp_msgs__srv__GenerateMotionPlan_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tool_paths
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_snp_msgs__msg__ToolPaths(
        full_bounded, current_alignment);
    }
  }
  // member: motion_group
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: tcp_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mesh_filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mesh_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GenerateMotionPlan_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_snp_msgs__srv__GenerateMotionPlan_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GenerateMotionPlan_Request = {
  "snp_msgs::srv",
  "GenerateMotionPlan_Request",
  _GenerateMotionPlan_Request__cdr_serialize,
  _GenerateMotionPlan_Request__cdr_deserialize,
  _GenerateMotionPlan_Request__get_serialized_size,
  _GenerateMotionPlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _GenerateMotionPlan_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenerateMotionPlan_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, srv, GenerateMotionPlan_Request)() {
  return &_GenerateMotionPlan_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "snp_msgs/srv/detail/generate_motion_plan__struct.h"
// already included above
// #include "snp_msgs/srv/detail/generate_motion_plan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"  // motion_plan

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_snp_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_snp_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectory(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_snp_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory)();


using _GenerateMotionPlan_Response__ros_msg_type = snp_msgs__srv__GenerateMotionPlan_Response;

static bool _GenerateMotionPlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenerateMotionPlan_Response__ros_msg_type * ros_message = static_cast<const _GenerateMotionPlan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->motion_plan, cdr))
    {
      return false;
    }
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GenerateMotionPlan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenerateMotionPlan_Response__ros_msg_type * ros_message = static_cast<_GenerateMotionPlan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_plan
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, trajectory_msgs, msg, JointTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->motion_plan))
    {
      return false;
    }
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_snp_msgs
size_t get_serialized_size_snp_msgs__srv__GenerateMotionPlan_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenerateMotionPlan_Response__ros_msg_type * ros_message = static_cast<const _GenerateMotionPlan_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motion_plan

  current_alignment += get_serialized_size_trajectory_msgs__msg__JointTrajectory(
    &(ros_message->motion_plan), current_alignment);
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GenerateMotionPlan_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_snp_msgs__srv__GenerateMotionPlan_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_snp_msgs
size_t max_serialized_size_snp_msgs__srv__GenerateMotionPlan_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motion_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_trajectory_msgs__msg__JointTrajectory(
        full_bounded, current_alignment);
    }
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GenerateMotionPlan_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_snp_msgs__srv__GenerateMotionPlan_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GenerateMotionPlan_Response = {
  "snp_msgs::srv",
  "GenerateMotionPlan_Response",
  _GenerateMotionPlan_Response__cdr_serialize,
  _GenerateMotionPlan_Response__cdr_deserialize,
  _GenerateMotionPlan_Response__get_serialized_size,
  _GenerateMotionPlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _GenerateMotionPlan_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenerateMotionPlan_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, srv, GenerateMotionPlan_Response)() {
  return &_GenerateMotionPlan_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "snp_msgs/srv/generate_motion_plan.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GenerateMotionPlan__callbacks = {
  "snp_msgs::srv",
  "GenerateMotionPlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, srv, GenerateMotionPlan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, srv, GenerateMotionPlan_Response)(),
};

static rosidl_service_type_support_t GenerateMotionPlan__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GenerateMotionPlan__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, snp_msgs, srv, GenerateMotionPlan)() {
  return &GenerateMotionPlan__handle;
}

#if defined(__cplusplus)
}
#endif

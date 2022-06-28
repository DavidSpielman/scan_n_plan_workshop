// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice
#include "snp_msgs/srv/detail/generate_motion_plan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "snp_msgs/srv/detail/generate_motion_plan__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace snp_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const snp_msgs::msg::ToolPaths &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  snp_msgs::msg::ToolPaths &);
size_t get_serialized_size(
  const snp_msgs::msg::ToolPaths &,
  size_t current_alignment);
size_t
max_serialized_size_ToolPaths(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace snp_msgs


namespace snp_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
cdr_serialize(
  const snp_msgs::srv::GenerateMotionPlan_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tool_paths
  snp_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tool_paths,
    cdr);
  // Member: motion_group
  cdr << ros_message.motion_group;
  // Member: tcp_frame
  cdr << ros_message.tcp_frame;
  // Member: mesh_filename
  cdr << ros_message.mesh_filename;
  // Member: mesh_frame
  cdr << ros_message.mesh_frame;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  snp_msgs::srv::GenerateMotionPlan_Request & ros_message)
{
  // Member: tool_paths
  snp_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tool_paths);

  // Member: motion_group
  cdr >> ros_message.motion_group;

  // Member: tcp_frame
  cdr >> ros_message.tcp_frame;

  // Member: mesh_filename
  cdr >> ros_message.mesh_filename;

  // Member: mesh_frame
  cdr >> ros_message.mesh_frame;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
get_serialized_size(
  const snp_msgs::srv::GenerateMotionPlan_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tool_paths

  current_alignment +=
    snp_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tool_paths, current_alignment);
  // Member: motion_group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motion_group.size() + 1);
  // Member: tcp_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tcp_frame.size() + 1);
  // Member: mesh_filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mesh_filename.size() + 1);
  // Member: mesh_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mesh_frame.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
max_serialized_size_GenerateMotionPlan_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tool_paths
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        snp_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ToolPaths(
        full_bounded, current_alignment);
    }
  }

  // Member: motion_group
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: tcp_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: mesh_filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: mesh_frame
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

static bool _GenerateMotionPlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const snp_msgs::srv::GenerateMotionPlan_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GenerateMotionPlan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<snp_msgs::srv::GenerateMotionPlan_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GenerateMotionPlan_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const snp_msgs::srv::GenerateMotionPlan_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GenerateMotionPlan_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GenerateMotionPlan_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GenerateMotionPlan_Request__callbacks = {
  "snp_msgs::srv",
  "GenerateMotionPlan_Request",
  _GenerateMotionPlan_Request__cdr_serialize,
  _GenerateMotionPlan_Request__cdr_deserialize,
  _GenerateMotionPlan_Request__get_serialized_size,
  _GenerateMotionPlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _GenerateMotionPlan_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GenerateMotionPlan_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace snp_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_snp_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<snp_msgs::srv::GenerateMotionPlan_Request>()
{
  return &snp_msgs::srv::typesupport_fastrtps_cpp::_GenerateMotionPlan_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, snp_msgs, srv, GenerateMotionPlan_Request)() {
  return &snp_msgs::srv::typesupport_fastrtps_cpp::_GenerateMotionPlan_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const trajectory_msgs::msg::JointTrajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  trajectory_msgs::msg::JointTrajectory &);
size_t get_serialized_size(
  const trajectory_msgs::msg::JointTrajectory &,
  size_t current_alignment);
size_t
max_serialized_size_JointTrajectory(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace trajectory_msgs


namespace snp_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
cdr_serialize(
  const snp_msgs::srv::GenerateMotionPlan_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motion_plan
  trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.motion_plan,
    cdr);
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  snp_msgs::srv::GenerateMotionPlan_Response & ros_message)
{
  // Member: motion_plan
  trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.motion_plan);

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
get_serialized_size(
  const snp_msgs::srv::GenerateMotionPlan_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motion_plan

  current_alignment +=
    trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.motion_plan, current_alignment);
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_snp_msgs
max_serialized_size_GenerateMotionPlan_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motion_plan
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointTrajectory(
        full_bounded, current_alignment);
    }
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
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

static bool _GenerateMotionPlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const snp_msgs::srv::GenerateMotionPlan_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GenerateMotionPlan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<snp_msgs::srv::GenerateMotionPlan_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GenerateMotionPlan_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const snp_msgs::srv::GenerateMotionPlan_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GenerateMotionPlan_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GenerateMotionPlan_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GenerateMotionPlan_Response__callbacks = {
  "snp_msgs::srv",
  "GenerateMotionPlan_Response",
  _GenerateMotionPlan_Response__cdr_serialize,
  _GenerateMotionPlan_Response__cdr_deserialize,
  _GenerateMotionPlan_Response__get_serialized_size,
  _GenerateMotionPlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _GenerateMotionPlan_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GenerateMotionPlan_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace snp_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_snp_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<snp_msgs::srv::GenerateMotionPlan_Response>()
{
  return &snp_msgs::srv::typesupport_fastrtps_cpp::_GenerateMotionPlan_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, snp_msgs, srv, GenerateMotionPlan_Response)() {
  return &snp_msgs::srv::typesupport_fastrtps_cpp::_GenerateMotionPlan_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace snp_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GenerateMotionPlan__callbacks = {
  "snp_msgs::srv",
  "GenerateMotionPlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, snp_msgs, srv, GenerateMotionPlan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, snp_msgs, srv, GenerateMotionPlan_Response)(),
};

static rosidl_service_type_support_t _GenerateMotionPlan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GenerateMotionPlan__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace snp_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_snp_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<snp_msgs::srv::GenerateMotionPlan>()
{
  return &snp_msgs::srv::typesupport_fastrtps_cpp::_GenerateMotionPlan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, snp_msgs, srv, GenerateMotionPlan)() {
  return &snp_msgs::srv::typesupport_fastrtps_cpp::_GenerateMotionPlan__handle;
}

#ifdef __cplusplus
}
#endif

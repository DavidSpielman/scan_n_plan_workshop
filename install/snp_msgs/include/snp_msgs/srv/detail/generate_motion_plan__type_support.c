// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snp_msgs/srv/detail/generate_motion_plan__rosidl_typesupport_introspection_c.h"
#include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snp_msgs/srv/detail/generate_motion_plan__functions.h"
#include "snp_msgs/srv/detail/generate_motion_plan__struct.h"


// Include directives for member types
// Member `tool_paths`
#include "snp_msgs/msg/tool_paths.h"
// Member `tool_paths`
#include "snp_msgs/msg/detail/tool_paths__rosidl_typesupport_introspection_c.h"
// Member `motion_group`
// Member `tcp_frame`
// Member `mesh_filename`
// Member `mesh_frame`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__srv__GenerateMotionPlan_Request__init(message_memory);
}

void GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_fini_function(void * message_memory)
{
  snp_msgs__srv__GenerateMotionPlan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_member_array[5] = {
  {
    "tool_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Request, tool_paths),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Request, motion_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tcp_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Request, tcp_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mesh_filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Request, mesh_filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mesh_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Request, mesh_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_members = {
  "snp_msgs__srv",  // message namespace
  "GenerateMotionPlan_Request",  // message name
  5,  // number of fields
  sizeof(snp_msgs__srv__GenerateMotionPlan_Request),
  GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_member_array,  // message members
  GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_type_support_handle = {
  0,
  &GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateMotionPlan_Request)() {
  GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, msg, ToolPaths)();
  if (!GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_type_support_handle.typesupport_identifier) {
    GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GenerateMotionPlan_Request__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "snp_msgs/srv/detail/generate_motion_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "snp_msgs/srv/detail/generate_motion_plan__functions.h"
// already included above
// #include "snp_msgs/srv/detail/generate_motion_plan__struct.h"


// Include directives for member types
// Member `motion_plan`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `motion_plan`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__srv__GenerateMotionPlan_Response__init(message_memory);
}

void GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_fini_function(void * message_memory)
{
  snp_msgs__srv__GenerateMotionPlan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_member_array[3] = {
  {
    "motion_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Response, motion_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateMotionPlan_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_members = {
  "snp_msgs__srv",  // message namespace
  "GenerateMotionPlan_Response",  // message name
  3,  // number of fields
  sizeof(snp_msgs__srv__GenerateMotionPlan_Response),
  GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_member_array,  // message members
  GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_type_support_handle = {
  0,
  &GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateMotionPlan_Response)() {
  GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_type_support_handle.typesupport_identifier) {
    GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GenerateMotionPlan_Response__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "snp_msgs/srv/detail/generate_motion_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_service_members = {
  "snp_msgs__srv",  // service namespace
  "GenerateMotionPlan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_Request_message_type_support_handle,
  NULL  // response message
  // snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_Response_message_type_support_handle
};

static rosidl_service_type_support_t snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_service_type_support_handle = {
  0,
  &snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateMotionPlan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateMotionPlan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateMotionPlan)() {
  if (!snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_service_type_support_handle.typesupport_identifier) {
    snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateMotionPlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateMotionPlan_Response)()->data;
  }

  return &snp_msgs__srv__detail__generate_motion_plan__rosidl_typesupport_introspection_c__GenerateMotionPlan_service_type_support_handle;
}

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snp_msgs:srv/ExecuteMotionPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snp_msgs/srv/detail/execute_motion_plan__rosidl_typesupport_introspection_c.h"
#include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snp_msgs/srv/detail/execute_motion_plan__functions.h"
#include "snp_msgs/srv/detail/execute_motion_plan__struct.h"


// Include directives for member types
// Member `motion_plan`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `motion_plan`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__srv__ExecuteMotionPlan_Request__init(message_memory);
}

void ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_fini_function(void * message_memory)
{
  snp_msgs__srv__ExecuteMotionPlan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_member_array[2] = {
  {
    "motion_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__ExecuteMotionPlan_Request, motion_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_tool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__ExecuteMotionPlan_Request, use_tool),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_members = {
  "snp_msgs__srv",  // message namespace
  "ExecuteMotionPlan_Request",  // message name
  2,  // number of fields
  sizeof(snp_msgs__srv__ExecuteMotionPlan_Request),
  ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_member_array,  // message members
  ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_type_support_handle = {
  0,
  &ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, ExecuteMotionPlan_Request)() {
  ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  if (!ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_type_support_handle.typesupport_identifier) {
    ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecuteMotionPlan_Request__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "snp_msgs/srv/detail/execute_motion_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "snp_msgs/srv/detail/execute_motion_plan__functions.h"
// already included above
// #include "snp_msgs/srv/detail/execute_motion_plan__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__srv__ExecuteMotionPlan_Response__init(message_memory);
}

void ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_fini_function(void * message_memory)
{
  snp_msgs__srv__ExecuteMotionPlan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__ExecuteMotionPlan_Response, success),  // bytes offset in struct
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
    offsetof(snp_msgs__srv__ExecuteMotionPlan_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_members = {
  "snp_msgs__srv",  // message namespace
  "ExecuteMotionPlan_Response",  // message name
  2,  // number of fields
  sizeof(snp_msgs__srv__ExecuteMotionPlan_Response),
  ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_member_array,  // message members
  ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_type_support_handle = {
  0,
  &ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, ExecuteMotionPlan_Response)() {
  if (!ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_type_support_handle.typesupport_identifier) {
    ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecuteMotionPlan_Response__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "snp_msgs/srv/detail/execute_motion_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_service_members = {
  "snp_msgs__srv",  // service namespace
  "ExecuteMotionPlan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Request_message_type_support_handle,
  NULL  // response message
  // snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_Response_message_type_support_handle
};

static rosidl_service_type_support_t snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_service_type_support_handle = {
  0,
  &snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, ExecuteMotionPlan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, ExecuteMotionPlan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, ExecuteMotionPlan)() {
  if (!snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_service_type_support_handle.typesupport_identifier) {
    snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, ExecuteMotionPlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, ExecuteMotionPlan_Response)()->data;
  }

  return &snp_msgs__srv__detail__execute_motion_plan__rosidl_typesupport_introspection_c__ExecuteMotionPlan_service_type_support_handle;
}

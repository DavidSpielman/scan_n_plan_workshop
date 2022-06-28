// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "snp_msgs/srv/detail/generate_tool_paths__rosidl_typesupport_introspection_c.h"
#include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "snp_msgs/srv/detail/generate_tool_paths__functions.h"
#include "snp_msgs/srv/detail/generate_tool_paths__struct.h"


// Include directives for member types
// Member `mesh_filename`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__srv__GenerateToolPaths_Request__init(message_memory);
}

void GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_fini_function(void * message_memory)
{
  snp_msgs__srv__GenerateToolPaths_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_member_array[6] = {
  {
    "mesh_filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Request, mesh_filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_spacing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Request, line_spacing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_hole_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Request, min_hole_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_segment_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Request, min_segment_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_spacing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Request, point_spacing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "search_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Request, search_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_members = {
  "snp_msgs__srv",  // message namespace
  "GenerateToolPaths_Request",  // message name
  6,  // number of fields
  sizeof(snp_msgs__srv__GenerateToolPaths_Request),
  GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_member_array,  // message members
  GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_type_support_handle = {
  0,
  &GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateToolPaths_Request)() {
  if (!GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_type_support_handle.typesupport_identifier) {
    GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GenerateToolPaths_Request__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "snp_msgs/srv/detail/generate_tool_paths__rosidl_typesupport_introspection_c.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "snp_msgs/srv/detail/generate_tool_paths__functions.h"
// already included above
// #include "snp_msgs/srv/detail/generate_tool_paths__struct.h"


// Include directives for member types
// Member `tool_paths`
#include "snp_msgs/msg/tool_paths.h"
// Member `tool_paths`
#include "snp_msgs/msg/detail/tool_paths__rosidl_typesupport_introspection_c.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  snp_msgs__srv__GenerateToolPaths_Response__init(message_memory);
}

void GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_fini_function(void * message_memory)
{
  snp_msgs__srv__GenerateToolPaths_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs__srv__GenerateToolPaths_Response, tool_paths),  // bytes offset in struct
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
    offsetof(snp_msgs__srv__GenerateToolPaths_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_members = {
  "snp_msgs__srv",  // message namespace
  "GenerateToolPaths_Response",  // message name
  3,  // number of fields
  sizeof(snp_msgs__srv__GenerateToolPaths_Response),
  GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_member_array,  // message members
  GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_type_support_handle = {
  0,
  &GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateToolPaths_Response)() {
  GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, msg, ToolPaths)();
  if (!GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_type_support_handle.typesupport_identifier) {
    GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GenerateToolPaths_Response__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "snp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "snp_msgs/srv/detail/generate_tool_paths__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_service_members = {
  "snp_msgs__srv",  // service namespace
  "GenerateToolPaths",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_Request_message_type_support_handle,
  NULL  // response message
  // snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_Response_message_type_support_handle
};

static rosidl_service_type_support_t snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_service_type_support_handle = {
  0,
  &snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateToolPaths_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateToolPaths_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_snp_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateToolPaths)() {
  if (!snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_service_type_support_handle.typesupport_identifier) {
    snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateToolPaths_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, snp_msgs, srv, GenerateToolPaths_Response)()->data;
  }

  return &snp_msgs__srv__detail__generate_tool_paths__rosidl_typesupport_introspection_c__GenerateToolPaths_service_type_support_handle;
}

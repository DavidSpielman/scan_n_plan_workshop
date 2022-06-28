// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "snp_msgs/msg/detail/tool_path__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace snp_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ToolPath_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) snp_msgs::msg::ToolPath(_init);
}

void ToolPath_fini_function(void * message_memory)
{
  auto typed_message = static_cast<snp_msgs::msg::ToolPath *>(message_memory);
  typed_message->~ToolPath();
}

size_t size_function__ToolPath__segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ToolPath__segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ToolPath__segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  return &member[index];
}

void resize_function__ToolPath__segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ToolPath_message_member_array[1] = {
  {
    "segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(snp_msgs::msg::ToolPath, segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__ToolPath__segments,  // size() function pointer
    get_const_function__ToolPath__segments,  // get_const(index) function pointer
    get_function__ToolPath__segments,  // get(index) function pointer
    resize_function__ToolPath__segments  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ToolPath_message_members = {
  "snp_msgs::msg",  // message namespace
  "ToolPath",  // message name
  1,  // number of fields
  sizeof(snp_msgs::msg::ToolPath),
  ToolPath_message_member_array,  // message members
  ToolPath_init_function,  // function to initialize message memory (memory has to be allocated)
  ToolPath_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ToolPath_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ToolPath_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace snp_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<snp_msgs::msg::ToolPath>()
{
  return &::snp_msgs::msg::rosidl_typesupport_introspection_cpp::ToolPath_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, snp_msgs, msg, ToolPath)() {
  return &::snp_msgs::msg::rosidl_typesupport_introspection_cpp::ToolPath_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

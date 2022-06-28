// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__STRUCT_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Request __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateMotionPlan_Request_
{
  using Type = GenerateMotionPlan_Request_<ContainerAllocator>;

  explicit GenerateMotionPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool_paths(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_group = "";
      this->tcp_frame = "";
      this->mesh_filename = "";
      this->mesh_frame = "";
    }
  }

  explicit GenerateMotionPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool_paths(_alloc, _init),
    motion_group(_alloc),
    tcp_frame(_alloc),
    mesh_filename(_alloc),
    mesh_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_group = "";
      this->tcp_frame = "";
      this->mesh_filename = "";
      this->mesh_frame = "";
    }
  }

  // field types and members
  using _tool_paths_type =
    snp_msgs::msg::ToolPaths_<ContainerAllocator>;
  _tool_paths_type tool_paths;
  using _motion_group_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motion_group_type motion_group;
  using _tcp_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tcp_frame_type tcp_frame;
  using _mesh_filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mesh_filename_type mesh_filename;
  using _mesh_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mesh_frame_type mesh_frame;

  // setters for named parameter idiom
  Type & set__tool_paths(
    const snp_msgs::msg::ToolPaths_<ContainerAllocator> & _arg)
  {
    this->tool_paths = _arg;
    return *this;
  }
  Type & set__motion_group(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motion_group = _arg;
    return *this;
  }
  Type & set__tcp_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tcp_frame = _arg;
    return *this;
  }
  Type & set__mesh_filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mesh_filename = _arg;
    return *this;
  }
  Type & set__mesh_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mesh_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Request
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Request
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateMotionPlan_Request_ & other) const
  {
    if (this->tool_paths != other.tool_paths) {
      return false;
    }
    if (this->motion_group != other.motion_group) {
      return false;
    }
    if (this->tcp_frame != other.tcp_frame) {
      return false;
    }
    if (this->mesh_filename != other.mesh_filename) {
      return false;
    }
    if (this->mesh_frame != other.mesh_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateMotionPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateMotionPlan_Request_

// alias to use template instance with default allocator
using GenerateMotionPlan_Request =
  snp_msgs::srv::GenerateMotionPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace snp_msgs


// Include directives for member types
// Member 'motion_plan'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Response __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateMotionPlan_Response_
{
  using Type = GenerateMotionPlan_Response_<ContainerAllocator>;

  explicit GenerateMotionPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion_plan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GenerateMotionPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion_plan(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _motion_plan_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _motion_plan_type motion_plan;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__motion_plan(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->motion_plan = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Response
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__srv__GenerateMotionPlan_Response
    std::shared_ptr<snp_msgs::srv::GenerateMotionPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateMotionPlan_Response_ & other) const
  {
    if (this->motion_plan != other.motion_plan) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateMotionPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateMotionPlan_Response_

// alias to use template instance with default allocator
using GenerateMotionPlan_Response =
  snp_msgs::srv::GenerateMotionPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace snp_msgs

namespace snp_msgs
{

namespace srv
{

struct GenerateMotionPlan
{
  using Request = snp_msgs::srv::GenerateMotionPlan_Request;
  using Response = snp_msgs::srv::GenerateMotionPlan_Response;
};

}  // namespace srv

}  // namespace snp_msgs

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__STRUCT_HPP_

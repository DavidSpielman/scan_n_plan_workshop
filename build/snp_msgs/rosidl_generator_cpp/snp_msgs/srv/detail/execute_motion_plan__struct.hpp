// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snp_msgs:srv/ExecuteMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__STRUCT_HPP_
#define SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'motion_plan'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Request __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPlan_Request_
{
  using Type = ExecuteMotionPlan_Request_<ContainerAllocator>;

  explicit ExecuteMotionPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion_plan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_tool = false;
    }
  }

  explicit ExecuteMotionPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motion_plan(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_tool = false;
    }
  }

  // field types and members
  using _motion_plan_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _motion_plan_type motion_plan;
  using _use_tool_type =
    bool;
  _use_tool_type use_tool;

  // setters for named parameter idiom
  Type & set__motion_plan(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->motion_plan = _arg;
    return *this;
  }
  Type & set__use_tool(
    const bool & _arg)
  {
    this->use_tool = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Request
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Request
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPlan_Request_ & other) const
  {
    if (this->motion_plan != other.motion_plan) {
      return false;
    }
    if (this->use_tool != other.use_tool) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPlan_Request_

// alias to use template instance with default allocator
using ExecuteMotionPlan_Request =
  snp_msgs::srv::ExecuteMotionPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace snp_msgs


#ifndef _WIN32
# define DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Response __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteMotionPlan_Response_
{
  using Type = ExecuteMotionPlan_Response_<ContainerAllocator>;

  explicit ExecuteMotionPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ExecuteMotionPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
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
    snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Response
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__srv__ExecuteMotionPlan_Response
    std::shared_ptr<snp_msgs::srv::ExecuteMotionPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMotionPlan_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMotionPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMotionPlan_Response_

// alias to use template instance with default allocator
using ExecuteMotionPlan_Response =
  snp_msgs::srv::ExecuteMotionPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace snp_msgs

namespace snp_msgs
{

namespace srv
{

struct ExecuteMotionPlan
{
  using Request = snp_msgs::srv::ExecuteMotionPlan_Request;
  using Response = snp_msgs::srv::ExecuteMotionPlan_Response;
};

}  // namespace srv

}  // namespace snp_msgs

#endif  // SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__STRUCT_HPP_

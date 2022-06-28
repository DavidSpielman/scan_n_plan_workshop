// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATH__STRUCT_HPP_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'segments'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snp_msgs__msg__ToolPath __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__msg__ToolPath __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ToolPath_
{
  using Type = ToolPath_<ContainerAllocator>;

  explicit ToolPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ToolPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _segments_type =
    std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other>;
  _segments_type segments;

  // setters for named parameter idiom
  Type & set__segments(
    const std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other> & _arg)
  {
    this->segments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snp_msgs::msg::ToolPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::msg::ToolPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::msg::ToolPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::msg::ToolPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__msg__ToolPath
    std::shared_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__msg__ToolPath
    std::shared_ptr<snp_msgs::msg::ToolPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToolPath_ & other) const
  {
    if (this->segments != other.segments) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToolPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToolPath_

// alias to use template instance with default allocator
using ToolPath =
  snp_msgs::msg::ToolPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snp_msgs

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATH__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATHS__STRUCT_HPP_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATHS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'paths'
#include "snp_msgs/msg/detail/tool_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snp_msgs__msg__ToolPaths __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__msg__ToolPaths __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ToolPaths_
{
  using Type = ToolPaths_<ContainerAllocator>;

  explicit ToolPaths_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ToolPaths_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _paths_type =
    std::vector<snp_msgs::msg::ToolPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<snp_msgs::msg::ToolPath_<ContainerAllocator>>::other>;
  _paths_type paths;

  // setters for named parameter idiom
  Type & set__paths(
    const std::vector<snp_msgs::msg::ToolPath_<ContainerAllocator>, typename ContainerAllocator::template rebind<snp_msgs::msg::ToolPath_<ContainerAllocator>>::other> & _arg)
  {
    this->paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snp_msgs::msg::ToolPaths_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::msg::ToolPaths_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::msg::ToolPaths_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::msg::ToolPaths_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__msg__ToolPaths
    std::shared_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__msg__ToolPaths
    std::shared_ptr<snp_msgs::msg::ToolPaths_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToolPaths_ & other) const
  {
    if (this->paths != other.paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToolPaths_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToolPaths_

// alias to use template instance with default allocator
using ToolPaths =
  snp_msgs::msg::ToolPaths_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace snp_msgs

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATHS__STRUCT_HPP_

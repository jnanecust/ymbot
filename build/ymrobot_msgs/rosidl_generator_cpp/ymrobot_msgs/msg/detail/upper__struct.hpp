// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/Upper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/upper.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__UPPER__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__UPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__Upper __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__Upper __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Upper_
{
  using Type = Upper_<ContainerAllocator>;

  explicit Upper_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_status = false;
      this->auto_status = false;
    }
  }

  explicit Upper_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_status = false;
      this->auto_status = false;
    }
  }

  // field types and members
  using _chassis_status_type =
    bool;
  _chassis_status_type chassis_status;
  using _auto_status_type =
    bool;
  _auto_status_type auto_status;

  // setters for named parameter idiom
  Type & set__chassis_status(
    const bool & _arg)
  {
    this->chassis_status = _arg;
    return *this;
  }
  Type & set__auto_status(
    const bool & _arg)
  {
    this->auto_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::Upper_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::Upper_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::Upper_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::Upper_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__Upper
    std::shared_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__Upper
    std::shared_ptr<ymrobot_msgs::msg::Upper_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Upper_ & other) const
  {
    if (this->chassis_status != other.chassis_status) {
      return false;
    }
    if (this->auto_status != other.auto_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Upper_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Upper_

// alias to use template instance with default allocator
using Upper =
  ymrobot_msgs::msg::Upper_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__UPPER__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/TaskStatusCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task_status_code.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS_CODE__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS_CODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__TaskStatusCode __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__TaskStatusCode __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskStatusCode_
{
  using Type = TaskStatusCode_<ContainerAllocator>;

  explicit TaskStatusCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TaskStatusCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint8_t RUNNING =
    0u;
  static constexpr uint8_t DONDE =
    1u;
  static constexpr uint8_t SUCCEEDED =
    2u;
  static constexpr uint8_t ABORTED =
    3u;
  static constexpr uint8_t CANCLE =
    4u;
  static constexpr uint8_t HELD =
    5u;
  static constexpr uint8_t REFUSE =
    6u;
  static constexpr uint8_t NONE =
    7u;

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__TaskStatusCode
    std::shared_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__TaskStatusCode
    std::shared_ptr<ymrobot_msgs::msg::TaskStatusCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskStatusCode_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskStatusCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskStatusCode_

// alias to use template instance with default allocator
using TaskStatusCode =
  ymrobot_msgs::msg::TaskStatusCode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::DONDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::SUCCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::CANCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::HELD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::REFUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskStatusCode_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS_CODE__STRUCT_HPP_

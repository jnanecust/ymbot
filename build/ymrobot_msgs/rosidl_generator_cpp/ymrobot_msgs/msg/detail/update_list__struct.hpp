// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/UpdateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/update_list.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__UPDATE_LIST__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__UPDATE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__UpdateList __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__UpdateList __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateList_
{
  using Type = UpdateList_<ContainerAllocator>;

  explicit UpdateList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
    }
  }

  explicit UpdateList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
    }
  }

  // field types and members
  using _code_type =
    uint8_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__code(
    const uint8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POSE_MANAGER =
    0u;
  static constexpr uint8_t UP_CLIMB_ACTION =
    1u;
  static constexpr uint8_t EMOJI =
    2u;
  static constexpr uint8_t AUDIO =
    3u;
  static constexpr uint8_t ALL_ACTION =
    4u;

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::UpdateList_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::UpdateList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::UpdateList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::UpdateList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__UpdateList
    std::shared_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__UpdateList
    std::shared_ptr<ymrobot_msgs::msg::UpdateList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateList_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateList_

// alias to use template instance with default allocator
using UpdateList =
  ymrobot_msgs::msg::UpdateList_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpdateList_<ContainerAllocator>::POSE_MANAGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpdateList_<ContainerAllocator>::UP_CLIMB_ACTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpdateList_<ContainerAllocator>::EMOJI;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpdateList_<ContainerAllocator>::AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpdateList_<ContainerAllocator>::ALL_ACTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__UPDATE_LIST__STRUCT_HPP_

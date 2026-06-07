// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/DotPoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__DotPoints __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__DotPoints __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DotPoints_
{
  using Type = DotPoints_<ContainerAllocator>;

  explicit DotPoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->pose_name = "";
      this->map_name = "";
      this->pose_describe = "";
    }
  }

  explicit DotPoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_name(_alloc),
    map_name(_alloc),
    pose_describe(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->pose_name = "";
      this->map_name = "";
      this->pose_describe = "";
    }
  }

  // field types and members
  using _action_type =
    uint8_t;
  _action_type action;
  using _pose_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pose_name_type pose_name;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _pose_describe_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pose_describe_type pose_describe;

  // setters for named parameter idiom
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__pose_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pose_name = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__pose_describe(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pose_describe = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SAVE =
    0u;
  // guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
  static constexpr uint8_t DELETE =
    1u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::DotPoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::DotPoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::DotPoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::DotPoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__DotPoints
    std::shared_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__DotPoints
    std::shared_ptr<ymrobot_msgs::msg::DotPoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DotPoints_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->pose_name != other.pose_name) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->pose_describe != other.pose_describe) {
      return false;
    }
    return true;
  }
  bool operator!=(const DotPoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DotPoints_

// alias to use template instance with default allocator
using DotPoints =
  ymrobot_msgs::msg::DotPoints_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DotPoints_<ContainerAllocator>::SAVE;
#endif  // __cplusplus < 201703L
// guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DotPoints_<ContainerAllocator>::DELETE;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__STRUCT_HPP_

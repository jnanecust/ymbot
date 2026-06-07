// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/LedShow.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/led_show.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__LedShow __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__LedShow __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedShow_
{
  using Type = LedShow_<ContainerAllocator>;

  explicit LedShow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->luminance = 0;
      this->color_r = 0;
      this->color_g = 0;
      this->color_b = 0;
    }
  }

  explicit LedShow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->luminance = 0;
      this->color_r = 0;
      this->color_g = 0;
      this->color_b = 0;
    }
  }

  // field types and members
  using _luminance_type =
    uint8_t;
  _luminance_type luminance;
  using _color_r_type =
    uint8_t;
  _color_r_type color_r;
  using _color_g_type =
    uint8_t;
  _color_g_type color_g;
  using _color_b_type =
    uint8_t;
  _color_b_type color_b;

  // setters for named parameter idiom
  Type & set__luminance(
    const uint8_t & _arg)
  {
    this->luminance = _arg;
    return *this;
  }
  Type & set__color_r(
    const uint8_t & _arg)
  {
    this->color_r = _arg;
    return *this;
  }
  Type & set__color_g(
    const uint8_t & _arg)
  {
    this->color_g = _arg;
    return *this;
  }
  Type & set__color_b(
    const uint8_t & _arg)
  {
    this->color_b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::LedShow_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::LedShow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::LedShow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::LedShow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__LedShow
    std::shared_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__LedShow
    std::shared_ptr<ymrobot_msgs::msg::LedShow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedShow_ & other) const
  {
    if (this->luminance != other.luminance) {
      return false;
    }
    if (this->color_r != other.color_r) {
      return false;
    }
    if (this->color_g != other.color_g) {
      return false;
    }
    if (this->color_b != other.color_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedShow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedShow_

// alias to use template instance with default allocator
using LedShow =
  ymrobot_msgs::msg::LedShow_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__STRUCT_HPP_

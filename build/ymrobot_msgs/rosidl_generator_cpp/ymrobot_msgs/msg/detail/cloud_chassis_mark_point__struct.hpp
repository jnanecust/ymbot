// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_mark_point.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__CloudChassisMarkPoint __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__CloudChassisMarkPoint __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CloudChassisMarkPoint_
{
  using Type = CloudChassisMarkPoint_<ContainerAllocator>;

  explicit CloudChassisMarkPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_mode = 0;
      this->nav_target_name = "";
      this->nav_target_x = 0.0f;
      this->nav_target_y = 0.0f;
      this->nav_target_yaw = 0.0f;
      this->is_activate_the_nearby_point = false;
      this->nearby_point_radius = 0.0f;
    }
  }

  explicit CloudChassisMarkPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nav_target_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_mode = 0;
      this->nav_target_name = "";
      this->nav_target_x = 0.0f;
      this->nav_target_y = 0.0f;
      this->nav_target_yaw = 0.0f;
      this->is_activate_the_nearby_point = false;
      this->nearby_point_radius = 0.0f;
    }
  }

  // field types and members
  using _nav_mode_type =
    uint8_t;
  _nav_mode_type nav_mode;
  using _nav_target_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nav_target_name_type nav_target_name;
  using _nav_target_x_type =
    float;
  _nav_target_x_type nav_target_x;
  using _nav_target_y_type =
    float;
  _nav_target_y_type nav_target_y;
  using _nav_target_yaw_type =
    float;
  _nav_target_yaw_type nav_target_yaw;
  using _is_activate_the_nearby_point_type =
    bool;
  _is_activate_the_nearby_point_type is_activate_the_nearby_point;
  using _nearby_point_radius_type =
    float;
  _nearby_point_radius_type nearby_point_radius;

  // setters for named parameter idiom
  Type & set__nav_mode(
    const uint8_t & _arg)
  {
    this->nav_mode = _arg;
    return *this;
  }
  Type & set__nav_target_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nav_target_name = _arg;
    return *this;
  }
  Type & set__nav_target_x(
    const float & _arg)
  {
    this->nav_target_x = _arg;
    return *this;
  }
  Type & set__nav_target_y(
    const float & _arg)
  {
    this->nav_target_y = _arg;
    return *this;
  }
  Type & set__nav_target_yaw(
    const float & _arg)
  {
    this->nav_target_yaw = _arg;
    return *this;
  }
  Type & set__is_activate_the_nearby_point(
    const bool & _arg)
  {
    this->is_activate_the_nearby_point = _arg;
    return *this;
  }
  Type & set__nearby_point_radius(
    const float & _arg)
  {
    this->nearby_point_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__CloudChassisMarkPoint
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__CloudChassisMarkPoint
    std::shared_ptr<ymrobot_msgs::msg::CloudChassisMarkPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudChassisMarkPoint_ & other) const
  {
    if (this->nav_mode != other.nav_mode) {
      return false;
    }
    if (this->nav_target_name != other.nav_target_name) {
      return false;
    }
    if (this->nav_target_x != other.nav_target_x) {
      return false;
    }
    if (this->nav_target_y != other.nav_target_y) {
      return false;
    }
    if (this->nav_target_yaw != other.nav_target_yaw) {
      return false;
    }
    if (this->is_activate_the_nearby_point != other.is_activate_the_nearby_point) {
      return false;
    }
    if (this->nearby_point_radius != other.nearby_point_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudChassisMarkPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudChassisMarkPoint_

// alias to use template instance with default allocator
using CloudChassisMarkPoint =
  ymrobot_msgs::msg::CloudChassisMarkPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__STRUCT_HPP_

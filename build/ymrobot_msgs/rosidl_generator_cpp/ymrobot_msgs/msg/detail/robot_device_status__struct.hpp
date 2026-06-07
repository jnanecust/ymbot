// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/robot_device_status.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__RobotDeviceStatus __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__RobotDeviceStatus __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotDeviceStatus_
{
  using Type = RobotDeviceStatus_<ContainerAllocator>;

  explicit RobotDeviceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->battery_percentage = 0.0f;
      this->battery_temperature = 0.0f;
      this->left_motor_speed = 0l;
      this->right_motor_speed = 0l;
      this->left_motor_temperature = 0.0f;
      this->right_motor_temperature = 0.0f;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
      this->cpu_temperature = 0.0f;
      this->disk_space_percentage = 0.0f;
      this->mainboard_temperature = 0.0f;
    }
  }

  explicit RobotDeviceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->battery_percentage = 0.0f;
      this->battery_temperature = 0.0f;
      this->left_motor_speed = 0l;
      this->right_motor_speed = 0l;
      this->left_motor_temperature = 0.0f;
      this->right_motor_temperature = 0.0f;
      this->cpu_usage = 0.0f;
      this->memory_usage = 0.0f;
      this->cpu_temperature = 0.0f;
      this->disk_space_percentage = 0.0f;
      this->mainboard_temperature = 0.0f;
    }
  }

  // field types and members
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _battery_temperature_type =
    float;
  _battery_temperature_type battery_temperature;
  using _left_motor_speed_type =
    int32_t;
  _left_motor_speed_type left_motor_speed;
  using _right_motor_speed_type =
    int32_t;
  _right_motor_speed_type right_motor_speed;
  using _left_motor_temperature_type =
    float;
  _left_motor_temperature_type left_motor_temperature;
  using _right_motor_temperature_type =
    float;
  _right_motor_temperature_type right_motor_temperature;
  using _cpu_usage_type =
    float;
  _cpu_usage_type cpu_usage;
  using _memory_usage_type =
    float;
  _memory_usage_type memory_usage;
  using _cpu_temperature_type =
    float;
  _cpu_temperature_type cpu_temperature;
  using _disk_space_percentage_type =
    float;
  _disk_space_percentage_type disk_space_percentage;
  using _mainboard_temperature_type =
    float;
  _mainboard_temperature_type mainboard_temperature;

  // setters for named parameter idiom
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__battery_temperature(
    const float & _arg)
  {
    this->battery_temperature = _arg;
    return *this;
  }
  Type & set__left_motor_speed(
    const int32_t & _arg)
  {
    this->left_motor_speed = _arg;
    return *this;
  }
  Type & set__right_motor_speed(
    const int32_t & _arg)
  {
    this->right_motor_speed = _arg;
    return *this;
  }
  Type & set__left_motor_temperature(
    const float & _arg)
  {
    this->left_motor_temperature = _arg;
    return *this;
  }
  Type & set__right_motor_temperature(
    const float & _arg)
  {
    this->right_motor_temperature = _arg;
    return *this;
  }
  Type & set__cpu_usage(
    const float & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__memory_usage(
    const float & _arg)
  {
    this->memory_usage = _arg;
    return *this;
  }
  Type & set__cpu_temperature(
    const float & _arg)
  {
    this->cpu_temperature = _arg;
    return *this;
  }
  Type & set__disk_space_percentage(
    const float & _arg)
  {
    this->disk_space_percentage = _arg;
    return *this;
  }
  Type & set__mainboard_temperature(
    const float & _arg)
  {
    this->mainboard_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__RobotDeviceStatus
    std::shared_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__RobotDeviceStatus
    std::shared_ptr<ymrobot_msgs::msg::RobotDeviceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotDeviceStatus_ & other) const
  {
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->battery_temperature != other.battery_temperature) {
      return false;
    }
    if (this->left_motor_speed != other.left_motor_speed) {
      return false;
    }
    if (this->right_motor_speed != other.right_motor_speed) {
      return false;
    }
    if (this->left_motor_temperature != other.left_motor_temperature) {
      return false;
    }
    if (this->right_motor_temperature != other.right_motor_temperature) {
      return false;
    }
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->memory_usage != other.memory_usage) {
      return false;
    }
    if (this->cpu_temperature != other.cpu_temperature) {
      return false;
    }
    if (this->disk_space_percentage != other.disk_space_percentage) {
      return false;
    }
    if (this->mainboard_temperature != other.mainboard_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotDeviceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotDeviceStatus_

// alias to use template instance with default allocator
using RobotDeviceStatus =
  ymrobot_msgs::msg::RobotDeviceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__STRUCT_HPP_

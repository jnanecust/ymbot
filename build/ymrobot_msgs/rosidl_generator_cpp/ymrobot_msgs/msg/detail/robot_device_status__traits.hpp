// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/robot_device_status.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/robot_device_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotDeviceStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: battery_temperature
  {
    out << "battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_temperature, out);
    out << ", ";
  }

  // member: left_motor_speed
  {
    out << "left_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_speed, out);
    out << ", ";
  }

  // member: right_motor_speed
  {
    out << "right_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_speed, out);
    out << ", ";
  }

  // member: left_motor_temperature
  {
    out << "left_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_temperature, out);
    out << ", ";
  }

  // member: right_motor_temperature
  {
    out << "right_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_temperature, out);
    out << ", ";
  }

  // member: cpu_usage
  {
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << ", ";
  }

  // member: memory_usage
  {
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << ", ";
  }

  // member: cpu_temperature
  {
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
    out << ", ";
  }

  // member: disk_space_percentage
  {
    out << "disk_space_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.disk_space_percentage, out);
    out << ", ";
  }

  // member: mainboard_temperature
  {
    out << "mainboard_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mainboard_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotDeviceStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: battery_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_temperature, out);
    out << "\n";
  }

  // member: left_motor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_speed, out);
    out << "\n";
  }

  // member: right_motor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_speed, out);
    out << "\n";
  }

  // member: left_motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_temperature, out);
    out << "\n";
  }

  // member: right_motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_temperature, out);
    out << "\n";
  }

  // member: cpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << "\n";
  }

  // member: memory_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << "\n";
  }

  // member: cpu_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
    out << "\n";
  }

  // member: disk_space_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_space_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.disk_space_percentage, out);
    out << "\n";
  }

  // member: mainboard_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mainboard_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mainboard_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotDeviceStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ymrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ymrobot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ymrobot_msgs::msg::RobotDeviceStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::RobotDeviceStatus & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::RobotDeviceStatus>()
{
  return "ymrobot_msgs::msg::RobotDeviceStatus";
}

template<>
inline const char * name<ymrobot_msgs::msg::RobotDeviceStatus>()
{
  return "ymrobot_msgs/msg/RobotDeviceStatus";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::RobotDeviceStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::RobotDeviceStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ymrobot_msgs::msg::RobotDeviceStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__TRAITS_HPP_

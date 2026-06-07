// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_status.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/cloud_chassis_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CloudChassisStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: charge_state
  {
    out << "charge_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_state, out);
    out << ", ";
  }

  // member: soft_estop_state
  {
    out << "soft_estop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.soft_estop_state, out);
    out << ", ";
  }

  // member: hard_estop_state
  {
    out << "hard_estop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_estop_state, out);
    out << ", ";
  }

  // member: estop_state
  {
    out << "estop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_state, out);
    out << ", ";
  }

  // member: power_percent
  {
    out << "power_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.power_percent, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: current_floor
  {
    out << "current_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_floor, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: move_target
  {
    out << "move_target: ";
    rosidl_generator_traits::value_to_yaml(msg.move_target, out);
    out << ", ";
  }

  // member: move_status
  {
    out << "move_status: ";
    rosidl_generator_traits::value_to_yaml(msg.move_status, out);
    out << ", ";
  }

  // member: running_status
  {
    out << "running_status: ";
    rosidl_generator_traits::value_to_yaml(msg.running_status, out);
    out << ", ";
  }

  // member: target_floor
  {
    out << "target_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.target_floor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CloudChassisStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: charge_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_state, out);
    out << "\n";
  }

  // member: soft_estop_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soft_estop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.soft_estop_state, out);
    out << "\n";
  }

  // member: hard_estop_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hard_estop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.hard_estop_state, out);
    out << "\n";
  }

  // member: estop_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_state, out);
    out << "\n";
  }

  // member: power_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.power_percent, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: current_floor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_floor, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: move_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_target: ";
    rosidl_generator_traits::value_to_yaml(msg.move_target, out);
    out << "\n";
  }

  // member: move_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_status: ";
    rosidl_generator_traits::value_to_yaml(msg.move_status, out);
    out << "\n";
  }

  // member: running_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "running_status: ";
    rosidl_generator_traits::value_to_yaml(msg.running_status, out);
    out << "\n";
  }

  // member: target_floor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.target_floor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CloudChassisStatus & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::CloudChassisStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::CloudChassisStatus & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::CloudChassisStatus>()
{
  return "ymrobot_msgs::msg::CloudChassisStatus";
}

template<>
inline const char * name<ymrobot_msgs::msg::CloudChassisStatus>()
{
  return "ymrobot_msgs/msg/CloudChassisStatus";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::CloudChassisStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::CloudChassisStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::CloudChassisStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__TRAITS_HPP_

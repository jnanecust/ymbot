// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/HumanoidMovebase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/humanoid_movebase.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/humanoid_movebase__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HumanoidMovebase & msg,
  std::ostream & out)
{
  out << "{";
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HumanoidMovebase & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanoidMovebase & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::HumanoidMovebase & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::HumanoidMovebase & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::HumanoidMovebase>()
{
  return "ymrobot_msgs::msg::HumanoidMovebase";
}

template<>
inline const char * name<ymrobot_msgs::msg::HumanoidMovebase>()
{
  return "ymrobot_msgs/msg/HumanoidMovebase";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::HumanoidMovebase>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::HumanoidMovebase>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ymrobot_msgs::msg::HumanoidMovebase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__TRAITS_HPP_

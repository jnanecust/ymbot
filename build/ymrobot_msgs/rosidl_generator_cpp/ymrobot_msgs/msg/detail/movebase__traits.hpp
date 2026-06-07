// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/Movebase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/movebase.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/movebase__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Movebase & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movebase & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movebase & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::Movebase & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::Movebase & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::Movebase>()
{
  return "ymrobot_msgs::msg::Movebase";
}

template<>
inline const char * name<ymrobot_msgs::msg::Movebase>()
{
  return "ymrobot_msgs/msg/Movebase";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::Movebase>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::Movebase>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ymrobot_msgs::msg::Movebase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__TRAITS_HPP_

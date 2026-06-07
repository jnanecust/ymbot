// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/DotPoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/dot_points__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DotPoints & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: pose_name
  {
    out << "pose_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_name, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: pose_describe
  {
    out << "pose_describe: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_describe, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DotPoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: pose_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_name, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: pose_describe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_describe: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_describe, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DotPoints & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::DotPoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::DotPoints & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::DotPoints>()
{
  return "ymrobot_msgs::msg::DotPoints";
}

template<>
inline const char * name<ymrobot_msgs::msg::DotPoints>()
{
  return "ymrobot_msgs/msg/DotPoints";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::DotPoints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::DotPoints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::DotPoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/SlamCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/slam_command.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/slam_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SlamCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: mapping
  {
    out << "mapping: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping, out);
    out << ", ";
  }

  // member: relocalize
  {
    out << "relocalize: ";
    rosidl_generator_traits::value_to_yaml(msg.relocalize, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << ", ";
  }

  // member: stop
  {
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlamCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mapping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mapping: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping, out);
    out << "\n";
  }

  // member: relocalize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relocalize: ";
    rosidl_generator_traits::value_to_yaml(msg.relocalize, out);
    out << "\n";
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlamCommand & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::SlamCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::SlamCommand & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::SlamCommand>()
{
  return "ymrobot_msgs::msg::SlamCommand";
}

template<>
inline const char * name<ymrobot_msgs::msg::SlamCommand>()
{
  return "ymrobot_msgs/msg/SlamCommand";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::SlamCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::SlamCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::SlamCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__TRAITS_HPP_

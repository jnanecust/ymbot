// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/MapTaskCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/map_task_command.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MAP_TASK_COMMAND__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__MAP_TASK_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/map_task_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapTaskCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapTaskCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapTaskCommand & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::MapTaskCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::MapTaskCommand & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::MapTaskCommand>()
{
  return "ymrobot_msgs::msg::MapTaskCommand";
}

template<>
inline const char * name<ymrobot_msgs::msg::MapTaskCommand>()
{
  return "ymrobot_msgs/msg/MapTaskCommand";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::MapTaskCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::MapTaskCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ymrobot_msgs::msg::MapTaskCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__MAP_TASK_COMMAND__TRAITS_HPP_

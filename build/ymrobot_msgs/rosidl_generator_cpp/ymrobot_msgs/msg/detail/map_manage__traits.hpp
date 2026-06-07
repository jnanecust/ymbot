// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/MapManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/map_manage.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/map_manage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'map_task'
#include "ymrobot_msgs/msg/detail/map_task_command__traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapManage & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_task
  {
    out << "map_task: ";
    to_flow_style_yaml(msg.map_task, out);
    out << ", ";
  }

  // member: pcd_file
  {
    out << "pcd_file: ";
    rosidl_generator_traits::value_to_yaml(msg.pcd_file, out);
    out << ", ";
  }

  // member: pgm_file
  {
    out << "pgm_file: ";
    rosidl_generator_traits::value_to_yaml(msg.pgm_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapManage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_task:\n";
    to_block_style_yaml(msg.map_task, out, indentation + 2);
  }

  // member: pcd_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcd_file: ";
    rosidl_generator_traits::value_to_yaml(msg.pcd_file, out);
    out << "\n";
  }

  // member: pgm_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pgm_file: ";
    rosidl_generator_traits::value_to_yaml(msg.pgm_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapManage & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::MapManage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::MapManage & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::MapManage>()
{
  return "ymrobot_msgs::msg::MapManage";
}

template<>
inline const char * name<ymrobot_msgs::msg::MapManage>()
{
  return "ymrobot_msgs/msg/MapManage";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::MapManage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::MapManage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::MapManage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__TRAITS_HPP_

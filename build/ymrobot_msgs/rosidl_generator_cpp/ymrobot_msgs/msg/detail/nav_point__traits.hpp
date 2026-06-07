// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/NavPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/nav_point.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/nav_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: nav_name
  {
    out << "nav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_name, out);
    out << ", ";
  }

  // member: nav_map_name
  {
    out << "nav_map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_map_name, out);
    out << ", ";
  }

  // member: map_index
  {
    out << "map_index: ";
    rosidl_generator_traits::value_to_yaml(msg.map_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: nav_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_name: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_name, out);
    out << "\n";
  }

  // member: nav_map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_map_name, out);
    out << "\n";
  }

  // member: map_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_index: ";
    rosidl_generator_traits::value_to_yaml(msg.map_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavPoint & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::NavPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::NavPoint & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::NavPoint>()
{
  return "ymrobot_msgs::msg::NavPoint";
}

template<>
inline const char * name<ymrobot_msgs::msg::NavPoint>()
{
  return "ymrobot_msgs/msg/NavPoint";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::NavPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::NavPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::NavPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__NAV_POINT__TRAITS_HPP_

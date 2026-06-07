// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_mark_point.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CloudChassisMarkPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: nav_mode
  {
    out << "nav_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_mode, out);
    out << ", ";
  }

  // member: nav_target_name
  {
    out << "nav_target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_name, out);
    out << ", ";
  }

  // member: nav_target_x
  {
    out << "nav_target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_x, out);
    out << ", ";
  }

  // member: nav_target_y
  {
    out << "nav_target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_y, out);
    out << ", ";
  }

  // member: nav_target_yaw
  {
    out << "nav_target_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_yaw, out);
    out << ", ";
  }

  // member: is_activate_the_nearby_point
  {
    out << "is_activate_the_nearby_point: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activate_the_nearby_point, out);
    out << ", ";
  }

  // member: nearby_point_radius
  {
    out << "nearby_point_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.nearby_point_radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CloudChassisMarkPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nav_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_mode, out);
    out << "\n";
  }

  // member: nav_target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_name, out);
    out << "\n";
  }

  // member: nav_target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_x, out);
    out << "\n";
  }

  // member: nav_target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_y, out);
    out << "\n";
  }

  // member: nav_target_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_target_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_target_yaw, out);
    out << "\n";
  }

  // member: is_activate_the_nearby_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_activate_the_nearby_point: ";
    rosidl_generator_traits::value_to_yaml(msg.is_activate_the_nearby_point, out);
    out << "\n";
  }

  // member: nearby_point_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearby_point_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.nearby_point_radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CloudChassisMarkPoint & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::CloudChassisMarkPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::CloudChassisMarkPoint & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::CloudChassisMarkPoint>()
{
  return "ymrobot_msgs::msg::CloudChassisMarkPoint";
}

template<>
inline const char * name<ymrobot_msgs::msg::CloudChassisMarkPoint>()
{
  return "ymrobot_msgs/msg/CloudChassisMarkPoint";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::CloudChassisMarkPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::CloudChassisMarkPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::CloudChassisMarkPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_MARK_POINT__TRAITS_HPP_

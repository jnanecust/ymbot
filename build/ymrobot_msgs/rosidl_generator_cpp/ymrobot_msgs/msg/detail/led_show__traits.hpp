// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/LedShow.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/led_show.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/led_show__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedShow & msg,
  std::ostream & out)
{
  out << "{";
  // member: luminance
  {
    out << "luminance: ";
    rosidl_generator_traits::value_to_yaml(msg.luminance, out);
    out << ", ";
  }

  // member: color_r
  {
    out << "color_r: ";
    rosidl_generator_traits::value_to_yaml(msg.color_r, out);
    out << ", ";
  }

  // member: color_g
  {
    out << "color_g: ";
    rosidl_generator_traits::value_to_yaml(msg.color_g, out);
    out << ", ";
  }

  // member: color_b
  {
    out << "color_b: ";
    rosidl_generator_traits::value_to_yaml(msg.color_b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedShow & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: luminance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "luminance: ";
    rosidl_generator_traits::value_to_yaml(msg.luminance, out);
    out << "\n";
  }

  // member: color_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_r: ";
    rosidl_generator_traits::value_to_yaml(msg.color_r, out);
    out << "\n";
  }

  // member: color_g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_g: ";
    rosidl_generator_traits::value_to_yaml(msg.color_g, out);
    out << "\n";
  }

  // member: color_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_b: ";
    rosidl_generator_traits::value_to_yaml(msg.color_b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedShow & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::LedShow & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::LedShow & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::LedShow>()
{
  return "ymrobot_msgs::msg::LedShow";
}

template<>
inline const char * name<ymrobot_msgs::msg::LedShow>()
{
  return "ymrobot_msgs/msg/LedShow";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::LedShow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::LedShow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ymrobot_msgs::msg::LedShow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__TRAITS_HPP_

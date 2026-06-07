// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/DotPointsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/dot_points_list.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/dot_points_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dot_points_list'
#include "ymrobot_msgs/msg/detail/dot_points__traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DotPointsList & msg,
  std::ostream & out)
{
  out << "{";
  // member: dot_points_list
  {
    if (msg.dot_points_list.size() == 0) {
      out << "dot_points_list: []";
    } else {
      out << "dot_points_list: [";
      size_t pending_items = msg.dot_points_list.size();
      for (auto item : msg.dot_points_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DotPointsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dot_points_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dot_points_list.size() == 0) {
      out << "dot_points_list: []\n";
    } else {
      out << "dot_points_list:\n";
      for (auto item : msg.dot_points_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DotPointsList & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::DotPointsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::DotPointsList & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::DotPointsList>()
{
  return "ymrobot_msgs::msg::DotPointsList";
}

template<>
inline const char * name<ymrobot_msgs::msg::DotPointsList>()
{
  return "ymrobot_msgs/msg/DotPointsList";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::DotPointsList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::DotPointsList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::DotPointsList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__DOT_POINTS_LIST__TRAITS_HPP_

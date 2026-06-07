// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/GuideRoute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/guide_route.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/guide_route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GuideRoute & msg,
  std::ostream & out)
{
  out << "{";
  // member: mark_points_list
  {
    if (msg.mark_points_list.size() == 0) {
      out << "mark_points_list: []";
    } else {
      out << "mark_points_list: [";
      size_t pending_items = msg.mark_points_list.size();
      for (auto item : msg.mark_points_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: audios_list
  {
    if (msg.audios_list.size() == 0) {
      out << "audios_list: []";
    } else {
      out << "audios_list: [";
      size_t pending_items = msg.audios_list.size();
      for (auto item : msg.audios_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GuideRoute & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mark_points_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mark_points_list.size() == 0) {
      out << "mark_points_list: []\n";
    } else {
      out << "mark_points_list:\n";
      for (auto item : msg.mark_points_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: audios_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.audios_list.size() == 0) {
      out << "audios_list: []\n";
    } else {
      out << "audios_list:\n";
      for (auto item : msg.audios_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GuideRoute & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::GuideRoute & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::GuideRoute & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::GuideRoute>()
{
  return "ymrobot_msgs::msg::GuideRoute";
}

template<>
inline const char * name<ymrobot_msgs::msg::GuideRoute>()
{
  return "ymrobot_msgs/msg/GuideRoute";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::GuideRoute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::GuideRoute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::GuideRoute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__GUIDE_ROUTE__TRAITS_HPP_

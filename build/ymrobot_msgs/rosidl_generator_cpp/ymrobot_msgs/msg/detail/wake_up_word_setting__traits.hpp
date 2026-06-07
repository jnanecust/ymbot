// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/WakeUpWordSetting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/wake_up_word_setting.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/wake_up_word_setting__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WakeUpWordSetting & msg,
  std::ostream & out)
{
  out << "{";
  // member: wake_up_word
  {
    if (msg.wake_up_word.size() == 0) {
      out << "wake_up_word: []";
    } else {
      out << "wake_up_word: [";
      size_t pending_items = msg.wake_up_word.size();
      for (auto item : msg.wake_up_word) {
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
  const WakeUpWordSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wake_up_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wake_up_word.size() == 0) {
      out << "wake_up_word: []\n";
    } else {
      out << "wake_up_word:\n";
      for (auto item : msg.wake_up_word) {
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

inline std::string to_yaml(const WakeUpWordSetting & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::WakeUpWordSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::WakeUpWordSetting & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::WakeUpWordSetting>()
{
  return "ymrobot_msgs::msg::WakeUpWordSetting";
}

template<>
inline const char * name<ymrobot_msgs::msg::WakeUpWordSetting>()
{
  return "ymrobot_msgs/msg/WakeUpWordSetting";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::WakeUpWordSetting>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::WakeUpWordSetting>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::WakeUpWordSetting>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/voice_message.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/voice_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VoiceMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: audio_task_type
  {
    out << "audio_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.audio_task_type, out);
    out << ", ";
  }

  // member: fixed_audio_name
  {
    out << "fixed_audio_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_audio_name, out);
    out << ", ";
  }

  // member: timbre
  {
    out << "timbre: ";
    rosidl_generator_traits::value_to_yaml(msg.timbre, out);
    out << ", ";
  }

  // member: synthetic_audio_txt
  {
    out << "synthetic_audio_txt: ";
    rosidl_generator_traits::value_to_yaml(msg.synthetic_audio_txt, out);
    out << ", ";
  }

  // member: synthetic_audio_title
  {
    out << "synthetic_audio_title: ";
    rosidl_generator_traits::value_to_yaml(msg.synthetic_audio_title, out);
    out << ", ";
  }

  // member: delete_fixed_audio
  {
    out << "delete_fixed_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.delete_fixed_audio, out);
    out << ", ";
  }

  // member: play_online_audio
  {
    out << "play_online_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.play_online_audio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoiceMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: audio_task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "audio_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.audio_task_type, out);
    out << "\n";
  }

  // member: fixed_audio_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_audio_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_audio_name, out);
    out << "\n";
  }

  // member: timbre
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timbre: ";
    rosidl_generator_traits::value_to_yaml(msg.timbre, out);
    out << "\n";
  }

  // member: synthetic_audio_txt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "synthetic_audio_txt: ";
    rosidl_generator_traits::value_to_yaml(msg.synthetic_audio_txt, out);
    out << "\n";
  }

  // member: synthetic_audio_title
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "synthetic_audio_title: ";
    rosidl_generator_traits::value_to_yaml(msg.synthetic_audio_title, out);
    out << "\n";
  }

  // member: delete_fixed_audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delete_fixed_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.delete_fixed_audio, out);
    out << "\n";
  }

  // member: play_online_audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "play_online_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.play_online_audio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoiceMessage & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::VoiceMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::VoiceMessage & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::VoiceMessage>()
{
  return "ymrobot_msgs::msg::VoiceMessage";
}

template<>
inline const char * name<ymrobot_msgs::msg::VoiceMessage>()
{
  return "ymrobot_msgs/msg/VoiceMessage";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::VoiceMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::VoiceMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::VoiceMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__TRAITS_HPP_

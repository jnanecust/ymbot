// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/ImageVideo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/image_video.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/image_video__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageVideo & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_task_type
  {
    out << "camera_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_task_type, out);
    out << ", ";
  }

  // member: number_of_photos
  {
    out << "number_of_photos: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_photos, out);
    out << ", ";
  }

  // member: photos_interval
  {
    out << "photos_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.photos_interval, out);
    out << ", ";
  }

  // member: video_recording_time
  {
    out << "video_recording_time: ";
    rosidl_generator_traits::value_to_yaml(msg.video_recording_time, out);
    out << ", ";
  }

  // member: detect_target_name
  {
    out << "detect_target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_target_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageVideo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_task_type, out);
    out << "\n";
  }

  // member: number_of_photos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_photos: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_photos, out);
    out << "\n";
  }

  // member: photos_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "photos_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.photos_interval, out);
    out << "\n";
  }

  // member: video_recording_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "video_recording_time: ";
    rosidl_generator_traits::value_to_yaml(msg.video_recording_time, out);
    out << "\n";
  }

  // member: detect_target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detect_target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.detect_target_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageVideo & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::ImageVideo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::ImageVideo & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::ImageVideo>()
{
  return "ymrobot_msgs::msg::ImageVideo";
}

template<>
inline const char * name<ymrobot_msgs::msg::ImageVideo>()
{
  return "ymrobot_msgs/msg/ImageVideo";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::ImageVideo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::ImageVideo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::ImageVideo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__TRAITS_HPP_

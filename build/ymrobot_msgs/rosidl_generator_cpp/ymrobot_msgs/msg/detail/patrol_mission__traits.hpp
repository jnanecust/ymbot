// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/patrol_mission.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/patrol_mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_video_msg'
#include "ymrobot_msgs/msg/detail/image_video__traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PatrolMission & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_video_msg
  {
    out << "image_video_msg: ";
    to_flow_style_yaml(msg.image_video_msg, out);
    out << ", ";
  }

  // member: is_audio_played_throughout_the_entire_process
  {
    out << "is_audio_played_throughout_the_entire_process: ";
    rosidl_generator_traits::value_to_yaml(msg.is_audio_played_throughout_the_entire_process, out);
    out << ", ";
  }

  // member: full_audio_name
  {
    out << "full_audio_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_audio_name, out);
    out << ", ";
  }

  // member: is_the_entire_process_recorded
  {
    out << "is_the_entire_process_recorded: ";
    rosidl_generator_traits::value_to_yaml(msg.is_the_entire_process_recorded, out);
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
    out << ", ";
  }

  // member: nav_name_list
  {
    if (msg.nav_name_list.size() == 0) {
      out << "nav_name_list: []";
    } else {
      out << "nav_name_list: [";
      size_t pending_items = msg.nav_name_list.size();
      for (auto item : msg.nav_name_list) {
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
  const PatrolMission & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_video_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_video_msg:\n";
    to_block_style_yaml(msg.image_video_msg, out, indentation + 2);
  }

  // member: is_audio_played_throughout_the_entire_process
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_audio_played_throughout_the_entire_process: ";
    rosidl_generator_traits::value_to_yaml(msg.is_audio_played_throughout_the_entire_process, out);
    out << "\n";
  }

  // member: full_audio_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_audio_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_audio_name, out);
    out << "\n";
  }

  // member: is_the_entire_process_recorded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_the_entire_process_recorded: ";
    rosidl_generator_traits::value_to_yaml(msg.is_the_entire_process_recorded, out);
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

  // member: nav_name_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nav_name_list.size() == 0) {
      out << "nav_name_list: []\n";
    } else {
      out << "nav_name_list:\n";
      for (auto item : msg.nav_name_list) {
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

inline std::string to_yaml(const PatrolMission & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::PatrolMission & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::PatrolMission & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::PatrolMission>()
{
  return "ymrobot_msgs::msg::PatrolMission";
}

template<>
inline const char * name<ymrobot_msgs::msg::PatrolMission>()
{
  return "ymrobot_msgs/msg/PatrolMission";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::PatrolMission>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::PatrolMission>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::PatrolMission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__TRAITS_HPP_

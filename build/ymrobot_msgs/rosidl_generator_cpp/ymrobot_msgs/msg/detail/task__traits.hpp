// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nav_points'
#include "ymrobot_msgs/msg/detail/nav_point__traits.hpp"
// Member 'commands'
#include "ymrobot_msgs/msg/detail/command__traits.hpp"
// Member 'binary_file'
#include "ymrobot_msgs/msg/detail/binary_data__traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Task & msg,
  std::ostream & out)
{
  out << "{";
  // member: platform_id
  {
    out << "platform_id: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_id, out);
    out << ", ";
  }

  // member: amr_id
  {
    out << "amr_id: ";
    rosidl_generator_traits::value_to_yaml(msg.amr_id, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: task_type
  {
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: nav_points
  {
    if (msg.nav_points.size() == 0) {
      out << "nav_points: []";
    } else {
      out << "nav_points: [";
      size_t pending_items = msg.nav_points.size();
      for (auto item : msg.nav_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: commands
  {
    if (msg.commands.size() == 0) {
      out << "commands: []";
    } else {
      out << "commands: [";
      size_t pending_items = msg.commands.size();
      for (auto item : msg.commands) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: behavior_tree
  {
    out << "behavior_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_tree, out);
    out << ", ";
  }

  // member: reload
  {
    out << "reload: ";
    rosidl_generator_traits::value_to_yaml(msg.reload, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: binary_file
  {
    out << "binary_file: ";
    to_flow_style_yaml(msg.binary_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Task & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: platform_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "platform_id: ";
    rosidl_generator_traits::value_to_yaml(msg.platform_id, out);
    out << "\n";
  }

  // member: amr_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amr_id: ";
    rosidl_generator_traits::value_to_yaml(msg.amr_id, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: nav_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nav_points.size() == 0) {
      out << "nav_points: []\n";
    } else {
      out << "nav_points:\n";
      for (auto item : msg.nav_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commands.size() == 0) {
      out << "commands: []\n";
    } else {
      out << "commands:\n";
      for (auto item : msg.commands) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: behavior_tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_tree, out);
    out << "\n";
  }

  // member: reload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reload: ";
    rosidl_generator_traits::value_to_yaml(msg.reload, out);
    out << "\n";
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: binary_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "binary_file:\n";
    to_block_style_yaml(msg.binary_file, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Task & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::Task & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::Task & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::Task>()
{
  return "ymrobot_msgs::msg::Task";
}

template<>
inline const char * name<ymrobot_msgs::msg::Task>()
{
  return "ymrobot_msgs/msg/Task";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::Task>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:msg/BTNodeTaskState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/bt_node_task_state.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__TRAITS_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/msg/detail/bt_node_task_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BTNodeTaskState & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: node_task_state
  {
    out << "node_task_state: ";
    rosidl_generator_traits::value_to_yaml(msg.node_task_state, out);
    out << ", ";
  }

  // member: node_task_error
  {
    out << "node_task_error: ";
    rosidl_generator_traits::value_to_yaml(msg.node_task_error, out);
    out << ", ";
  }

  // member: node_task_error_message
  {
    out << "node_task_error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.node_task_error_message, out);
    out << ", ";
  }

  // member: node_action_content
  {
    out << "node_action_content: ";
    rosidl_generator_traits::value_to_yaml(msg.node_action_content, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BTNodeTaskState & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: node_task_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_task_state: ";
    rosidl_generator_traits::value_to_yaml(msg.node_task_state, out);
    out << "\n";
  }

  // member: node_task_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_task_error: ";
    rosidl_generator_traits::value_to_yaml(msg.node_task_error, out);
    out << "\n";
  }

  // member: node_task_error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_task_error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.node_task_error_message, out);
    out << "\n";
  }

  // member: node_action_content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_action_content: ";
    rosidl_generator_traits::value_to_yaml(msg.node_action_content, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BTNodeTaskState & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::msg::BTNodeTaskState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::msg::BTNodeTaskState & msg)
{
  return ymrobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::msg::BTNodeTaskState>()
{
  return "ymrobot_msgs::msg::BTNodeTaskState";
}

template<>
inline const char * name<ymrobot_msgs::msg::BTNodeTaskState>()
{
  return "ymrobot_msgs/msg/BTNodeTaskState";
}

template<>
struct has_fixed_size<ymrobot_msgs::msg::BTNodeTaskState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::msg::BTNodeTaskState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::msg::BTNodeTaskState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__TRAITS_HPP_

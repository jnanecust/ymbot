// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:srv/LargeModelRequestTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/large_model_request_task.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__TRAITS_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/srv/detail/large_model_request_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LargeModelRequestTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: larget_mode_task_type
  {
    out << "larget_mode_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.larget_mode_task_type, out);
    out << ", ";
  }

  // member: mark_point_name
  {
    out << "mark_point_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mark_point_name, out);
    out << ", ";
  }

  // member: mark_point_name_list
  {
    if (msg.mark_point_name_list.size() == 0) {
      out << "mark_point_name_list: []";
    } else {
      out << "mark_point_name_list: [";
      size_t pending_items = msg.mark_point_name_list.size();
      for (auto item : msg.mark_point_name_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: guidance_task_name
  {
    out << "guidance_task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.guidance_task_name, out);
    out << ", ";
  }

  // member: upper_climb_fixed_action
  {
    out << "upper_climb_fixed_action: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_climb_fixed_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LargeModelRequestTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: larget_mode_task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "larget_mode_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.larget_mode_task_type, out);
    out << "\n";
  }

  // member: mark_point_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mark_point_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mark_point_name, out);
    out << "\n";
  }

  // member: mark_point_name_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mark_point_name_list.size() == 0) {
      out << "mark_point_name_list: []\n";
    } else {
      out << "mark_point_name_list:\n";
      for (auto item : msg.mark_point_name_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: guidance_task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guidance_task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.guidance_task_name, out);
    out << "\n";
  }

  // member: upper_climb_fixed_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_climb_fixed_action: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_climb_fixed_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LargeModelRequestTask_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ymrobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ymrobot_msgs::srv::LargeModelRequestTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::LargeModelRequestTask_Request & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::LargeModelRequestTask_Request>()
{
  return "ymrobot_msgs::srv::LargeModelRequestTask_Request";
}

template<>
inline const char * name<ymrobot_msgs::srv::LargeModelRequestTask_Request>()
{
  return "ymrobot_msgs/srv/LargeModelRequestTask_Request";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::LargeModelRequestTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::LargeModelRequestTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LargeModelRequestTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LargeModelRequestTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LargeModelRequestTask_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ymrobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ymrobot_msgs::srv::LargeModelRequestTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::LargeModelRequestTask_Response & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::LargeModelRequestTask_Response>()
{
  return "ymrobot_msgs::srv::LargeModelRequestTask_Response";
}

template<>
inline const char * name<ymrobot_msgs::srv::LargeModelRequestTask_Response>()
{
  return "ymrobot_msgs/srv/LargeModelRequestTask_Response";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::LargeModelRequestTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::LargeModelRequestTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LargeModelRequestTask_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const LargeModelRequestTask_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LargeModelRequestTask_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ymrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ymrobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ymrobot_msgs::srv::LargeModelRequestTask_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::LargeModelRequestTask_Event & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::LargeModelRequestTask_Event>()
{
  return "ymrobot_msgs::srv::LargeModelRequestTask_Event";
}

template<>
inline const char * name<ymrobot_msgs::srv::LargeModelRequestTask_Event>()
{
  return "ymrobot_msgs/srv/LargeModelRequestTask_Event";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::LargeModelRequestTask_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask_Request>::value && has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask_Response>::value> {};

template<>
struct is_message<ymrobot_msgs::srv::LargeModelRequestTask_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ymrobot_msgs::srv::LargeModelRequestTask>()
{
  return "ymrobot_msgs::srv::LargeModelRequestTask";
}

template<>
inline const char * name<ymrobot_msgs::srv::LargeModelRequestTask>()
{
  return "ymrobot_msgs/srv/LargeModelRequestTask";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::LargeModelRequestTask>
  : std::integral_constant<
    bool,
    has_fixed_size<ymrobot_msgs::srv::LargeModelRequestTask_Request>::value &&
    has_fixed_size<ymrobot_msgs::srv::LargeModelRequestTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask>
  : std::integral_constant<
    bool,
    has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask_Request>::value &&
    has_bounded_size<ymrobot_msgs::srv::LargeModelRequestTask_Response>::value
  >
{
};

template<>
struct is_service<ymrobot_msgs::srv::LargeModelRequestTask>
  : std::true_type
{
};

template<>
struct is_service_request<ymrobot_msgs::srv::LargeModelRequestTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ymrobot_msgs::srv::LargeModelRequestTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__TRAITS_HPP_

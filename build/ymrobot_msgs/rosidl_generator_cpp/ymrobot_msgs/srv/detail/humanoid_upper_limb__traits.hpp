// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:srv/HumanoidUpperLimb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/humanoid_upper_limb.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__TRAITS_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/srv/detail/humanoid_upper_limb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HumanoidUpperLimb_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: upper_action_task_type
  {
    out << "upper_action_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_action_task_type, out);
    out << ", ";
  }

  // member: fixed_upper_action
  {
    out << "fixed_upper_action: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_upper_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HumanoidUpperLimb_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: upper_action_task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_action_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_action_task_type, out);
    out << "\n";
  }

  // member: fixed_upper_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_upper_action: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_upper_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanoidUpperLimb_Request & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::HumanoidUpperLimb_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::HumanoidUpperLimb_Request & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::HumanoidUpperLimb_Request>()
{
  return "ymrobot_msgs::srv::HumanoidUpperLimb_Request";
}

template<>
inline const char * name<ymrobot_msgs::srv::HumanoidUpperLimb_Request>()
{
  return "ymrobot_msgs/srv/HumanoidUpperLimb_Request";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::HumanoidUpperLimb_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::HumanoidUpperLimb_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HumanoidUpperLimb_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: total_elapsed_time
  {
    out << "total_elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_elapsed_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HumanoidUpperLimb_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: total_elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.total_elapsed_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanoidUpperLimb_Response & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::HumanoidUpperLimb_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::HumanoidUpperLimb_Response & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::HumanoidUpperLimb_Response>()
{
  return "ymrobot_msgs::srv::HumanoidUpperLimb_Response";
}

template<>
inline const char * name<ymrobot_msgs::srv::HumanoidUpperLimb_Response>()
{
  return "ymrobot_msgs/srv/HumanoidUpperLimb_Response";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::HumanoidUpperLimb_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::HumanoidUpperLimb_Response>
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
  const HumanoidUpperLimb_Event & msg,
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
  const HumanoidUpperLimb_Event & msg,
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

inline std::string to_yaml(const HumanoidUpperLimb_Event & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::HumanoidUpperLimb_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::HumanoidUpperLimb_Event & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::HumanoidUpperLimb_Event>()
{
  return "ymrobot_msgs::srv::HumanoidUpperLimb_Event";
}

template<>
inline const char * name<ymrobot_msgs::srv::HumanoidUpperLimb_Event>()
{
  return "ymrobot_msgs/srv/HumanoidUpperLimb_Event";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::HumanoidUpperLimb_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb_Request>::value && has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb_Response>::value> {};

template<>
struct is_message<ymrobot_msgs::srv::HumanoidUpperLimb_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ymrobot_msgs::srv::HumanoidUpperLimb>()
{
  return "ymrobot_msgs::srv::HumanoidUpperLimb";
}

template<>
inline const char * name<ymrobot_msgs::srv::HumanoidUpperLimb>()
{
  return "ymrobot_msgs/srv/HumanoidUpperLimb";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::HumanoidUpperLimb>
  : std::integral_constant<
    bool,
    has_fixed_size<ymrobot_msgs::srv::HumanoidUpperLimb_Request>::value &&
    has_fixed_size<ymrobot_msgs::srv::HumanoidUpperLimb_Response>::value
  >
{
};

template<>
struct has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb>
  : std::integral_constant<
    bool,
    has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb_Request>::value &&
    has_bounded_size<ymrobot_msgs::srv::HumanoidUpperLimb_Response>::value
  >
{
};

template<>
struct is_service<ymrobot_msgs::srv::HumanoidUpperLimb>
  : std::true_type
{
};

template<>
struct is_service_request<ymrobot_msgs::srv::HumanoidUpperLimb_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ymrobot_msgs::srv::HumanoidUpperLimb_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__TRAITS_HPP_

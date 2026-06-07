// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:srv/UpLimb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/up_limb.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__TRAITS_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/srv/detail/up_limb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpLimb_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: up_limb_task_type
  {
    out << "up_limb_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.up_limb_task_type, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: place_joint_list
  {
    if (msg.place_joint_list.size() == 0) {
      out << "place_joint_list: []";
    } else {
      out << "place_joint_list: [";
      size_t pending_items = msg.place_joint_list.size();
      for (auto item : msg.place_joint_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: action_fixed
  {
    out << "action_fixed: ";
    rosidl_generator_traits::value_to_yaml(msg.action_fixed, out);
    out << ", ";
  }

  // member: left_and_right_select
  {
    out << "left_and_right_select: ";
    rosidl_generator_traits::value_to_yaml(msg.left_and_right_select, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpLimb_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: up_limb_task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "up_limb_task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.up_limb_task_type, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: place_joint_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.place_joint_list.size() == 0) {
      out << "place_joint_list: []\n";
    } else {
      out << "place_joint_list:\n";
      for (auto item : msg.place_joint_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: action_fixed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_fixed: ";
    rosidl_generator_traits::value_to_yaml(msg.action_fixed, out);
    out << "\n";
  }

  // member: left_and_right_select
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_and_right_select: ";
    rosidl_generator_traits::value_to_yaml(msg.left_and_right_select, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpLimb_Request & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::UpLimb_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::UpLimb_Request & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::UpLimb_Request>()
{
  return "ymrobot_msgs::srv::UpLimb_Request";
}

template<>
inline const char * name<ymrobot_msgs::srv::UpLimb_Request>()
{
  return "ymrobot_msgs/srv/UpLimb_Request";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::UpLimb_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::UpLimb_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::UpLimb_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UpLimb_Response & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UpLimb_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UpLimb_Response & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::UpLimb_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::UpLimb_Response & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::UpLimb_Response>()
{
  return "ymrobot_msgs::srv::UpLimb_Response";
}

template<>
inline const char * name<ymrobot_msgs::srv::UpLimb_Response>()
{
  return "ymrobot_msgs/srv/UpLimb_Response";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::UpLimb_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::UpLimb_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::UpLimb_Response>
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
  const UpLimb_Event & msg,
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
  const UpLimb_Event & msg,
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

inline std::string to_yaml(const UpLimb_Event & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::UpLimb_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::UpLimb_Event & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::UpLimb_Event>()
{
  return "ymrobot_msgs::srv::UpLimb_Event";
}

template<>
inline const char * name<ymrobot_msgs::srv::UpLimb_Event>()
{
  return "ymrobot_msgs/srv/UpLimb_Event";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::UpLimb_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::UpLimb_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ymrobot_msgs::srv::UpLimb_Request>::value && has_bounded_size<ymrobot_msgs::srv::UpLimb_Response>::value> {};

template<>
struct is_message<ymrobot_msgs::srv::UpLimb_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ymrobot_msgs::srv::UpLimb>()
{
  return "ymrobot_msgs::srv::UpLimb";
}

template<>
inline const char * name<ymrobot_msgs::srv::UpLimb>()
{
  return "ymrobot_msgs/srv/UpLimb";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::UpLimb>
  : std::integral_constant<
    bool,
    has_fixed_size<ymrobot_msgs::srv::UpLimb_Request>::value &&
    has_fixed_size<ymrobot_msgs::srv::UpLimb_Response>::value
  >
{
};

template<>
struct has_bounded_size<ymrobot_msgs::srv::UpLimb>
  : std::integral_constant<
    bool,
    has_bounded_size<ymrobot_msgs::srv::UpLimb_Request>::value &&
    has_bounded_size<ymrobot_msgs::srv::UpLimb_Response>::value
  >
{
};

template<>
struct is_service<ymrobot_msgs::srv::UpLimb>
  : std::true_type
{
};

template<>
struct is_service_request<ymrobot_msgs::srv::UpLimb_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ymrobot_msgs::srv::UpLimb_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__TRAITS_HPP_

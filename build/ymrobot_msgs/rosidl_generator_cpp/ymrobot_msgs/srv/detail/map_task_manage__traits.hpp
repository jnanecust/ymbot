// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ymrobot_msgs:srv/MapTaskManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/map_task_manage.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__TRAITS_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ymrobot_msgs/srv/detail/map_task_manage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'map_task'
#include "ymrobot_msgs/msg/detail/map_task_command__traits.hpp"

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MapTaskManage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_task
  {
    out << "map_task: ";
    to_flow_style_yaml(msg.map_task, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: pcd_name
  {
    out << "pcd_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pcd_name, out);
    out << ", ";
  }

  // member: pgm_name
  {
    out << "pgm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pgm_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapTaskManage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_task:\n";
    to_block_style_yaml(msg.map_task, out, indentation + 2);
  }

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: pcd_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcd_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pcd_name, out);
    out << "\n";
  }

  // member: pgm_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pgm_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pgm_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapTaskManage_Request & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::MapTaskManage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::MapTaskManage_Request & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::MapTaskManage_Request>()
{
  return "ymrobot_msgs::srv::MapTaskManage_Request";
}

template<>
inline const char * name<ymrobot_msgs::srv::MapTaskManage_Request>()
{
  return "ymrobot_msgs/srv/MapTaskManage_Request";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::MapTaskManage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::MapTaskManage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::MapTaskManage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ymrobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MapTaskManage_Response & msg,
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
  const MapTaskManage_Response & msg,
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

inline std::string to_yaml(const MapTaskManage_Response & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::MapTaskManage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::MapTaskManage_Response & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::MapTaskManage_Response>()
{
  return "ymrobot_msgs::srv::MapTaskManage_Response";
}

template<>
inline const char * name<ymrobot_msgs::srv::MapTaskManage_Response>()
{
  return "ymrobot_msgs/srv/MapTaskManage_Response";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::MapTaskManage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::MapTaskManage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ymrobot_msgs::srv::MapTaskManage_Response>
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
  const MapTaskManage_Event & msg,
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
  const MapTaskManage_Event & msg,
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

inline std::string to_yaml(const MapTaskManage_Event & msg, bool use_flow_style = false)
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
  const ymrobot_msgs::srv::MapTaskManage_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ymrobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ymrobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ymrobot_msgs::srv::MapTaskManage_Event & msg)
{
  return ymrobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ymrobot_msgs::srv::MapTaskManage_Event>()
{
  return "ymrobot_msgs::srv::MapTaskManage_Event";
}

template<>
inline const char * name<ymrobot_msgs::srv::MapTaskManage_Event>()
{
  return "ymrobot_msgs/srv/MapTaskManage_Event";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::MapTaskManage_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ymrobot_msgs::srv::MapTaskManage_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ymrobot_msgs::srv::MapTaskManage_Request>::value && has_bounded_size<ymrobot_msgs::srv::MapTaskManage_Response>::value> {};

template<>
struct is_message<ymrobot_msgs::srv::MapTaskManage_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ymrobot_msgs::srv::MapTaskManage>()
{
  return "ymrobot_msgs::srv::MapTaskManage";
}

template<>
inline const char * name<ymrobot_msgs::srv::MapTaskManage>()
{
  return "ymrobot_msgs/srv/MapTaskManage";
}

template<>
struct has_fixed_size<ymrobot_msgs::srv::MapTaskManage>
  : std::integral_constant<
    bool,
    has_fixed_size<ymrobot_msgs::srv::MapTaskManage_Request>::value &&
    has_fixed_size<ymrobot_msgs::srv::MapTaskManage_Response>::value
  >
{
};

template<>
struct has_bounded_size<ymrobot_msgs::srv::MapTaskManage>
  : std::integral_constant<
    bool,
    has_bounded_size<ymrobot_msgs::srv::MapTaskManage_Request>::value &&
    has_bounded_size<ymrobot_msgs::srv::MapTaskManage_Response>::value
  >
{
};

template<>
struct is_service<ymrobot_msgs::srv::MapTaskManage>
  : std::true_type
{
};

template<>
struct is_service_request<ymrobot_msgs::srv::MapTaskManage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ymrobot_msgs::srv::MapTaskManage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__TRAITS_HPP_

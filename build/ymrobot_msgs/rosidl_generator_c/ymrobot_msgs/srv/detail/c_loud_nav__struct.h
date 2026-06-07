// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/CLoudNav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/c_loud_nav.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nav_target_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CLoudNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__CLoudNav_Request
{
  /// 导航模式  0: 目标名导航  1：坐标点导航
  uint8_t nav_mode;
  /// 导航目标名
  rosidl_runtime_c__String nav_target_name;
  /// 导航目标x坐标
  double nav_target_x;
  /// 导航目标y坐标
  double nav_target_y;
  /// 导航目标yaw角度
  double nav_target_yaw;
} ymrobot_msgs__srv__CLoudNav_Request;

// Struct for a sequence of ymrobot_msgs__srv__CLoudNav_Request.
typedef struct ymrobot_msgs__srv__CLoudNav_Request__Sequence
{
  ymrobot_msgs__srv__CLoudNav_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__CLoudNav_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CLoudNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__CLoudNav_Response
{
  /// 是否成功
  bool success;
  /// 消息反馈  --失败原因 成功了 啥的........
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__CLoudNav_Response;

// Struct for a sequence of ymrobot_msgs__srv__CLoudNav_Response.
typedef struct ymrobot_msgs__srv__CLoudNav_Response__Sequence
{
  ymrobot_msgs__srv__CLoudNav_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__CLoudNav_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__CLoudNav_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__CLoudNav_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CLoudNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__CLoudNav_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__CLoudNav_Request__Sequence request;
  ymrobot_msgs__srv__CLoudNav_Response__Sequence response;
} ymrobot_msgs__srv__CLoudNav_Event;

// Struct for a sequence of ymrobot_msgs__srv__CLoudNav_Event.
typedef struct ymrobot_msgs__srv__CLoudNav_Event__Sequence
{
  ymrobot_msgs__srv__CLoudNav_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__CLoudNav_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__STRUCT_H_

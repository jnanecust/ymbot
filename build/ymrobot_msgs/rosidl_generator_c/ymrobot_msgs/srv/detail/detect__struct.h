// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/Detect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/detect.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__DETECT__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__DETECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detect_target_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Detect in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__Detect_Request
{
  /// 1:需要识别目标的名称  string类型
  rosidl_runtime_c__String detect_target_name;
} ymrobot_msgs__srv__Detect_Request;

// Struct for a sequence of ymrobot_msgs__srv__Detect_Request.
typedef struct ymrobot_msgs__srv__Detect_Request__Sequence
{
  ymrobot_msgs__srv__Detect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__Detect_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'target_position'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/Detect in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__Detect_Response
{
  /// 是否成功
  bool success;
  /// 消息反馈  --失败原因 成功了 啥的........
  rosidl_runtime_c__String message;
  /// 反馈目标三维位置
  geometry_msgs__msg__PoseStamped target_position;
} ymrobot_msgs__srv__Detect_Response;

// Struct for a sequence of ymrobot_msgs__srv__Detect_Response.
typedef struct ymrobot_msgs__srv__Detect_Response__Sequence
{
  ymrobot_msgs__srv__Detect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__Detect_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__Detect_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__Detect_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Detect in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__Detect_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__Detect_Request__Sequence request;
  ymrobot_msgs__srv__Detect_Response__Sequence response;
} ymrobot_msgs__srv__Detect_Event;

// Struct for a sequence of ymrobot_msgs__srv__Detect_Event.
typedef struct ymrobot_msgs__srv__Detect_Event__Sequence
{
  ymrobot_msgs__srv__Detect_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__Detect_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__DETECT__STRUCT_H_

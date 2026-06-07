// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/DualArm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/dual_arm.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__DUAL_ARM__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__DUAL_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_position'
// Member 'right_position'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/DualArm in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__DualArm_Request
{
  /// 左臂目标位姿
  geometry_msgs__msg__PoseStamped left_position;
  /// 右臂目标位姿
  geometry_msgs__msg__PoseStamped right_position;
  /// 同步模式：true=同步运动，false=异步运动（先左后右）
  bool sync_mode;
} ymrobot_msgs__srv__DualArm_Request;

// Struct for a sequence of ymrobot_msgs__srv__DualArm_Request.
typedef struct ymrobot_msgs__srv__DualArm_Request__Sequence
{
  ymrobot_msgs__srv__DualArm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__DualArm_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DualArm in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__DualArm_Response
{
  /// 是否成功
  bool success;
  /// 消息反馈
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__DualArm_Response;

// Struct for a sequence of ymrobot_msgs__srv__DualArm_Response.
typedef struct ymrobot_msgs__srv__DualArm_Response__Sequence
{
  ymrobot_msgs__srv__DualArm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__DualArm_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__DualArm_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__DualArm_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DualArm in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__DualArm_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__DualArm_Request__Sequence request;
  ymrobot_msgs__srv__DualArm_Response__Sequence response;
} ymrobot_msgs__srv__DualArm_Event;

// Struct for a sequence of ymrobot_msgs__srv__DualArm_Event.
typedef struct ymrobot_msgs__srv__DualArm_Event__Sequence
{
  ymrobot_msgs__srv__DualArm_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__DualArm_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__DUAL_ARM__STRUCT_H_

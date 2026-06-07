// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/HumanoidUpperLimb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/humanoid_upper_limb.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fixed_upper_action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HumanoidUpperLimb in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__HumanoidUpperLimb_Request
{
  /// 上肢动作类型， 0 ： 固定动作
  uint8_t upper_action_task_type;
  /// 上肢固定动作
  rosidl_runtime_c__String fixed_upper_action;
} ymrobot_msgs__srv__HumanoidUpperLimb_Request;

// Struct for a sequence of ymrobot_msgs__srv__HumanoidUpperLimb_Request.
typedef struct ymrobot_msgs__srv__HumanoidUpperLimb_Request__Sequence
{
  ymrobot_msgs__srv__HumanoidUpperLimb_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__HumanoidUpperLimb_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HumanoidUpperLimb in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__HumanoidUpperLimb_Response
{
  /// 是否成功与否
  bool success;
  /// 错误或者成功的原因
  rosidl_runtime_c__String message;
  /// 总时间
  double total_elapsed_time;
} ymrobot_msgs__srv__HumanoidUpperLimb_Response;

// Struct for a sequence of ymrobot_msgs__srv__HumanoidUpperLimb_Response.
typedef struct ymrobot_msgs__srv__HumanoidUpperLimb_Response__Sequence
{
  ymrobot_msgs__srv__HumanoidUpperLimb_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__HumanoidUpperLimb_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__HumanoidUpperLimb_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__HumanoidUpperLimb_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/HumanoidUpperLimb in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__HumanoidUpperLimb_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__HumanoidUpperLimb_Request__Sequence request;
  ymrobot_msgs__srv__HumanoidUpperLimb_Response__Sequence response;
} ymrobot_msgs__srv__HumanoidUpperLimb_Event;

// Struct for a sequence of ymrobot_msgs__srv__HumanoidUpperLimb_Event.
typedef struct ymrobot_msgs__srv__HumanoidUpperLimb_Event__Sequence
{
  ymrobot_msgs__srv__HumanoidUpperLimb_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__HumanoidUpperLimb_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__STRUCT_H_

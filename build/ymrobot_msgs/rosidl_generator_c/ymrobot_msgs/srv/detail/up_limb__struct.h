// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/UpLimb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/up_limb.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'place_joint_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/UpLimb in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__UpLimb_Request
{
  /// 上肢任务类型 0：末端变化笛卡尔  1：关节变化  2：预设动作变化  3：夹爪动作 4:直线运动规划
  uint8_t up_limb_task_type;
  /// 0 笛卡尔坐标下 导航点  -- 任务类型是0时候
  geometry_msgs__msg__PoseStamped position;
  /// 1：关节变化，数据列表  关节1、关节2、关节3......
  rosidl_runtime_c__double__Sequence place_joint_list;
  /// 2: 预设动作变化，标志位，0--动作0  1---动作1
  uint8_t action_fixed;
  /// 3: 左右选择  0--左  1--右
  uint8_t left_and_right_select;
} ymrobot_msgs__srv__UpLimb_Request;

// Struct for a sequence of ymrobot_msgs__srv__UpLimb_Request.
typedef struct ymrobot_msgs__srv__UpLimb_Request__Sequence
{
  ymrobot_msgs__srv__UpLimb_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__UpLimb_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UpLimb in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__UpLimb_Response
{
  /// 是否成功
  bool success;
  /// 消息反馈  --失败原因 成功了 啥的........
  rosidl_runtime_c__String message;
} ymrobot_msgs__srv__UpLimb_Response;

// Struct for a sequence of ymrobot_msgs__srv__UpLimb_Response.
typedef struct ymrobot_msgs__srv__UpLimb_Response__Sequence
{
  ymrobot_msgs__srv__UpLimb_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__UpLimb_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__UpLimb_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__UpLimb_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/UpLimb in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__UpLimb_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__UpLimb_Request__Sequence request;
  ymrobot_msgs__srv__UpLimb_Response__Sequence response;
} ymrobot_msgs__srv__UpLimb_Event;

// Struct for a sequence of ymrobot_msgs__srv__UpLimb_Event.
typedef struct ymrobot_msgs__srv__UpLimb_Event__Sequence
{
  ymrobot_msgs__srv__UpLimb_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__UpLimb_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__STRUCT_H_

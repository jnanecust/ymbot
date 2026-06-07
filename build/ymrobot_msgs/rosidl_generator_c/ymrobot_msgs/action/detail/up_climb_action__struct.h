// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:action/UpClimbAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/up_climb_action.h"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__UP_CLIMB_ACTION__STRUCT_H_
#define YMROBOT_MSGS__ACTION__DETAIL__UP_CLIMB_ACTION__STRUCT_H_

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

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_Goal
{
  /// 上肢任务类型 0：末端变化笛卡尔  1：关节变化  2：预设动作变化  3：夹爪动作
  uint8_t up_limb_task_type;
  /// 0 笛卡尔坐标下 导航点  -- 任务类型是0时候
  geometry_msgs__msg__PoseStamped position;
  /// 1：关节变化，数据列表  关节1、关节2、关节3......
  rosidl_runtime_c__double__Sequence place_joint_list;
  /// 2: 预设动作变化，标志位，0--动作0  1---动作1
  uint8_t action_fixed;
} ymrobot_msgs__action__UpClimbAction_Goal;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_Goal.
typedef struct ymrobot_msgs__action__UpClimbAction_Goal__Sequence
{
  ymrobot_msgs__action__UpClimbAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_Result
{
  /// 执行成功或者失败
  bool success;
  /// 错误信息或者成功信息
  rosidl_runtime_c__String message;
  /// 总时间
  double total_elapsed_time;
} ymrobot_msgs__action__UpClimbAction_Result;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_Result.
typedef struct ymrobot_msgs__action__UpClimbAction_Result__Sequence
{
  ymrobot_msgs__action__UpClimbAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_Feedback
{
  rosidl_runtime_c__String message;
  bool status;
} ymrobot_msgs__action__UpClimbAction_Feedback;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_Feedback.
typedef struct ymrobot_msgs__action__UpClimbAction_Feedback__Sequence
{
  ymrobot_msgs__action__UpClimbAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ymrobot_msgs/action/detail/up_climb_action__struct.h"

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__UpClimbAction_Goal goal;
} ymrobot_msgs__action__UpClimbAction_SendGoal_Request;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_SendGoal_Request.
typedef struct ymrobot_msgs__action__UpClimbAction_SendGoal_Request__Sequence
{
  ymrobot_msgs__action__UpClimbAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ymrobot_msgs__action__UpClimbAction_SendGoal_Response;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_SendGoal_Response.
typedef struct ymrobot_msgs__action__UpClimbAction_SendGoal_Response__Sequence
{
  ymrobot_msgs__action__UpClimbAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__UpClimbAction_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__UpClimbAction_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__UpClimbAction_SendGoal_Request__Sequence request;
  ymrobot_msgs__action__UpClimbAction_SendGoal_Response__Sequence response;
} ymrobot_msgs__action__UpClimbAction_SendGoal_Event;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_SendGoal_Event.
typedef struct ymrobot_msgs__action__UpClimbAction_SendGoal_Event__Sequence
{
  ymrobot_msgs__action__UpClimbAction_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ymrobot_msgs__action__UpClimbAction_GetResult_Request;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_GetResult_Request.
typedef struct ymrobot_msgs__action__UpClimbAction_GetResult_Request__Sequence
{
  ymrobot_msgs__action__UpClimbAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ymrobot_msgs/action/detail/up_climb_action__struct.h"

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_GetResult_Response
{
  int8_t status;
  ymrobot_msgs__action__UpClimbAction_Result result;
} ymrobot_msgs__action__UpClimbAction_GetResult_Response;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_GetResult_Response.
typedef struct ymrobot_msgs__action__UpClimbAction_GetResult_Response__Sequence
{
  ymrobot_msgs__action__UpClimbAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__UpClimbAction_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__UpClimbAction_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__UpClimbAction_GetResult_Request__Sequence request;
  ymrobot_msgs__action__UpClimbAction_GetResult_Response__Sequence response;
} ymrobot_msgs__action__UpClimbAction_GetResult_Event;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_GetResult_Event.
typedef struct ymrobot_msgs__action__UpClimbAction_GetResult_Event__Sequence
{
  ymrobot_msgs__action__UpClimbAction_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ymrobot_msgs/action/detail/up_climb_action__struct.h"

/// Struct defined in action/UpClimbAction in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__UpClimbAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__UpClimbAction_Feedback feedback;
} ymrobot_msgs__action__UpClimbAction_FeedbackMessage;

// Struct for a sequence of ymrobot_msgs__action__UpClimbAction_FeedbackMessage.
typedef struct ymrobot_msgs__action__UpClimbAction_FeedbackMessage__Sequence
{
  ymrobot_msgs__action__UpClimbAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__UpClimbAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__ACTION__DETAIL__UP_CLIMB_ACTION__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:action/CloudChassisNav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/cloud_chassis_nav.h"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__CLOUD_CHASSIS_NAV__STRUCT_H_
#define YMROBOT_MSGS__ACTION__DETAIL__CLOUD_CHASSIS_NAV__STRUCT_H_

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

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_Goal
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
  bool is_activate_the_nearby_point;
  /// 就近点半径
  float nearby_point_radius;
} ymrobot_msgs__action__CloudChassisNav_Goal;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_Goal.
typedef struct ymrobot_msgs__action__CloudChassisNav_Goal__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_Result
{
  bool success;
  rosidl_runtime_c__String message;
} ymrobot_msgs__action__CloudChassisNav_Result;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_Result.
typedef struct ymrobot_msgs__action__CloudChassisNav_Result__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_Feedback
{
  bool status;
  rosidl_runtime_c__String message;
} ymrobot_msgs__action__CloudChassisNav_Feedback;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_Feedback.
typedef struct ymrobot_msgs__action__CloudChassisNav_Feedback__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ymrobot_msgs/action/detail/cloud_chassis_nav__struct.h"

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__CloudChassisNav_Goal goal;
} ymrobot_msgs__action__CloudChassisNav_SendGoal_Request;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_SendGoal_Request.
typedef struct ymrobot_msgs__action__CloudChassisNav_SendGoal_Request__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ymrobot_msgs__action__CloudChassisNav_SendGoal_Response;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_SendGoal_Response.
typedef struct ymrobot_msgs__action__CloudChassisNav_SendGoal_Response__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__CloudChassisNav_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__CloudChassisNav_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__CloudChassisNav_SendGoal_Request__Sequence request;
  ymrobot_msgs__action__CloudChassisNav_SendGoal_Response__Sequence response;
} ymrobot_msgs__action__CloudChassisNav_SendGoal_Event;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_SendGoal_Event.
typedef struct ymrobot_msgs__action__CloudChassisNav_SendGoal_Event__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ymrobot_msgs__action__CloudChassisNav_GetResult_Request;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_GetResult_Request.
typedef struct ymrobot_msgs__action__CloudChassisNav_GetResult_Request__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ymrobot_msgs/action/detail/cloud_chassis_nav__struct.h"

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_GetResult_Response
{
  int8_t status;
  ymrobot_msgs__action__CloudChassisNav_Result result;
} ymrobot_msgs__action__CloudChassisNav_GetResult_Response;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_GetResult_Response.
typedef struct ymrobot_msgs__action__CloudChassisNav_GetResult_Response__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__CloudChassisNav_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__CloudChassisNav_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__CloudChassisNav_GetResult_Request__Sequence request;
  ymrobot_msgs__action__CloudChassisNav_GetResult_Response__Sequence response;
} ymrobot_msgs__action__CloudChassisNav_GetResult_Event;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_GetResult_Event.
typedef struct ymrobot_msgs__action__CloudChassisNav_GetResult_Event__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ymrobot_msgs/action/detail/cloud_chassis_nav__struct.h"

/// Struct defined in action/CloudChassisNav in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__CloudChassisNav_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__CloudChassisNav_Feedback feedback;
} ymrobot_msgs__action__CloudChassisNav_FeedbackMessage;

// Struct for a sequence of ymrobot_msgs__action__CloudChassisNav_FeedbackMessage.
typedef struct ymrobot_msgs__action__CloudChassisNav_FeedbackMessage__Sequence
{
  ymrobot_msgs__action__CloudChassisNav_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__CloudChassisNav_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__ACTION__DETAIL__CLOUD_CHASSIS_NAV__STRUCT_H_

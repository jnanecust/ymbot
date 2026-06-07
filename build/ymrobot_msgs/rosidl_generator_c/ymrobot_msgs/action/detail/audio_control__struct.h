// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:action/AudioControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/action/audio_control.h"


#ifndef YMROBOT_MSGS__ACTION__DETAIL__AUDIO_CONTROL__STRUCT_H_
#define YMROBOT_MSGS__ACTION__DETAIL__AUDIO_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fixed_audio_name'
// Member 'synthetic_audio_txt'
// Member 'synthetic_audio_title'
// Member 'delete_fixed_audio'
// Member 'play_online_audio'
// Member 'download_online_audio_url'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_Goal
{
  /// 表情任务类型 0--播放固定音频。 1: 合成音频 。 2: 删除固定音频  3：上传对话记录  4. 播放在线音频 -- 通过“string类型”  5. 在线在下载音频
  uint8_t audio_task_type;
  /// 播放固定音频  string类型 string类型的0
  rosidl_runtime_c__String fixed_audio_name;
  /// 音色 0：男  1：女生
  uint8_t timbre;
  /// 合成音频内容
  rosidl_runtime_c__String synthetic_audio_txt;
  /// 合成音频标题
  rosidl_runtime_c__String synthetic_audio_title;
  /// 删除固定音频
  rosidl_runtime_c__String delete_fixed_audio;
  /// 播放在线音频
  rosidl_runtime_c__String play_online_audio;
  /// 下载在线音频的url
  rosidl_runtime_c__String download_online_audio_url;
} ymrobot_msgs__action__AudioControl_Goal;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_Goal.
typedef struct ymrobot_msgs__action__AudioControl_Goal__Sequence
{
  ymrobot_msgs__action__AudioControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_Result
{
  /// 是否成功与否
  bool success;
  /// 错误或者成功的原因
  rosidl_runtime_c__String message;
  /// 总时间
  double total_elapsed_time;
} ymrobot_msgs__action__AudioControl_Result;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_Result.
typedef struct ymrobot_msgs__action__AudioControl_Result__Sequence
{
  ymrobot_msgs__action__AudioControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_Feedback
{
  rosidl_runtime_c__String message;
  double total_elapsed_time;
} ymrobot_msgs__action__AudioControl_Feedback;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_Feedback.
typedef struct ymrobot_msgs__action__AudioControl_Feedback__Sequence
{
  ymrobot_msgs__action__AudioControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ymrobot_msgs/action/detail/audio_control__struct.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__AudioControl_Goal goal;
} ymrobot_msgs__action__AudioControl_SendGoal_Request;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_SendGoal_Request.
typedef struct ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence
{
  ymrobot_msgs__action__AudioControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ymrobot_msgs__action__AudioControl_SendGoal_Response;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_SendGoal_Response.
typedef struct ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence
{
  ymrobot_msgs__action__AudioControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__AudioControl_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__AudioControl_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence request;
  ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence response;
} ymrobot_msgs__action__AudioControl_SendGoal_Event;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_SendGoal_Event.
typedef struct ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence
{
  ymrobot_msgs__action__AudioControl_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ymrobot_msgs__action__AudioControl_GetResult_Request;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_GetResult_Request.
typedef struct ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence
{
  ymrobot_msgs__action__AudioControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ymrobot_msgs/action/detail/audio_control__struct.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_GetResult_Response
{
  int8_t status;
  ymrobot_msgs__action__AudioControl_Result result;
} ymrobot_msgs__action__AudioControl_GetResult_Response;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_GetResult_Response.
typedef struct ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence
{
  ymrobot_msgs__action__AudioControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__action__AudioControl_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__action__AudioControl_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence request;
  ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence response;
} ymrobot_msgs__action__AudioControl_GetResult_Event;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_GetResult_Event.
typedef struct ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence
{
  ymrobot_msgs__action__AudioControl_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ymrobot_msgs/action/detail/audio_control__struct.h"

/// Struct defined in action/AudioControl in the package ymrobot_msgs.
typedef struct ymrobot_msgs__action__AudioControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ymrobot_msgs__action__AudioControl_Feedback feedback;
} ymrobot_msgs__action__AudioControl_FeedbackMessage;

// Struct for a sequence of ymrobot_msgs__action__AudioControl_FeedbackMessage.
typedef struct ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence
{
  ymrobot_msgs__action__AudioControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__ACTION__DETAIL__AUDIO_CONTROL__STRUCT_H_

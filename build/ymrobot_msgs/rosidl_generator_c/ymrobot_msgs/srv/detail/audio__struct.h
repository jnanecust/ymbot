// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:srv/Audio.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/audio.h"


#ifndef YMROBOT_MSGS__SRV__DETAIL__AUDIO__STRUCT_H_
#define YMROBOT_MSGS__SRV__DETAIL__AUDIO__STRUCT_H_

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
// Member 'timbre'
// Member 'synthetic_audio_txt'
// Member 'synthetic_audio_title'
// Member 'delete_fixed_audio'
// Member 'play_online_audio'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Audio in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__Audio_Request
{
  /// 表情任务类型 0--播放固定音频。 1: 合成音频 。 2: 删除固定音频  3：上传对话记录  4. 播放在线音频 -- 通过“string类型”  5. 下载音频
  uint8_t audio_task_type;
  /// 播放固定音频  string类型 string类型的0
  rosidl_runtime_c__String fixed_audio_name;
  /// 音色 0：男  1：女生
  rosidl_runtime_c__String timbre;
  /// 合成音频内容
  rosidl_runtime_c__String synthetic_audio_txt;
  /// 合成音频标题
  rosidl_runtime_c__String synthetic_audio_title;
  /// 删除固定音频
  rosidl_runtime_c__String delete_fixed_audio;
  /// 播放在线音频
  rosidl_runtime_c__String play_online_audio;
} ymrobot_msgs__srv__Audio_Request;

// Struct for a sequence of ymrobot_msgs__srv__Audio_Request.
typedef struct ymrobot_msgs__srv__Audio_Request__Sequence
{
  ymrobot_msgs__srv__Audio_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__Audio_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Audio in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__Audio_Response
{
  /// 是否成功与否
  bool success;
  /// 错误或者成功的原因
  rosidl_runtime_c__String message;
  /// 总时间
  double total_elapsed_time;
} ymrobot_msgs__srv__Audio_Response;

// Struct for a sequence of ymrobot_msgs__srv__Audio_Response.
typedef struct ymrobot_msgs__srv__Audio_Response__Sequence
{
  ymrobot_msgs__srv__Audio_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__Audio_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ymrobot_msgs__srv__Audio_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ymrobot_msgs__srv__Audio_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Audio in the package ymrobot_msgs.
typedef struct ymrobot_msgs__srv__Audio_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ymrobot_msgs__srv__Audio_Request__Sequence request;
  ymrobot_msgs__srv__Audio_Response__Sequence response;
} ymrobot_msgs__srv__Audio_Event;

// Struct for a sequence of ymrobot_msgs__srv__Audio_Event.
typedef struct ymrobot_msgs__srv__Audio_Event__Sequence
{
  ymrobot_msgs__srv__Audio_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__srv__Audio_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__SRV__DETAIL__AUDIO__STRUCT_H_

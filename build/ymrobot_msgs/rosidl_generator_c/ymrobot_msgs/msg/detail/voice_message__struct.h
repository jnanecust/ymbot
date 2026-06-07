// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/voice_message.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/VoiceMessage in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__VoiceMessage
{
  /// 表情任务类型 0--播放固定音频。 1: 合成音频 。 2: 删除固定音频  3：上传对话记录  4. 播放在线音频 -- 通过“string类型”
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
} ymrobot_msgs__msg__VoiceMessage;

// Struct for a sequence of ymrobot_msgs__msg__VoiceMessage.
typedef struct ymrobot_msgs__msg__VoiceMessage__Sequence
{
  ymrobot_msgs__msg__VoiceMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__VoiceMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__STRUCT_H_

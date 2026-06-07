// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/ImageVideo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/image_video.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__STRUCT_H_

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

/// Struct defined in msg/ImageVideo in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__ImageVideo
{
  /// 相机任务类型 0：拍照 1：录制视频 2：拍照并录制视频 3：目标检测
  uint8_t camera_task_type;
  /// 相机拍照数量
  uint8_t number_of_photos;
  /// 拍照间隔 ms
  uint8_t photos_interval;
  /// 录制视频时长
  uint8_t video_recording_time;
  /// 3：目标检测
  rosidl_runtime_c__String detect_target_name;
} ymrobot_msgs__msg__ImageVideo;

// Struct for a sequence of ymrobot_msgs__msg__ImageVideo.
typedef struct ymrobot_msgs__msg__ImageVideo__Sequence
{
  ymrobot_msgs__msg__ImageVideo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__ImageVideo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__STRUCT_H_

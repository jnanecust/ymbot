// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/patrol_mission.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'image_video_msg'
#include "ymrobot_msgs/msg/detail/image_video__struct.h"
// Member 'full_audio_name'
// Member 'nav_name_list'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PatrolMission in the package ymrobot_msgs.
/**
  * 巡逻任务消息
 */
typedef struct ymrobot_msgs__msg__PatrolMission
{
  /// 图像和视频消息
  ymrobot_msgs__msg__ImageVideo image_video_msg;
  /// 是否全程播放音频
  bool is_audio_played_throughout_the_entire_process;
  /// 全程音频文件名
  rosidl_runtime_c__String full_audio_name;
  /// 是否全程录制
  bool is_the_entire_process_recorded;
  /// 是否激活附近点
  bool is_activate_the_nearby_point;
  /// 就近点距离
  float nearby_point_radius;
  /// 导航点名称列表
  rosidl_runtime_c__String__Sequence nav_name_list;
} ymrobot_msgs__msg__PatrolMission;

// Struct for a sequence of ymrobot_msgs__msg__PatrolMission.
typedef struct ymrobot_msgs__msg__PatrolMission__Sequence
{
  ymrobot_msgs__msg__PatrolMission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__PatrolMission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__STRUCT_H_

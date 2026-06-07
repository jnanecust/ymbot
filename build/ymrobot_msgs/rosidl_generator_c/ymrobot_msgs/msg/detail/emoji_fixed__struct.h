// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/EmojiFixed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/emoji_fixed.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
/**
  * 无命令
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__NONE = 0
};

/// Constant 'PAUSE'.
/**
  * 暂停操作
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__PAUSE = 1
};

/// Constant 'RESUME'.
/**
  * 恢复操作
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__RESUME = 2
};

/// Constant 'CANCLE'.
/**
  * 取消任务操作
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__CANCLE = 3
};

/// Constant 'WAIT'.
/**
  * 进入休眠模式
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__WAIT = 4
};

/// Constant 'FINISH_WAIT'.
/**
  * 从休眠模式唤醒
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__FINISH_WAIT = 5
};

/// Constant 'CHARGE'.
/**
  * 回冲
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__CHARGE = 6
};

/// Constant 'FINISH_CHARGE'.
/**
  * 结束回冲
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__FINISH_CHARGE = 7
};

/// Constant 'BUILD_MAP'.
/**
  * 建图
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__BUILD_MAP = 8
};

/// Constant 'UPLOAD_MAP'.
/**
  * 更新地图
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__UPLOAD_MAP = 9
};

/// Constant 'DOWNLOAD_MAP'.
/**
  * 下载地图
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__DOWNLOAD_MAP = 10
};

/// Constant 'SAVE_MAP'.
/**
  * 保存地图
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__SAVE_MAP = 11
};

/// Constant 'RELOCALIZE'.
/**
  * 重定位
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__RELOCALIZE = 12
};

/// Constant 'NAVIGATION'.
/**
  * 导航
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__NAVIGATION = 13
};

/// Constant 'MULIT_POINTS_NAVIGATION'.
/**
  * 多点导航
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__MULIT_POINTS_NAVIGATION = 14
};

/// Constant 'MULIT_FLOOR_NAVIGATION'.
/**
  * 跨楼层导航（只适合单点）
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__MULIT_FLOOR_NAVIGATION = 15
};

/// Constant 'CLOUD_MANUAL_CONTROL_MOVE'.
/**
  * 云平台手动控制移动
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__CLOUD_MANUAL_CONTROL_MOVE = 16
};

/// Constant 'DOT'.
/**
  * 打点
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__DOT = 17
};

/// Constant 'MANUAL_CONTROL_MOVE'.
/**
  * 遥控控制移动
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__MANUAL_CONTROL_MOVE = 18
};

/// Constant 'EXE_BEHAVIOR_TREE'.
/**
  * 执行行为树
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__EXE_BEHAVIOR_TREE = 19
};

/// Constant 'PLACE_CARTESIAN'.
/**
  * 末端变化（笛卡尔坐标）导航
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__PLACE_CARTESIAN = 20
};

/// Constant 'PLACE_JOINT'.
/**
  * 关节变化导航
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__PLACE_JOINT = 21
};

/// Constant 'PLACE_FIXED'.
/**
  * 上肢预设动作执行
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__PLACE_FIXED = 22
};

/// Constant 'PLACE_CONTROL_MODE'.
/**
  * 上肢控制模式切换
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__PLACE_CONTROL_MODE = 23
};

/// Constant 'GRASP'.
/**
  * 夹爪动作
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__GRASP = 24
};

/// Constant 'CAMERA'.
/**
  * 相机
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__CAMERA = 25
};

/// Constant 'PLAY_FIX_AUDIO'.
/**
  * 播放固定音频
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__PLAY_FIX_AUDIO = 26
};

/// Constant 'SPEECH_2_TXT'.
/**
  * 语音转文字（在线和离线都有）
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__SPEECH_2_TXT = 27
};

/// Constant 'EXPRESSION_FIXED'.
/**
  * 表情预设执行动作
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__EXPRESSION_FIXED = 28
};

/// Constant 'WAKE_UP'.
/**
  * 唤醒
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__WAKE_UP = 29
};

/// Constant 'POWER_OFF'.
/**
  * 远程关机
 */
enum
{
  ymrobot_msgs__msg__EmojiFixed__POWER_OFF = 30
};

/// Struct defined in msg/EmojiFixed in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__EmojiFixed
{
  /// 命令代码
  uint8_t code;
} ymrobot_msgs__msg__EmojiFixed;

// Struct for a sequence of ymrobot_msgs__msg__EmojiFixed.
typedef struct ymrobot_msgs__msg__EmojiFixed__Sequence
{
  ymrobot_msgs__msg__EmojiFixed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__EmojiFixed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__STRUCT_H_

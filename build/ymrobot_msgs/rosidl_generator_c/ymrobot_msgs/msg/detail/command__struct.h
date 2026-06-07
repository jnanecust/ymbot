// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/Command.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/command.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_

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
  ymrobot_msgs__msg__Command__NONE = 0
};

/// Constant 'REGISTER'.
/**
  * 注册
 */
enum
{
  ymrobot_msgs__msg__Command__REGISTER = 1
};

/// Constant 'LOG_OFF'.
/**
  * 注销
 */
enum
{
  ymrobot_msgs__msg__Command__LOG_OFF = 2
};

/// Constant 'PAUSE'.
/**
  * 暂停操作
 */
enum
{
  ymrobot_msgs__msg__Command__PAUSE = 3
};

/// Constant 'RESUME'.
/**
  * 恢复操作
 */
enum
{
  ymrobot_msgs__msg__Command__RESUME = 4
};

/// Constant 'CANCLE'.
/**
  * 取消任务操作
 */
enum
{
  ymrobot_msgs__msg__Command__CANCLE = 5
};

/// Constant 'WAIT'.
/**
  * 进入休眠模式
 */
enum
{
  ymrobot_msgs__msg__Command__WAIT = 6
};

/// Constant 'FINISH_WAIT'.
/**
  * 从休眠模式唤醒
 */
enum
{
  ymrobot_msgs__msg__Command__FINISH_WAIT = 7
};

/// Constant 'CHARGE'.
/**
  * 回冲
 */
enum
{
  ymrobot_msgs__msg__Command__CHARGE = 8
};

/// Constant 'FINISH_CHARGE'.
/**
  * 结束回冲
 */
enum
{
  ymrobot_msgs__msg__Command__FINISH_CHARGE = 9
};

/// Constant 'BUILD_MAP'.
/**
  * 建图
 */
enum
{
  ymrobot_msgs__msg__Command__BUILD_MAP = 10
};

/// Constant 'UPLOAD_MAP'.
/**
  * 更新地图
 */
enum
{
  ymrobot_msgs__msg__Command__UPLOAD_MAP = 11
};

/// Constant 'DOWNLOAD_MAP'.
/**
  * 下载地图
 */
enum
{
  ymrobot_msgs__msg__Command__DOWNLOAD_MAP = 12
};

/// Constant 'SAVE_MAP'.
/**
  * 保存地图
 */
enum
{
  ymrobot_msgs__msg__Command__SAVE_MAP = 13
};

/// Constant 'RELOCALIZE'.
/**
  * 重定位
 */
enum
{
  ymrobot_msgs__msg__Command__RELOCALIZE = 14
};

/// Constant 'NAVIGATION'.
/**
  * 导航
 */
enum
{
  ymrobot_msgs__msg__Command__NAVIGATION = 15
};

/// Constant 'MULIT_POINTS_NAVIGATION'.
/**
  * 多点导航
 */
enum
{
  ymrobot_msgs__msg__Command__MULIT_POINTS_NAVIGATION = 16
};

/// Constant 'MULIT_FLOOR_NAVIGATION'.
/**
  * 跨楼层导航（只适合单点）
 */
enum
{
  ymrobot_msgs__msg__Command__MULIT_FLOOR_NAVIGATION = 17
};

/// Constant 'DOT'.
/**
  * 打点
 */
enum
{
  ymrobot_msgs__msg__Command__DOT = 18
};

/// Constant 'CLOUD_NAVIGATION'.
/**
  * 云迹单点导航
 */
enum
{
  ymrobot_msgs__msg__Command__CLOUD_NAVIGATION = 19
};

/// Constant 'CLOUD_MULIT_POINTS_NAVIGATION'.
/**
  * 云迹多点导航
 */
enum
{
  ymrobot_msgs__msg__Command__CLOUD_MULIT_POINTS_NAVIGATION = 20
};

/// Constant 'CLOUD_NAVIGATION_NAME'.
/**
  * 云迹单点点位名称导航
 */
enum
{
  ymrobot_msgs__msg__Command__CLOUD_NAVIGATION_NAME = 21
};

/// Constant 'CLOUD_MULIT_POINTS_NAVIGATION_NAME'.
/**
  * 云迹多点点位名导航
 */
enum
{
  ymrobot_msgs__msg__Command__CLOUD_MULIT_POINTS_NAVIGATION_NAME = 22
};

/// Constant 'MANUAL_CONTROL_MOVE'.
/**
  * 遥控控制移动
 */
enum
{
  ymrobot_msgs__msg__Command__MANUAL_CONTROL_MOVE = 23
};

/// Constant 'EXE_BEHAVIOR_TREE'.
/**
  * 执行行为树
 */
enum
{
  ymrobot_msgs__msg__Command__EXE_BEHAVIOR_TREE = 24
};

/// Constant 'PLACE_CARTESIAN'.
/**
  * 末端变化（笛卡尔坐标）导航
 */
enum
{
  ymrobot_msgs__msg__Command__PLACE_CARTESIAN = 25
};

/// Constant 'PLACE_JOINT'.
/**
  * 关节变化导航
 */
enum
{
  ymrobot_msgs__msg__Command__PLACE_JOINT = 26
};

/// Constant 'PLACE_FIXED'.
/**
  * 上肢预设动作执行
 */
enum
{
  ymrobot_msgs__msg__Command__PLACE_FIXED = 27
};

/// Constant 'PLACE_CONTROL_MODE'.
/**
  * 上肢控制模式切换
 */
enum
{
  ymrobot_msgs__msg__Command__PLACE_CONTROL_MODE = 28
};

/// Constant 'GRASP'.
/**
  * 夹爪动作
 */
enum
{
  ymrobot_msgs__msg__Command__GRASP = 29
};

/// Constant 'CAMERA'.
/**
  * 相机
 */
enum
{
  ymrobot_msgs__msg__Command__CAMERA = 30
};

/// Constant 'PHOTOGRAPH'.
/**
  * 拍照
 */
enum
{
  ymrobot_msgs__msg__Command__PHOTOGRAPH = 31
};

/// Constant 'RECOGNIZE'.
/**
  * 识别物体
 */
enum
{
  ymrobot_msgs__msg__Command__RECOGNIZE = 32
};

/// Constant 'PLAY_FIX_AUDIO'.
/**
  * 播放固定音频
 */
enum
{
  ymrobot_msgs__msg__Command__PLAY_FIX_AUDIO = 33
};

/// Constant 'TXT_2_AUDIO'.
/**
  * 文字合成语音
 */
enum
{
  ymrobot_msgs__msg__Command__TXT_2_AUDIO = 34
};

/// Constant 'SPEECH_2_TXT'.
/**
  * 语音转文字（在线和离线都有）
 */
enum
{
  ymrobot_msgs__msg__Command__SPEECH_2_TXT = 35
};

/// Constant 'EXPRESSION_FIXED'.
/**
  * 表情预设执行动作
 */
enum
{
  ymrobot_msgs__msg__Command__EXPRESSION_FIXED = 36
};

/// Constant 'WAKE_UP'.
/**
  * 唤醒
 */
enum
{
  ymrobot_msgs__msg__Command__WAKE_UP = 37
};

/// Constant 'POWER_OFF'.
/**
  * 远程关机
 */
enum
{
  ymrobot_msgs__msg__Command__POWER_OFF = 38
};

/// Constant 'SETTING_PARAMETERS'.
/**
  * 设置参数
 */
enum
{
  ymrobot_msgs__msg__Command__SETTING_PARAMETERS = 39
};

/// Constant 'SYNTHETIC_AUDIO'.
/**
  * 删掉固定音频
 */
enum
{
  ymrobot_msgs__msg__Command__SYNTHETIC_AUDIO = 40
};

/// Constant 'VOICE_INTERACTION_FUNCTION_SWITCH'.
/**
  * 启动/关闭 语音交互功能开关
 */
enum
{
  ymrobot_msgs__msg__Command__VOICE_INTERACTION_FUNCTION_SWITCH = 41
};

/// Constant 'UPLOAD_VOICE_CONVERSATION_LOGS'.
/**
  * 上传语音对话日志
 */
enum
{
  ymrobot_msgs__msg__Command__UPLOAD_VOICE_CONVERSATION_LOGS = 42
};

/// Constant 'UPLOAD_OPERATION_LOGS'.
/**
  * 上传运行日志
 */
enum
{
  ymrobot_msgs__msg__Command__UPLOAD_OPERATION_LOGS = 43
};

/// Constant 'PLAY_ONLINE_AUDIO'.
/**
  * 播放在线音频
 */
enum
{
  ymrobot_msgs__msg__Command__PLAY_ONLINE_AUDIO = 44
};

/// Constant 'DOWNLOAD_AUDIO'.
/**
  * 下载音频
 */
enum
{
  ymrobot_msgs__msg__Command__DOWNLOAD_AUDIO = 45
};

// Include directives for member types
// Member 'params_code'
// Member 'params'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Command in the package ymrobot_msgs.
typedef struct ymrobot_msgs__msg__Command
{
  /// 命令代码
  uint8_t code;
  /// 命令参数
  rosidl_runtime_c__String params_code;
  /// 命令的参数值
  rosidl_runtime_c__String__Sequence params;
} ymrobot_msgs__msg__Command;

// Struct for a sequence of ymrobot_msgs__msg__Command.
typedef struct ymrobot_msgs__msg__Command__Sequence
{
  ymrobot_msgs__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__COMMAND__STRUCT_H_

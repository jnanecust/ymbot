// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/robot_device_status.h"


#ifndef YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__STRUCT_H_
#define YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RobotDeviceStatus in the package ymrobot_msgs.
/**
  * 电池状态
 */
typedef struct ymrobot_msgs__msg__RobotDeviceStatus
{
  /// 电池电压（单位：V）
  float battery_voltage;
  /// 电池剩余电量百分比（范围：0.0-100.0）
  float battery_percentage;
  /// 电池温度（可选，单位：摄氏度）
  float battery_temperature;
  /// 电机状态
  /// 电机转速（单位：RPM）
  int32_t left_motor_speed;
  /// 电机转速（单位：RPM）
  int32_t right_motor_speed;
  float left_motor_temperature;
  float right_motor_temperature;
  /// 系统状态
  /// CPU使用率（范围：0.0-100.0）
  float cpu_usage;
  /// 内存占用率（范围：0.0-100.0）
  float memory_usage;
  /// CPU温度（单位：摄氏度）
  float cpu_temperature;
  /// 磁盘剩余空间占比（范围：0.0-100.0）
  float disk_space_percentage;
  /// 主控板温度（单位：摄氏度）
  float mainboard_temperature;
} ymrobot_msgs__msg__RobotDeviceStatus;

// Struct for a sequence of ymrobot_msgs__msg__RobotDeviceStatus.
typedef struct ymrobot_msgs__msg__RobotDeviceStatus__Sequence
{
  ymrobot_msgs__msg__RobotDeviceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ymrobot_msgs__msg__RobotDeviceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__STRUCT_H_

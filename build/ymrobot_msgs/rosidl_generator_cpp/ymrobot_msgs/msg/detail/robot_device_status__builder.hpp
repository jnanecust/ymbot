// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/robot_device_status.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/robot_device_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotDeviceStatus_mainboard_temperature
{
public:
  explicit Init_RobotDeviceStatus_mainboard_temperature(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::RobotDeviceStatus mainboard_temperature(::ymrobot_msgs::msg::RobotDeviceStatus::_mainboard_temperature_type arg)
  {
    msg_.mainboard_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_disk_space_percentage
{
public:
  explicit Init_RobotDeviceStatus_disk_space_percentage(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_mainboard_temperature disk_space_percentage(::ymrobot_msgs::msg::RobotDeviceStatus::_disk_space_percentage_type arg)
  {
    msg_.disk_space_percentage = std::move(arg);
    return Init_RobotDeviceStatus_mainboard_temperature(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_cpu_temperature
{
public:
  explicit Init_RobotDeviceStatus_cpu_temperature(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_disk_space_percentage cpu_temperature(::ymrobot_msgs::msg::RobotDeviceStatus::_cpu_temperature_type arg)
  {
    msg_.cpu_temperature = std::move(arg);
    return Init_RobotDeviceStatus_disk_space_percentage(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_memory_usage
{
public:
  explicit Init_RobotDeviceStatus_memory_usage(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_cpu_temperature memory_usage(::ymrobot_msgs::msg::RobotDeviceStatus::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_RobotDeviceStatus_cpu_temperature(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_cpu_usage
{
public:
  explicit Init_RobotDeviceStatus_cpu_usage(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_memory_usage cpu_usage(::ymrobot_msgs::msg::RobotDeviceStatus::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_RobotDeviceStatus_memory_usage(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_right_motor_temperature
{
public:
  explicit Init_RobotDeviceStatus_right_motor_temperature(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_cpu_usage right_motor_temperature(::ymrobot_msgs::msg::RobotDeviceStatus::_right_motor_temperature_type arg)
  {
    msg_.right_motor_temperature = std::move(arg);
    return Init_RobotDeviceStatus_cpu_usage(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_left_motor_temperature
{
public:
  explicit Init_RobotDeviceStatus_left_motor_temperature(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_right_motor_temperature left_motor_temperature(::ymrobot_msgs::msg::RobotDeviceStatus::_left_motor_temperature_type arg)
  {
    msg_.left_motor_temperature = std::move(arg);
    return Init_RobotDeviceStatus_right_motor_temperature(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_right_motor_speed
{
public:
  explicit Init_RobotDeviceStatus_right_motor_speed(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_left_motor_temperature right_motor_speed(::ymrobot_msgs::msg::RobotDeviceStatus::_right_motor_speed_type arg)
  {
    msg_.right_motor_speed = std::move(arg);
    return Init_RobotDeviceStatus_left_motor_temperature(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_left_motor_speed
{
public:
  explicit Init_RobotDeviceStatus_left_motor_speed(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_right_motor_speed left_motor_speed(::ymrobot_msgs::msg::RobotDeviceStatus::_left_motor_speed_type arg)
  {
    msg_.left_motor_speed = std::move(arg);
    return Init_RobotDeviceStatus_right_motor_speed(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_battery_temperature
{
public:
  explicit Init_RobotDeviceStatus_battery_temperature(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_left_motor_speed battery_temperature(::ymrobot_msgs::msg::RobotDeviceStatus::_battery_temperature_type arg)
  {
    msg_.battery_temperature = std::move(arg);
    return Init_RobotDeviceStatus_left_motor_speed(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_battery_percentage
{
public:
  explicit Init_RobotDeviceStatus_battery_percentage(::ymrobot_msgs::msg::RobotDeviceStatus & msg)
  : msg_(msg)
  {}
  Init_RobotDeviceStatus_battery_temperature battery_percentage(::ymrobot_msgs::msg::RobotDeviceStatus::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_RobotDeviceStatus_battery_temperature(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

class Init_RobotDeviceStatus_battery_voltage
{
public:
  Init_RobotDeviceStatus_battery_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotDeviceStatus_battery_percentage battery_voltage(::ymrobot_msgs::msg::RobotDeviceStatus::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_RobotDeviceStatus_battery_percentage(msg_);
  }

private:
  ::ymrobot_msgs::msg::RobotDeviceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::RobotDeviceStatus>()
{
  return ymrobot_msgs::msg::builder::Init_RobotDeviceStatus_battery_voltage();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__ROBOT_DEVICE_STATUS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/cloud_chassis_status.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/cloud_chassis_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_CloudChassisStatus_target_floor
{
public:
  explicit Init_CloudChassisStatus_target_floor(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::CloudChassisStatus target_floor(::ymrobot_msgs::msg::CloudChassisStatus::_target_floor_type arg)
  {
    msg_.target_floor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_running_status
{
public:
  explicit Init_CloudChassisStatus_running_status(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_target_floor running_status(::ymrobot_msgs::msg::CloudChassisStatus::_running_status_type arg)
  {
    msg_.running_status = std::move(arg);
    return Init_CloudChassisStatus_target_floor(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_move_status
{
public:
  explicit Init_CloudChassisStatus_move_status(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_running_status move_status(::ymrobot_msgs::msg::CloudChassisStatus::_move_status_type arg)
  {
    msg_.move_status = std::move(arg);
    return Init_CloudChassisStatus_running_status(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_move_target
{
public:
  explicit Init_CloudChassisStatus_move_target(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_move_status move_target(::ymrobot_msgs::msg::CloudChassisStatus::_move_target_type arg)
  {
    msg_.move_target = std::move(arg);
    return Init_CloudChassisStatus_move_status(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_error_code
{
public:
  explicit Init_CloudChassisStatus_error_code(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_move_target error_code(::ymrobot_msgs::msg::CloudChassisStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_CloudChassisStatus_move_target(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_current_floor
{
public:
  explicit Init_CloudChassisStatus_current_floor(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_error_code current_floor(::ymrobot_msgs::msg::CloudChassisStatus::_current_floor_type arg)
  {
    msg_.current_floor = std::move(arg);
    return Init_CloudChassisStatus_error_code(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_yaw
{
public:
  explicit Init_CloudChassisStatus_yaw(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_current_floor yaw(::ymrobot_msgs::msg::CloudChassisStatus::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_CloudChassisStatus_current_floor(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_y
{
public:
  explicit Init_CloudChassisStatus_y(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_yaw y(::ymrobot_msgs::msg::CloudChassisStatus::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CloudChassisStatus_yaw(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_x
{
public:
  explicit Init_CloudChassisStatus_x(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_y x(::ymrobot_msgs::msg::CloudChassisStatus::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CloudChassisStatus_y(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_power_percent
{
public:
  explicit Init_CloudChassisStatus_power_percent(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_x power_percent(::ymrobot_msgs::msg::CloudChassisStatus::_power_percent_type arg)
  {
    msg_.power_percent = std::move(arg);
    return Init_CloudChassisStatus_x(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_estop_state
{
public:
  explicit Init_CloudChassisStatus_estop_state(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_power_percent estop_state(::ymrobot_msgs::msg::CloudChassisStatus::_estop_state_type arg)
  {
    msg_.estop_state = std::move(arg);
    return Init_CloudChassisStatus_power_percent(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_hard_estop_state
{
public:
  explicit Init_CloudChassisStatus_hard_estop_state(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_estop_state hard_estop_state(::ymrobot_msgs::msg::CloudChassisStatus::_hard_estop_state_type arg)
  {
    msg_.hard_estop_state = std::move(arg);
    return Init_CloudChassisStatus_estop_state(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_soft_estop_state
{
public:
  explicit Init_CloudChassisStatus_soft_estop_state(::ymrobot_msgs::msg::CloudChassisStatus & msg)
  : msg_(msg)
  {}
  Init_CloudChassisStatus_hard_estop_state soft_estop_state(::ymrobot_msgs::msg::CloudChassisStatus::_soft_estop_state_type arg)
  {
    msg_.soft_estop_state = std::move(arg);
    return Init_CloudChassisStatus_hard_estop_state(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

class Init_CloudChassisStatus_charge_state
{
public:
  Init_CloudChassisStatus_charge_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CloudChassisStatus_soft_estop_state charge_state(::ymrobot_msgs::msg::CloudChassisStatus::_charge_state_type arg)
  {
    msg_.charge_state = std::move(arg);
    return Init_CloudChassisStatus_soft_estop_state(msg_);
  }

private:
  ::ymrobot_msgs::msg::CloudChassisStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::CloudChassisStatus>()
{
  return ymrobot_msgs::msg::builder::Init_CloudChassisStatus_charge_state();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__CLOUD_CHASSIS_STATUS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/CurrentPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/current_pose.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CURRENT_POSE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CURRENT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/current_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_CurrentPose_rw
{
public:
  explicit Init_CurrentPose_rw(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::CurrentPose rw(::ymrobot_msgs::msg::CurrentPose::_rw_type arg)
  {
    msg_.rw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_rz
{
public:
  explicit Init_CurrentPose_rz(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_rw rz(::ymrobot_msgs::msg::CurrentPose::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return Init_CurrentPose_rw(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_ry
{
public:
  explicit Init_CurrentPose_ry(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_rz ry(::ymrobot_msgs::msg::CurrentPose::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_CurrentPose_rz(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_rx
{
public:
  explicit Init_CurrentPose_rx(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_ry rx(::ymrobot_msgs::msg::CurrentPose::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_CurrentPose_ry(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_yaw
{
public:
  explicit Init_CurrentPose_yaw(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_rx yaw(::ymrobot_msgs::msg::CurrentPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_CurrentPose_rx(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_pitch
{
public:
  explicit Init_CurrentPose_pitch(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_yaw pitch(::ymrobot_msgs::msg::CurrentPose::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_CurrentPose_yaw(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_roll
{
public:
  explicit Init_CurrentPose_roll(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_pitch roll(::ymrobot_msgs::msg::CurrentPose::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_CurrentPose_pitch(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_z
{
public:
  explicit Init_CurrentPose_z(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_roll z(::ymrobot_msgs::msg::CurrentPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_CurrentPose_roll(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_y
{
public:
  explicit Init_CurrentPose_y(::ymrobot_msgs::msg::CurrentPose & msg)
  : msg_(msg)
  {}
  Init_CurrentPose_z y(::ymrobot_msgs::msg::CurrentPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CurrentPose_z(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

class Init_CurrentPose_x
{
public:
  Init_CurrentPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentPose_y x(::ymrobot_msgs::msg::CurrentPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CurrentPose_y(msg_);
  }

private:
  ::ymrobot_msgs::msg::CurrentPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::CurrentPose>()
{
  return ymrobot_msgs::msg::builder::Init_CurrentPose_x();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__CURRENT_POSE__BUILDER_HPP_

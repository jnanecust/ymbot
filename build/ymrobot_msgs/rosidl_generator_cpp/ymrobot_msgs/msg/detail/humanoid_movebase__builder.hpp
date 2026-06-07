// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/HumanoidMovebase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/humanoid_movebase.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/humanoid_movebase__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanoidMovebase_yaw
{
public:
  explicit Init_HumanoidMovebase_yaw(::ymrobot_msgs::msg::HumanoidMovebase & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::HumanoidMovebase yaw(::ymrobot_msgs::msg::HumanoidMovebase::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::HumanoidMovebase msg_;
};

class Init_HumanoidMovebase_y
{
public:
  explicit Init_HumanoidMovebase_y(::ymrobot_msgs::msg::HumanoidMovebase & msg)
  : msg_(msg)
  {}
  Init_HumanoidMovebase_yaw y(::ymrobot_msgs::msg::HumanoidMovebase::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_HumanoidMovebase_yaw(msg_);
  }

private:
  ::ymrobot_msgs::msg::HumanoidMovebase msg_;
};

class Init_HumanoidMovebase_x
{
public:
  Init_HumanoidMovebase_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanoidMovebase_y x(::ymrobot_msgs::msg::HumanoidMovebase::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_HumanoidMovebase_y(msg_);
  }

private:
  ::ymrobot_msgs::msg::HumanoidMovebase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::HumanoidMovebase>()
{
  return ymrobot_msgs::msg::builder::Init_HumanoidMovebase_x();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__HUMANOID_MOVEBASE__BUILDER_HPP_

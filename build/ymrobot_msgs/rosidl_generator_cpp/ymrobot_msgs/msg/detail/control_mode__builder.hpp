// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/control_mode.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlMode_code
{
public:
  Init_ControlMode_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::msg::ControlMode code(::ymrobot_msgs::msg::ControlMode::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::ControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::ControlMode>()
{
  return ymrobot_msgs::msg::builder::Init_ControlMode_code();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_

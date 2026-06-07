// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/Command.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/command.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_Command_params
{
public:
  explicit Init_Command_params(::ymrobot_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::Command params(::ymrobot_msgs::msg::Command::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::Command msg_;
};

class Init_Command_params_code
{
public:
  explicit Init_Command_params_code(::ymrobot_msgs::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_params params_code(::ymrobot_msgs::msg::Command::_params_code_type arg)
  {
    msg_.params_code = std::move(arg);
    return Init_Command_params(msg_);
  }

private:
  ::ymrobot_msgs::msg::Command msg_;
};

class Init_Command_code
{
public:
  Init_Command_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_params_code code(::ymrobot_msgs::msg::Command::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_Command_params_code(msg_);
  }

private:
  ::ymrobot_msgs::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::Command>()
{
  return ymrobot_msgs::msg::builder::Init_Command_code();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__COMMAND__BUILDER_HPP_

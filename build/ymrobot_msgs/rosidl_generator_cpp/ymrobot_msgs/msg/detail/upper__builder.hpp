// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/Upper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/upper.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__UPPER__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__UPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/upper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_Upper_auto_status
{
public:
  explicit Init_Upper_auto_status(::ymrobot_msgs::msg::Upper & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::Upper auto_status(::ymrobot_msgs::msg::Upper::_auto_status_type arg)
  {
    msg_.auto_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::Upper msg_;
};

class Init_Upper_chassis_status
{
public:
  Init_Upper_chassis_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Upper_auto_status chassis_status(::ymrobot_msgs::msg::Upper::_chassis_status_type arg)
  {
    msg_.chassis_status = std::move(arg);
    return Init_Upper_auto_status(msg_);
  }

private:
  ::ymrobot_msgs::msg::Upper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::Upper>()
{
  return ymrobot_msgs::msg::builder::Init_Upper_chassis_status();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__UPPER__BUILDER_HPP_

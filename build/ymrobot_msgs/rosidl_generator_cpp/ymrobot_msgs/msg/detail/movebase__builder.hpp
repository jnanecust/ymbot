// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/Movebase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/movebase.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/movebase__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_Movebase_angle
{
public:
  explicit Init_Movebase_angle(::ymrobot_msgs::msg::Movebase & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::Movebase angle(::ymrobot_msgs::msg::Movebase::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::Movebase msg_;
};

class Init_Movebase_speed
{
public:
  Init_Movebase_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movebase_angle speed(::ymrobot_msgs::msg::Movebase::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Movebase_angle(msg_);
  }

private:
  ::ymrobot_msgs::msg::Movebase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::Movebase>()
{
  return ymrobot_msgs::msg::builder::Init_Movebase_speed();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__MOVEBASE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/LedShow.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/led_show.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/led_show__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_LedShow_color_b
{
public:
  explicit Init_LedShow_color_b(::ymrobot_msgs::msg::LedShow & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::LedShow color_b(::ymrobot_msgs::msg::LedShow::_color_b_type arg)
  {
    msg_.color_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::LedShow msg_;
};

class Init_LedShow_color_g
{
public:
  explicit Init_LedShow_color_g(::ymrobot_msgs::msg::LedShow & msg)
  : msg_(msg)
  {}
  Init_LedShow_color_b color_g(::ymrobot_msgs::msg::LedShow::_color_g_type arg)
  {
    msg_.color_g = std::move(arg);
    return Init_LedShow_color_b(msg_);
  }

private:
  ::ymrobot_msgs::msg::LedShow msg_;
};

class Init_LedShow_color_r
{
public:
  explicit Init_LedShow_color_r(::ymrobot_msgs::msg::LedShow & msg)
  : msg_(msg)
  {}
  Init_LedShow_color_g color_r(::ymrobot_msgs::msg::LedShow::_color_r_type arg)
  {
    msg_.color_r = std::move(arg);
    return Init_LedShow_color_g(msg_);
  }

private:
  ::ymrobot_msgs::msg::LedShow msg_;
};

class Init_LedShow_luminance
{
public:
  Init_LedShow_luminance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedShow_color_r luminance(::ymrobot_msgs::msg::LedShow::_luminance_type arg)
  {
    msg_.luminance = std::move(arg);
    return Init_LedShow_color_r(msg_);
  }

private:
  ::ymrobot_msgs::msg::LedShow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::LedShow>()
{
  return ymrobot_msgs::msg::builder::Init_LedShow_luminance();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__LED_SHOW__BUILDER_HPP_

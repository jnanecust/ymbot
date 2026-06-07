// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/WakeUpWordSetting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/wake_up_word_setting.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/wake_up_word_setting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_WakeUpWordSetting_wake_up_word
{
public:
  Init_WakeUpWordSetting_wake_up_word()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::msg::WakeUpWordSetting wake_up_word(::ymrobot_msgs::msg::WakeUpWordSetting::_wake_up_word_type arg)
  {
    msg_.wake_up_word = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::WakeUpWordSetting msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::WakeUpWordSetting>()
{
  return ymrobot_msgs::msg::builder::Init_WakeUpWordSetting_wake_up_word();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__BUILDER_HPP_

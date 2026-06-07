// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/EmojiFixed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/emoji_fixed.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/emoji_fixed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_EmojiFixed_code
{
public:
  Init_EmojiFixed_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::msg::EmojiFixed code(::ymrobot_msgs::msg::EmojiFixed::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::EmojiFixed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::EmojiFixed>()
{
  return ymrobot_msgs::msg::builder::Init_EmojiFixed_code();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__BUILDER_HPP_

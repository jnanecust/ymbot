// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/voice_message.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/voice_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_VoiceMessage_play_online_audio
{
public:
  explicit Init_VoiceMessage_play_online_audio(::ymrobot_msgs::msg::VoiceMessage & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::VoiceMessage play_online_audio(::ymrobot_msgs::msg::VoiceMessage::_play_online_audio_type arg)
  {
    msg_.play_online_audio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::VoiceMessage msg_;
};

class Init_VoiceMessage_delete_fixed_audio
{
public:
  explicit Init_VoiceMessage_delete_fixed_audio(::ymrobot_msgs::msg::VoiceMessage & msg)
  : msg_(msg)
  {}
  Init_VoiceMessage_play_online_audio delete_fixed_audio(::ymrobot_msgs::msg::VoiceMessage::_delete_fixed_audio_type arg)
  {
    msg_.delete_fixed_audio = std::move(arg);
    return Init_VoiceMessage_play_online_audio(msg_);
  }

private:
  ::ymrobot_msgs::msg::VoiceMessage msg_;
};

class Init_VoiceMessage_synthetic_audio_title
{
public:
  explicit Init_VoiceMessage_synthetic_audio_title(::ymrobot_msgs::msg::VoiceMessage & msg)
  : msg_(msg)
  {}
  Init_VoiceMessage_delete_fixed_audio synthetic_audio_title(::ymrobot_msgs::msg::VoiceMessage::_synthetic_audio_title_type arg)
  {
    msg_.synthetic_audio_title = std::move(arg);
    return Init_VoiceMessage_delete_fixed_audio(msg_);
  }

private:
  ::ymrobot_msgs::msg::VoiceMessage msg_;
};

class Init_VoiceMessage_synthetic_audio_txt
{
public:
  explicit Init_VoiceMessage_synthetic_audio_txt(::ymrobot_msgs::msg::VoiceMessage & msg)
  : msg_(msg)
  {}
  Init_VoiceMessage_synthetic_audio_title synthetic_audio_txt(::ymrobot_msgs::msg::VoiceMessage::_synthetic_audio_txt_type arg)
  {
    msg_.synthetic_audio_txt = std::move(arg);
    return Init_VoiceMessage_synthetic_audio_title(msg_);
  }

private:
  ::ymrobot_msgs::msg::VoiceMessage msg_;
};

class Init_VoiceMessage_timbre
{
public:
  explicit Init_VoiceMessage_timbre(::ymrobot_msgs::msg::VoiceMessage & msg)
  : msg_(msg)
  {}
  Init_VoiceMessage_synthetic_audio_txt timbre(::ymrobot_msgs::msg::VoiceMessage::_timbre_type arg)
  {
    msg_.timbre = std::move(arg);
    return Init_VoiceMessage_synthetic_audio_txt(msg_);
  }

private:
  ::ymrobot_msgs::msg::VoiceMessage msg_;
};

class Init_VoiceMessage_fixed_audio_name
{
public:
  explicit Init_VoiceMessage_fixed_audio_name(::ymrobot_msgs::msg::VoiceMessage & msg)
  : msg_(msg)
  {}
  Init_VoiceMessage_timbre fixed_audio_name(::ymrobot_msgs::msg::VoiceMessage::_fixed_audio_name_type arg)
  {
    msg_.fixed_audio_name = std::move(arg);
    return Init_VoiceMessage_timbre(msg_);
  }

private:
  ::ymrobot_msgs::msg::VoiceMessage msg_;
};

class Init_VoiceMessage_audio_task_type
{
public:
  Init_VoiceMessage_audio_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VoiceMessage_fixed_audio_name audio_task_type(::ymrobot_msgs::msg::VoiceMessage::_audio_task_type_type arg)
  {
    msg_.audio_task_type = std::move(arg);
    return Init_VoiceMessage_fixed_audio_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::VoiceMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::VoiceMessage>()
{
  return ymrobot_msgs::msg::builder::Init_VoiceMessage_audio_task_type();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__BUILDER_HPP_

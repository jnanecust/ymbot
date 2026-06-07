// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/Audio.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/audio.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__AUDIO__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__AUDIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/audio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Audio_Request_play_online_audio
{
public:
  explicit Init_Audio_Request_play_online_audio(::ymrobot_msgs::srv::Audio_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::Audio_Request play_online_audio(::ymrobot_msgs::srv::Audio_Request::_play_online_audio_type arg)
  {
    msg_.play_online_audio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Request msg_;
};

class Init_Audio_Request_delete_fixed_audio
{
public:
  explicit Init_Audio_Request_delete_fixed_audio(::ymrobot_msgs::srv::Audio_Request & msg)
  : msg_(msg)
  {}
  Init_Audio_Request_play_online_audio delete_fixed_audio(::ymrobot_msgs::srv::Audio_Request::_delete_fixed_audio_type arg)
  {
    msg_.delete_fixed_audio = std::move(arg);
    return Init_Audio_Request_play_online_audio(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Request msg_;
};

class Init_Audio_Request_synthetic_audio_title
{
public:
  explicit Init_Audio_Request_synthetic_audio_title(::ymrobot_msgs::srv::Audio_Request & msg)
  : msg_(msg)
  {}
  Init_Audio_Request_delete_fixed_audio synthetic_audio_title(::ymrobot_msgs::srv::Audio_Request::_synthetic_audio_title_type arg)
  {
    msg_.synthetic_audio_title = std::move(arg);
    return Init_Audio_Request_delete_fixed_audio(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Request msg_;
};

class Init_Audio_Request_synthetic_audio_txt
{
public:
  explicit Init_Audio_Request_synthetic_audio_txt(::ymrobot_msgs::srv::Audio_Request & msg)
  : msg_(msg)
  {}
  Init_Audio_Request_synthetic_audio_title synthetic_audio_txt(::ymrobot_msgs::srv::Audio_Request::_synthetic_audio_txt_type arg)
  {
    msg_.synthetic_audio_txt = std::move(arg);
    return Init_Audio_Request_synthetic_audio_title(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Request msg_;
};

class Init_Audio_Request_timbre
{
public:
  explicit Init_Audio_Request_timbre(::ymrobot_msgs::srv::Audio_Request & msg)
  : msg_(msg)
  {}
  Init_Audio_Request_synthetic_audio_txt timbre(::ymrobot_msgs::srv::Audio_Request::_timbre_type arg)
  {
    msg_.timbre = std::move(arg);
    return Init_Audio_Request_synthetic_audio_txt(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Request msg_;
};

class Init_Audio_Request_fixed_audio_name
{
public:
  explicit Init_Audio_Request_fixed_audio_name(::ymrobot_msgs::srv::Audio_Request & msg)
  : msg_(msg)
  {}
  Init_Audio_Request_timbre fixed_audio_name(::ymrobot_msgs::srv::Audio_Request::_fixed_audio_name_type arg)
  {
    msg_.fixed_audio_name = std::move(arg);
    return Init_Audio_Request_timbre(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Request msg_;
};

class Init_Audio_Request_audio_task_type
{
public:
  Init_Audio_Request_audio_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Audio_Request_fixed_audio_name audio_task_type(::ymrobot_msgs::srv::Audio_Request::_audio_task_type_type arg)
  {
    msg_.audio_task_type = std::move(arg);
    return Init_Audio_Request_fixed_audio_name(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::Audio_Request>()
{
  return ymrobot_msgs::srv::builder::Init_Audio_Request_audio_task_type();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Audio_Response_total_elapsed_time
{
public:
  explicit Init_Audio_Response_total_elapsed_time(::ymrobot_msgs::srv::Audio_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::Audio_Response total_elapsed_time(::ymrobot_msgs::srv::Audio_Response::_total_elapsed_time_type arg)
  {
    msg_.total_elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Response msg_;
};

class Init_Audio_Response_message
{
public:
  explicit Init_Audio_Response_message(::ymrobot_msgs::srv::Audio_Response & msg)
  : msg_(msg)
  {}
  Init_Audio_Response_total_elapsed_time message(::ymrobot_msgs::srv::Audio_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Audio_Response_total_elapsed_time(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Response msg_;
};

class Init_Audio_Response_success
{
public:
  Init_Audio_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Audio_Response_message success(::ymrobot_msgs::srv::Audio_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Audio_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::Audio_Response>()
{
  return ymrobot_msgs::srv::builder::Init_Audio_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Audio_Event_response
{
public:
  explicit Init_Audio_Event_response(::ymrobot_msgs::srv::Audio_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::Audio_Event response(::ymrobot_msgs::srv::Audio_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Event msg_;
};

class Init_Audio_Event_request
{
public:
  explicit Init_Audio_Event_request(::ymrobot_msgs::srv::Audio_Event & msg)
  : msg_(msg)
  {}
  Init_Audio_Event_response request(::ymrobot_msgs::srv::Audio_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Audio_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Event msg_;
};

class Init_Audio_Event_info
{
public:
  Init_Audio_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Audio_Event_request info(::ymrobot_msgs::srv::Audio_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Audio_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::Audio_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::Audio_Event>()
{
  return ymrobot_msgs::srv::builder::Init_Audio_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__AUDIO__BUILDER_HPP_

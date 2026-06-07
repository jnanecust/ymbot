// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/Detect.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/detect.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__DETECT__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__DETECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/detect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Detect_Request_detect_target_name
{
public:
  Init_Detect_Request_detect_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::srv::Detect_Request detect_target_name(::ymrobot_msgs::srv::Detect_Request::_detect_target_name_type arg)
  {
    msg_.detect_target_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::Detect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::Detect_Request>()
{
  return ymrobot_msgs::srv::builder::Init_Detect_Request_detect_target_name();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Detect_Response_target_position
{
public:
  explicit Init_Detect_Response_target_position(::ymrobot_msgs::srv::Detect_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::Detect_Response target_position(::ymrobot_msgs::srv::Detect_Response::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::Detect_Response msg_;
};

class Init_Detect_Response_message
{
public:
  explicit Init_Detect_Response_message(::ymrobot_msgs::srv::Detect_Response & msg)
  : msg_(msg)
  {}
  Init_Detect_Response_target_position message(::ymrobot_msgs::srv::Detect_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Detect_Response_target_position(msg_);
  }

private:
  ::ymrobot_msgs::srv::Detect_Response msg_;
};

class Init_Detect_Response_success
{
public:
  Init_Detect_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detect_Response_message success(::ymrobot_msgs::srv::Detect_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Detect_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::Detect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::Detect_Response>()
{
  return ymrobot_msgs::srv::builder::Init_Detect_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Detect_Event_response
{
public:
  explicit Init_Detect_Event_response(::ymrobot_msgs::srv::Detect_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::Detect_Event response(::ymrobot_msgs::srv::Detect_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::Detect_Event msg_;
};

class Init_Detect_Event_request
{
public:
  explicit Init_Detect_Event_request(::ymrobot_msgs::srv::Detect_Event & msg)
  : msg_(msg)
  {}
  Init_Detect_Event_response request(::ymrobot_msgs::srv::Detect_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Detect_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::Detect_Event msg_;
};

class Init_Detect_Event_info
{
public:
  Init_Detect_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detect_Event_request info(::ymrobot_msgs::srv::Detect_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Detect_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::Detect_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::Detect_Event>()
{
  return ymrobot_msgs::srv::builder::Init_Detect_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__DETECT__BUILDER_HPP_

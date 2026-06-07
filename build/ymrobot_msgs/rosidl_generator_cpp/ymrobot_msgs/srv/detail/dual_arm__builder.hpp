// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/DualArm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/dual_arm.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__DUAL_ARM__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__DUAL_ARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/dual_arm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_DualArm_Request_sync_mode
{
public:
  explicit Init_DualArm_Request_sync_mode(::ymrobot_msgs::srv::DualArm_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::DualArm_Request sync_mode(::ymrobot_msgs::srv::DualArm_Request::_sync_mode_type arg)
  {
    msg_.sync_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Request msg_;
};

class Init_DualArm_Request_right_position
{
public:
  explicit Init_DualArm_Request_right_position(::ymrobot_msgs::srv::DualArm_Request & msg)
  : msg_(msg)
  {}
  Init_DualArm_Request_sync_mode right_position(::ymrobot_msgs::srv::DualArm_Request::_right_position_type arg)
  {
    msg_.right_position = std::move(arg);
    return Init_DualArm_Request_sync_mode(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Request msg_;
};

class Init_DualArm_Request_left_position
{
public:
  Init_DualArm_Request_left_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DualArm_Request_right_position left_position(::ymrobot_msgs::srv::DualArm_Request::_left_position_type arg)
  {
    msg_.left_position = std::move(arg);
    return Init_DualArm_Request_right_position(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::DualArm_Request>()
{
  return ymrobot_msgs::srv::builder::Init_DualArm_Request_left_position();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_DualArm_Response_message
{
public:
  explicit Init_DualArm_Response_message(::ymrobot_msgs::srv::DualArm_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::DualArm_Response message(::ymrobot_msgs::srv::DualArm_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Response msg_;
};

class Init_DualArm_Response_success
{
public:
  Init_DualArm_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DualArm_Response_message success(::ymrobot_msgs::srv::DualArm_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DualArm_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::DualArm_Response>()
{
  return ymrobot_msgs::srv::builder::Init_DualArm_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_DualArm_Event_response
{
public:
  explicit Init_DualArm_Event_response(::ymrobot_msgs::srv::DualArm_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::DualArm_Event response(::ymrobot_msgs::srv::DualArm_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Event msg_;
};

class Init_DualArm_Event_request
{
public:
  explicit Init_DualArm_Event_request(::ymrobot_msgs::srv::DualArm_Event & msg)
  : msg_(msg)
  {}
  Init_DualArm_Event_response request(::ymrobot_msgs::srv::DualArm_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DualArm_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Event msg_;
};

class Init_DualArm_Event_info
{
public:
  Init_DualArm_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DualArm_Event_request info(::ymrobot_msgs::srv::DualArm_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DualArm_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::DualArm_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::DualArm_Event>()
{
  return ymrobot_msgs::srv::builder::Init_DualArm_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__DUAL_ARM__BUILDER_HPP_

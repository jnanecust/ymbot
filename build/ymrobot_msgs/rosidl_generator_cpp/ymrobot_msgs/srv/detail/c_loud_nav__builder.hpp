// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/CLoudNav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/c_loud_nav.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/c_loud_nav__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_CLoudNav_Request_nav_target_yaw
{
public:
  explicit Init_CLoudNav_Request_nav_target_yaw(::ymrobot_msgs::srv::CLoudNav_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::CLoudNav_Request nav_target_yaw(::ymrobot_msgs::srv::CLoudNav_Request::_nav_target_yaw_type arg)
  {
    msg_.nav_target_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Request msg_;
};

class Init_CLoudNav_Request_nav_target_y
{
public:
  explicit Init_CLoudNav_Request_nav_target_y(::ymrobot_msgs::srv::CLoudNav_Request & msg)
  : msg_(msg)
  {}
  Init_CLoudNav_Request_nav_target_yaw nav_target_y(::ymrobot_msgs::srv::CLoudNav_Request::_nav_target_y_type arg)
  {
    msg_.nav_target_y = std::move(arg);
    return Init_CLoudNav_Request_nav_target_yaw(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Request msg_;
};

class Init_CLoudNav_Request_nav_target_x
{
public:
  explicit Init_CLoudNav_Request_nav_target_x(::ymrobot_msgs::srv::CLoudNav_Request & msg)
  : msg_(msg)
  {}
  Init_CLoudNav_Request_nav_target_y nav_target_x(::ymrobot_msgs::srv::CLoudNav_Request::_nav_target_x_type arg)
  {
    msg_.nav_target_x = std::move(arg);
    return Init_CLoudNav_Request_nav_target_y(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Request msg_;
};

class Init_CLoudNav_Request_nav_target_name
{
public:
  explicit Init_CLoudNav_Request_nav_target_name(::ymrobot_msgs::srv::CLoudNav_Request & msg)
  : msg_(msg)
  {}
  Init_CLoudNav_Request_nav_target_x nav_target_name(::ymrobot_msgs::srv::CLoudNav_Request::_nav_target_name_type arg)
  {
    msg_.nav_target_name = std::move(arg);
    return Init_CLoudNav_Request_nav_target_x(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Request msg_;
};

class Init_CLoudNav_Request_nav_mode
{
public:
  Init_CLoudNav_Request_nav_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CLoudNav_Request_nav_target_name nav_mode(::ymrobot_msgs::srv::CLoudNav_Request::_nav_mode_type arg)
  {
    msg_.nav_mode = std::move(arg);
    return Init_CLoudNav_Request_nav_target_name(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::CLoudNav_Request>()
{
  return ymrobot_msgs::srv::builder::Init_CLoudNav_Request_nav_mode();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_CLoudNav_Response_message
{
public:
  explicit Init_CLoudNav_Response_message(::ymrobot_msgs::srv::CLoudNav_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::CLoudNav_Response message(::ymrobot_msgs::srv::CLoudNav_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Response msg_;
};

class Init_CLoudNav_Response_success
{
public:
  Init_CLoudNav_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CLoudNav_Response_message success(::ymrobot_msgs::srv::CLoudNav_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CLoudNav_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::CLoudNav_Response>()
{
  return ymrobot_msgs::srv::builder::Init_CLoudNav_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_CLoudNav_Event_response
{
public:
  explicit Init_CLoudNav_Event_response(::ymrobot_msgs::srv::CLoudNav_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::CLoudNav_Event response(::ymrobot_msgs::srv::CLoudNav_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Event msg_;
};

class Init_CLoudNav_Event_request
{
public:
  explicit Init_CLoudNav_Event_request(::ymrobot_msgs::srv::CLoudNav_Event & msg)
  : msg_(msg)
  {}
  Init_CLoudNav_Event_response request(::ymrobot_msgs::srv::CLoudNav_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CLoudNav_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Event msg_;
};

class Init_CLoudNav_Event_info
{
public:
  Init_CLoudNav_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CLoudNav_Event_request info(::ymrobot_msgs::srv::CLoudNav_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CLoudNav_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::CLoudNav_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::CLoudNav_Event>()
{
  return ymrobot_msgs::srv::builder::Init_CLoudNav_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__C_LOUD_NAV__BUILDER_HPP_

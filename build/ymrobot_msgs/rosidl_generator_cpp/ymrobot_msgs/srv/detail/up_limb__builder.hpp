// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/UpLimb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/up_limb.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/up_limb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_UpLimb_Request_left_and_right_select
{
public:
  explicit Init_UpLimb_Request_left_and_right_select(::ymrobot_msgs::srv::UpLimb_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::UpLimb_Request left_and_right_select(::ymrobot_msgs::srv::UpLimb_Request::_left_and_right_select_type arg)
  {
    msg_.left_and_right_select = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Request msg_;
};

class Init_UpLimb_Request_action_fixed
{
public:
  explicit Init_UpLimb_Request_action_fixed(::ymrobot_msgs::srv::UpLimb_Request & msg)
  : msg_(msg)
  {}
  Init_UpLimb_Request_left_and_right_select action_fixed(::ymrobot_msgs::srv::UpLimb_Request::_action_fixed_type arg)
  {
    msg_.action_fixed = std::move(arg);
    return Init_UpLimb_Request_left_and_right_select(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Request msg_;
};

class Init_UpLimb_Request_place_joint_list
{
public:
  explicit Init_UpLimb_Request_place_joint_list(::ymrobot_msgs::srv::UpLimb_Request & msg)
  : msg_(msg)
  {}
  Init_UpLimb_Request_action_fixed place_joint_list(::ymrobot_msgs::srv::UpLimb_Request::_place_joint_list_type arg)
  {
    msg_.place_joint_list = std::move(arg);
    return Init_UpLimb_Request_action_fixed(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Request msg_;
};

class Init_UpLimb_Request_position
{
public:
  explicit Init_UpLimb_Request_position(::ymrobot_msgs::srv::UpLimb_Request & msg)
  : msg_(msg)
  {}
  Init_UpLimb_Request_place_joint_list position(::ymrobot_msgs::srv::UpLimb_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_UpLimb_Request_place_joint_list(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Request msg_;
};

class Init_UpLimb_Request_up_limb_task_type
{
public:
  Init_UpLimb_Request_up_limb_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpLimb_Request_position up_limb_task_type(::ymrobot_msgs::srv::UpLimb_Request::_up_limb_task_type_type arg)
  {
    msg_.up_limb_task_type = std::move(arg);
    return Init_UpLimb_Request_position(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::UpLimb_Request>()
{
  return ymrobot_msgs::srv::builder::Init_UpLimb_Request_up_limb_task_type();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_UpLimb_Response_message
{
public:
  explicit Init_UpLimb_Response_message(::ymrobot_msgs::srv::UpLimb_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::UpLimb_Response message(::ymrobot_msgs::srv::UpLimb_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Response msg_;
};

class Init_UpLimb_Response_success
{
public:
  Init_UpLimb_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpLimb_Response_message success(::ymrobot_msgs::srv::UpLimb_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_UpLimb_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::UpLimb_Response>()
{
  return ymrobot_msgs::srv::builder::Init_UpLimb_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_UpLimb_Event_response
{
public:
  explicit Init_UpLimb_Event_response(::ymrobot_msgs::srv::UpLimb_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::UpLimb_Event response(::ymrobot_msgs::srv::UpLimb_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Event msg_;
};

class Init_UpLimb_Event_request
{
public:
  explicit Init_UpLimb_Event_request(::ymrobot_msgs::srv::UpLimb_Event & msg)
  : msg_(msg)
  {}
  Init_UpLimb_Event_response request(::ymrobot_msgs::srv::UpLimb_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_UpLimb_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Event msg_;
};

class Init_UpLimb_Event_info
{
public:
  Init_UpLimb_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpLimb_Event_request info(::ymrobot_msgs::srv::UpLimb_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_UpLimb_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::UpLimb_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::UpLimb_Event>()
{
  return ymrobot_msgs::srv::builder::Init_UpLimb_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__UP_LIMB__BUILDER_HPP_

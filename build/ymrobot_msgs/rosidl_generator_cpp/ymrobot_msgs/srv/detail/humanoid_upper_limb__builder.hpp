// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/HumanoidUpperLimb.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/humanoid_upper_limb.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/humanoid_upper_limb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_HumanoidUpperLimb_Request_fixed_upper_action
{
public:
  explicit Init_HumanoidUpperLimb_Request_fixed_upper_action(::ymrobot_msgs::srv::HumanoidUpperLimb_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Request fixed_upper_action(::ymrobot_msgs::srv::HumanoidUpperLimb_Request::_fixed_upper_action_type arg)
  {
    msg_.fixed_upper_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Request msg_;
};

class Init_HumanoidUpperLimb_Request_upper_action_task_type
{
public:
  Init_HumanoidUpperLimb_Request_upper_action_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanoidUpperLimb_Request_fixed_upper_action upper_action_task_type(::ymrobot_msgs::srv::HumanoidUpperLimb_Request::_upper_action_task_type_type arg)
  {
    msg_.upper_action_task_type = std::move(arg);
    return Init_HumanoidUpperLimb_Request_fixed_upper_action(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::HumanoidUpperLimb_Request>()
{
  return ymrobot_msgs::srv::builder::Init_HumanoidUpperLimb_Request_upper_action_task_type();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_HumanoidUpperLimb_Response_total_elapsed_time
{
public:
  explicit Init_HumanoidUpperLimb_Response_total_elapsed_time(::ymrobot_msgs::srv::HumanoidUpperLimb_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Response total_elapsed_time(::ymrobot_msgs::srv::HumanoidUpperLimb_Response::_total_elapsed_time_type arg)
  {
    msg_.total_elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Response msg_;
};

class Init_HumanoidUpperLimb_Response_message
{
public:
  explicit Init_HumanoidUpperLimb_Response_message(::ymrobot_msgs::srv::HumanoidUpperLimb_Response & msg)
  : msg_(msg)
  {}
  Init_HumanoidUpperLimb_Response_total_elapsed_time message(::ymrobot_msgs::srv::HumanoidUpperLimb_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_HumanoidUpperLimb_Response_total_elapsed_time(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Response msg_;
};

class Init_HumanoidUpperLimb_Response_success
{
public:
  Init_HumanoidUpperLimb_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanoidUpperLimb_Response_message success(::ymrobot_msgs::srv::HumanoidUpperLimb_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HumanoidUpperLimb_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::HumanoidUpperLimb_Response>()
{
  return ymrobot_msgs::srv::builder::Init_HumanoidUpperLimb_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_HumanoidUpperLimb_Event_response
{
public:
  explicit Init_HumanoidUpperLimb_Event_response(::ymrobot_msgs::srv::HumanoidUpperLimb_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Event response(::ymrobot_msgs::srv::HumanoidUpperLimb_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Event msg_;
};

class Init_HumanoidUpperLimb_Event_request
{
public:
  explicit Init_HumanoidUpperLimb_Event_request(::ymrobot_msgs::srv::HumanoidUpperLimb_Event & msg)
  : msg_(msg)
  {}
  Init_HumanoidUpperLimb_Event_response request(::ymrobot_msgs::srv::HumanoidUpperLimb_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_HumanoidUpperLimb_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Event msg_;
};

class Init_HumanoidUpperLimb_Event_info
{
public:
  Init_HumanoidUpperLimb_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanoidUpperLimb_Event_request info(::ymrobot_msgs::srv::HumanoidUpperLimb_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_HumanoidUpperLimb_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::HumanoidUpperLimb_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::HumanoidUpperLimb_Event>()
{
  return ymrobot_msgs::srv::builder::Init_HumanoidUpperLimb_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__HUMANOID_UPPER_LIMB__BUILDER_HPP_

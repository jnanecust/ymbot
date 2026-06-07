// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/LargeModelRequestTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/large_model_request_task.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/large_model_request_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_LargeModelRequestTask_Request_upper_climb_fixed_action
{
public:
  explicit Init_LargeModelRequestTask_Request_upper_climb_fixed_action(::ymrobot_msgs::srv::LargeModelRequestTask_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::LargeModelRequestTask_Request upper_climb_fixed_action(::ymrobot_msgs::srv::LargeModelRequestTask_Request::_upper_climb_fixed_action_type arg)
  {
    msg_.upper_climb_fixed_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Request msg_;
};

class Init_LargeModelRequestTask_Request_guidance_task_name
{
public:
  explicit Init_LargeModelRequestTask_Request_guidance_task_name(::ymrobot_msgs::srv::LargeModelRequestTask_Request & msg)
  : msg_(msg)
  {}
  Init_LargeModelRequestTask_Request_upper_climb_fixed_action guidance_task_name(::ymrobot_msgs::srv::LargeModelRequestTask_Request::_guidance_task_name_type arg)
  {
    msg_.guidance_task_name = std::move(arg);
    return Init_LargeModelRequestTask_Request_upper_climb_fixed_action(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Request msg_;
};

class Init_LargeModelRequestTask_Request_mark_point_name_list
{
public:
  explicit Init_LargeModelRequestTask_Request_mark_point_name_list(::ymrobot_msgs::srv::LargeModelRequestTask_Request & msg)
  : msg_(msg)
  {}
  Init_LargeModelRequestTask_Request_guidance_task_name mark_point_name_list(::ymrobot_msgs::srv::LargeModelRequestTask_Request::_mark_point_name_list_type arg)
  {
    msg_.mark_point_name_list = std::move(arg);
    return Init_LargeModelRequestTask_Request_guidance_task_name(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Request msg_;
};

class Init_LargeModelRequestTask_Request_mark_point_name
{
public:
  explicit Init_LargeModelRequestTask_Request_mark_point_name(::ymrobot_msgs::srv::LargeModelRequestTask_Request & msg)
  : msg_(msg)
  {}
  Init_LargeModelRequestTask_Request_mark_point_name_list mark_point_name(::ymrobot_msgs::srv::LargeModelRequestTask_Request::_mark_point_name_type arg)
  {
    msg_.mark_point_name = std::move(arg);
    return Init_LargeModelRequestTask_Request_mark_point_name_list(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Request msg_;
};

class Init_LargeModelRequestTask_Request_larget_mode_task_type
{
public:
  Init_LargeModelRequestTask_Request_larget_mode_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LargeModelRequestTask_Request_mark_point_name larget_mode_task_type(::ymrobot_msgs::srv::LargeModelRequestTask_Request::_larget_mode_task_type_type arg)
  {
    msg_.larget_mode_task_type = std::move(arg);
    return Init_LargeModelRequestTask_Request_mark_point_name(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::LargeModelRequestTask_Request>()
{
  return ymrobot_msgs::srv::builder::Init_LargeModelRequestTask_Request_larget_mode_task_type();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_LargeModelRequestTask_Response_message
{
public:
  explicit Init_LargeModelRequestTask_Response_message(::ymrobot_msgs::srv::LargeModelRequestTask_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::LargeModelRequestTask_Response message(::ymrobot_msgs::srv::LargeModelRequestTask_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Response msg_;
};

class Init_LargeModelRequestTask_Response_error_code
{
public:
  explicit Init_LargeModelRequestTask_Response_error_code(::ymrobot_msgs::srv::LargeModelRequestTask_Response & msg)
  : msg_(msg)
  {}
  Init_LargeModelRequestTask_Response_message error_code(::ymrobot_msgs::srv::LargeModelRequestTask_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_LargeModelRequestTask_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Response msg_;
};

class Init_LargeModelRequestTask_Response_success
{
public:
  Init_LargeModelRequestTask_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LargeModelRequestTask_Response_error_code success(::ymrobot_msgs::srv::LargeModelRequestTask_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LargeModelRequestTask_Response_error_code(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::LargeModelRequestTask_Response>()
{
  return ymrobot_msgs::srv::builder::Init_LargeModelRequestTask_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_LargeModelRequestTask_Event_response
{
public:
  explicit Init_LargeModelRequestTask_Event_response(::ymrobot_msgs::srv::LargeModelRequestTask_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::LargeModelRequestTask_Event response(::ymrobot_msgs::srv::LargeModelRequestTask_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Event msg_;
};

class Init_LargeModelRequestTask_Event_request
{
public:
  explicit Init_LargeModelRequestTask_Event_request(::ymrobot_msgs::srv::LargeModelRequestTask_Event & msg)
  : msg_(msg)
  {}
  Init_LargeModelRequestTask_Event_response request(::ymrobot_msgs::srv::LargeModelRequestTask_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LargeModelRequestTask_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Event msg_;
};

class Init_LargeModelRequestTask_Event_info
{
public:
  Init_LargeModelRequestTask_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LargeModelRequestTask_Event_request info(::ymrobot_msgs::srv::LargeModelRequestTask_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LargeModelRequestTask_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::LargeModelRequestTask_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::LargeModelRequestTask_Event>()
{
  return ymrobot_msgs::srv::builder::Init_LargeModelRequestTask_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__LARGE_MODEL_REQUEST_TASK__BUILDER_HPP_

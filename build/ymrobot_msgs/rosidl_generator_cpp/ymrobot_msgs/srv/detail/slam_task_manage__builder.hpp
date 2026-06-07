// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/SlamTaskManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/slam_task_manage.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__SLAM_TASK_MANAGE__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__SLAM_TASK_MANAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/slam_task_manage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SlamTaskManage_Request_action
{
public:
  explicit Init_SlamTaskManage_Request_action(::ymrobot_msgs::srv::SlamTaskManage_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::SlamTaskManage_Request action(::ymrobot_msgs::srv::SlamTaskManage_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::SlamTaskManage_Request msg_;
};

class Init_SlamTaskManage_Request_task
{
public:
  Init_SlamTaskManage_Request_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamTaskManage_Request_action task(::ymrobot_msgs::srv::SlamTaskManage_Request::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_SlamTaskManage_Request_action(msg_);
  }

private:
  ::ymrobot_msgs::srv::SlamTaskManage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::SlamTaskManage_Request>()
{
  return ymrobot_msgs::srv::builder::Init_SlamTaskManage_Request_task();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SlamTaskManage_Response_message
{
public:
  explicit Init_SlamTaskManage_Response_message(::ymrobot_msgs::srv::SlamTaskManage_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::SlamTaskManage_Response message(::ymrobot_msgs::srv::SlamTaskManage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::SlamTaskManage_Response msg_;
};

class Init_SlamTaskManage_Response_success
{
public:
  Init_SlamTaskManage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamTaskManage_Response_message success(::ymrobot_msgs::srv::SlamTaskManage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SlamTaskManage_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::SlamTaskManage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::SlamTaskManage_Response>()
{
  return ymrobot_msgs::srv::builder::Init_SlamTaskManage_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_SlamTaskManage_Event_response
{
public:
  explicit Init_SlamTaskManage_Event_response(::ymrobot_msgs::srv::SlamTaskManage_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::SlamTaskManage_Event response(::ymrobot_msgs::srv::SlamTaskManage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::SlamTaskManage_Event msg_;
};

class Init_SlamTaskManage_Event_request
{
public:
  explicit Init_SlamTaskManage_Event_request(::ymrobot_msgs::srv::SlamTaskManage_Event & msg)
  : msg_(msg)
  {}
  Init_SlamTaskManage_Event_response request(::ymrobot_msgs::srv::SlamTaskManage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SlamTaskManage_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::SlamTaskManage_Event msg_;
};

class Init_SlamTaskManage_Event_info
{
public:
  Init_SlamTaskManage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamTaskManage_Event_request info(::ymrobot_msgs::srv::SlamTaskManage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SlamTaskManage_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::SlamTaskManage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::SlamTaskManage_Event>()
{
  return ymrobot_msgs::srv::builder::Init_SlamTaskManage_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__SLAM_TASK_MANAGE__BUILDER_HPP_

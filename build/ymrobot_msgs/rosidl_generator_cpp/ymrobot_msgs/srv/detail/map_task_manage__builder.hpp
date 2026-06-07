// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/MapTaskManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/map_task_manage.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/map_task_manage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_MapTaskManage_Request_pgm_name
{
public:
  explicit Init_MapTaskManage_Request_pgm_name(::ymrobot_msgs::srv::MapTaskManage_Request & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::MapTaskManage_Request pgm_name(::ymrobot_msgs::srv::MapTaskManage_Request::_pgm_name_type arg)
  {
    msg_.pgm_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Request msg_;
};

class Init_MapTaskManage_Request_pcd_name
{
public:
  explicit Init_MapTaskManage_Request_pcd_name(::ymrobot_msgs::srv::MapTaskManage_Request & msg)
  : msg_(msg)
  {}
  Init_MapTaskManage_Request_pgm_name pcd_name(::ymrobot_msgs::srv::MapTaskManage_Request::_pcd_name_type arg)
  {
    msg_.pcd_name = std::move(arg);
    return Init_MapTaskManage_Request_pgm_name(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Request msg_;
};

class Init_MapTaskManage_Request_map_name
{
public:
  explicit Init_MapTaskManage_Request_map_name(::ymrobot_msgs::srv::MapTaskManage_Request & msg)
  : msg_(msg)
  {}
  Init_MapTaskManage_Request_pcd_name map_name(::ymrobot_msgs::srv::MapTaskManage_Request::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_MapTaskManage_Request_pcd_name(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Request msg_;
};

class Init_MapTaskManage_Request_map_id
{
public:
  explicit Init_MapTaskManage_Request_map_id(::ymrobot_msgs::srv::MapTaskManage_Request & msg)
  : msg_(msg)
  {}
  Init_MapTaskManage_Request_map_name map_id(::ymrobot_msgs::srv::MapTaskManage_Request::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_MapTaskManage_Request_map_name(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Request msg_;
};

class Init_MapTaskManage_Request_map_task
{
public:
  Init_MapTaskManage_Request_map_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapTaskManage_Request_map_id map_task(::ymrobot_msgs::srv::MapTaskManage_Request::_map_task_type arg)
  {
    msg_.map_task = std::move(arg);
    return Init_MapTaskManage_Request_map_id(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::MapTaskManage_Request>()
{
  return ymrobot_msgs::srv::builder::Init_MapTaskManage_Request_map_task();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_MapTaskManage_Response_message
{
public:
  explicit Init_MapTaskManage_Response_message(::ymrobot_msgs::srv::MapTaskManage_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::MapTaskManage_Response message(::ymrobot_msgs::srv::MapTaskManage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Response msg_;
};

class Init_MapTaskManage_Response_success
{
public:
  Init_MapTaskManage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapTaskManage_Response_message success(::ymrobot_msgs::srv::MapTaskManage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MapTaskManage_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::MapTaskManage_Response>()
{
  return ymrobot_msgs::srv::builder::Init_MapTaskManage_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_MapTaskManage_Event_response
{
public:
  explicit Init_MapTaskManage_Event_response(::ymrobot_msgs::srv::MapTaskManage_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::MapTaskManage_Event response(::ymrobot_msgs::srv::MapTaskManage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Event msg_;
};

class Init_MapTaskManage_Event_request
{
public:
  explicit Init_MapTaskManage_Event_request(::ymrobot_msgs::srv::MapTaskManage_Event & msg)
  : msg_(msg)
  {}
  Init_MapTaskManage_Event_response request(::ymrobot_msgs::srv::MapTaskManage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MapTaskManage_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Event msg_;
};

class Init_MapTaskManage_Event_info
{
public:
  Init_MapTaskManage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapTaskManage_Event_request info(::ymrobot_msgs::srv::MapTaskManage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MapTaskManage_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::MapTaskManage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::MapTaskManage_Event>()
{
  return ymrobot_msgs::srv::builder::Init_MapTaskManage_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__BUILDER_HPP_

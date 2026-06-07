// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:srv/MoveTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/move_target.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__MOVE_TARGET__BUILDER_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__MOVE_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/srv/detail/move_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveTarget_Request_target_pose
{
public:
  Init_MoveTarget_Request_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ymrobot_msgs::srv::MoveTarget_Request target_pose(::ymrobot_msgs::srv::MoveTarget_Request::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::MoveTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::MoveTarget_Request>()
{
  return ymrobot_msgs::srv::builder::Init_MoveTarget_Request_target_pose();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveTarget_Response_message
{
public:
  explicit Init_MoveTarget_Response_message(::ymrobot_msgs::srv::MoveTarget_Response & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::MoveTarget_Response message(::ymrobot_msgs::srv::MoveTarget_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::MoveTarget_Response msg_;
};

class Init_MoveTarget_Response_success
{
public:
  Init_MoveTarget_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveTarget_Response_message success(::ymrobot_msgs::srv::MoveTarget_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveTarget_Response_message(msg_);
  }

private:
  ::ymrobot_msgs::srv::MoveTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::MoveTarget_Response>()
{
  return ymrobot_msgs::srv::builder::Init_MoveTarget_Response_success();
}

}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveTarget_Event_response
{
public:
  explicit Init_MoveTarget_Event_response(::ymrobot_msgs::srv::MoveTarget_Event & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::srv::MoveTarget_Event response(::ymrobot_msgs::srv::MoveTarget_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::srv::MoveTarget_Event msg_;
};

class Init_MoveTarget_Event_request
{
public:
  explicit Init_MoveTarget_Event_request(::ymrobot_msgs::srv::MoveTarget_Event & msg)
  : msg_(msg)
  {}
  Init_MoveTarget_Event_response request(::ymrobot_msgs::srv::MoveTarget_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveTarget_Event_response(msg_);
  }

private:
  ::ymrobot_msgs::srv::MoveTarget_Event msg_;
};

class Init_MoveTarget_Event_info
{
public:
  Init_MoveTarget_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveTarget_Event_request info(::ymrobot_msgs::srv::MoveTarget_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveTarget_Event_request(msg_);
  }

private:
  ::ymrobot_msgs::srv::MoveTarget_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::srv::MoveTarget_Event>()
{
  return ymrobot_msgs::srv::builder::Init_MoveTarget_Event_info();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__MOVE_TARGET__BUILDER_HPP_

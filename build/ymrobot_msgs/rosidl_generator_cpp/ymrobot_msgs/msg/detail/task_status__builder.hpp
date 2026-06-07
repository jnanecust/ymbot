// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task_status.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/task_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskStatus_text
{
public:
  explicit Init_TaskStatus_text(::ymrobot_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::TaskStatus text(::ymrobot_msgs::msg::TaskStatus::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_status
{
public:
  explicit Init_TaskStatus_status(::ymrobot_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_text status(::ymrobot_msgs::msg::TaskStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TaskStatus_text(msg_);
  }

private:
  ::ymrobot_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_task_id
{
public:
  explicit Init_TaskStatus_task_id(::ymrobot_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_status task_id(::ymrobot_msgs::msg::TaskStatus::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskStatus_status(msg_);
  }

private:
  ::ymrobot_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_amr_id
{
public:
  Init_TaskStatus_amr_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskStatus_task_id amr_id(::ymrobot_msgs::msg::TaskStatus::_amr_id_type arg)
  {
    msg_.amr_id = std::move(arg);
    return Init_TaskStatus_task_id(msg_);
  }

private:
  ::ymrobot_msgs::msg::TaskStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::TaskStatus>()
{
  return ymrobot_msgs::msg::builder::Init_TaskStatus_amr_id();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/BTNodeTaskState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/bt_node_task_state.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/bt_node_task_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_BTNodeTaskState_node_action_content
{
public:
  explicit Init_BTNodeTaskState_node_action_content(::ymrobot_msgs::msg::BTNodeTaskState & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::BTNodeTaskState node_action_content(::ymrobot_msgs::msg::BTNodeTaskState::_node_action_content_type arg)
  {
    msg_.node_action_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::BTNodeTaskState msg_;
};

class Init_BTNodeTaskState_node_task_error_message
{
public:
  explicit Init_BTNodeTaskState_node_task_error_message(::ymrobot_msgs::msg::BTNodeTaskState & msg)
  : msg_(msg)
  {}
  Init_BTNodeTaskState_node_action_content node_task_error_message(::ymrobot_msgs::msg::BTNodeTaskState::_node_task_error_message_type arg)
  {
    msg_.node_task_error_message = std::move(arg);
    return Init_BTNodeTaskState_node_action_content(msg_);
  }

private:
  ::ymrobot_msgs::msg::BTNodeTaskState msg_;
};

class Init_BTNodeTaskState_node_task_error
{
public:
  explicit Init_BTNodeTaskState_node_task_error(::ymrobot_msgs::msg::BTNodeTaskState & msg)
  : msg_(msg)
  {}
  Init_BTNodeTaskState_node_task_error_message node_task_error(::ymrobot_msgs::msg::BTNodeTaskState::_node_task_error_type arg)
  {
    msg_.node_task_error = std::move(arg);
    return Init_BTNodeTaskState_node_task_error_message(msg_);
  }

private:
  ::ymrobot_msgs::msg::BTNodeTaskState msg_;
};

class Init_BTNodeTaskState_node_task_state
{
public:
  explicit Init_BTNodeTaskState_node_task_state(::ymrobot_msgs::msg::BTNodeTaskState & msg)
  : msg_(msg)
  {}
  Init_BTNodeTaskState_node_task_error node_task_state(::ymrobot_msgs::msg::BTNodeTaskState::_node_task_state_type arg)
  {
    msg_.node_task_state = std::move(arg);
    return Init_BTNodeTaskState_node_task_error(msg_);
  }

private:
  ::ymrobot_msgs::msg::BTNodeTaskState msg_;
};

class Init_BTNodeTaskState_node_name
{
public:
  explicit Init_BTNodeTaskState_node_name(::ymrobot_msgs::msg::BTNodeTaskState & msg)
  : msg_(msg)
  {}
  Init_BTNodeTaskState_node_task_state node_name(::ymrobot_msgs::msg::BTNodeTaskState::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_BTNodeTaskState_node_task_state(msg_);
  }

private:
  ::ymrobot_msgs::msg::BTNodeTaskState msg_;
};

class Init_BTNodeTaskState_task_type
{
public:
  explicit Init_BTNodeTaskState_task_type(::ymrobot_msgs::msg::BTNodeTaskState & msg)
  : msg_(msg)
  {}
  Init_BTNodeTaskState_node_name task_type(::ymrobot_msgs::msg::BTNodeTaskState::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_BTNodeTaskState_node_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::BTNodeTaskState msg_;
};

class Init_BTNodeTaskState_task_id
{
public:
  Init_BTNodeTaskState_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BTNodeTaskState_task_type task_id(::ymrobot_msgs::msg::BTNodeTaskState::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_BTNodeTaskState_task_type(msg_);
  }

private:
  ::ymrobot_msgs::msg::BTNodeTaskState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::BTNodeTaskState>()
{
  return ymrobot_msgs::msg::builder::Init_BTNodeTaskState_task_id();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__BUILDER_HPP_

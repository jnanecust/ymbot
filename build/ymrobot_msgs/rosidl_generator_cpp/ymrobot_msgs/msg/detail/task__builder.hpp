// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_Task_binary_file
{
public:
  explicit Init_Task_binary_file(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::Task binary_file(::ymrobot_msgs::msg::Task::_binary_file_type arg)
  {
    msg_.binary_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_index
{
public:
  explicit Init_Task_index(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_binary_file index(::ymrobot_msgs::msg::Task::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_Task_binary_file(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_reload
{
public:
  explicit Init_Task_reload(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_index reload(::ymrobot_msgs::msg::Task::_reload_type arg)
  {
    msg_.reload = std::move(arg);
    return Init_Task_index(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_behavior_tree
{
public:
  explicit Init_Task_behavior_tree(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_reload behavior_tree(::ymrobot_msgs::msg::Task::_behavior_tree_type arg)
  {
    msg_.behavior_tree = std::move(arg);
    return Init_Task_reload(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_commands
{
public:
  explicit Init_Task_commands(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_behavior_tree commands(::ymrobot_msgs::msg::Task::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return Init_Task_behavior_tree(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_nav_points
{
public:
  explicit Init_Task_nav_points(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_commands nav_points(::ymrobot_msgs::msg::Task::_nav_points_type arg)
  {
    msg_.nav_points = std::move(arg);
    return Init_Task_commands(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_control_mode
{
public:
  explicit Init_Task_control_mode(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_nav_points control_mode(::ymrobot_msgs::msg::Task::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_Task_nav_points(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_task_type
{
public:
  explicit Init_Task_task_type(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_control_mode task_type(::ymrobot_msgs::msg::Task::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_Task_control_mode(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_task_id
{
public:
  explicit Init_Task_task_id(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_task_type task_id(::ymrobot_msgs::msg::Task::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_Task_task_type(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_amr_id
{
public:
  explicit Init_Task_amr_id(::ymrobot_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_task_id amr_id(::ymrobot_msgs::msg::Task::_amr_id_type arg)
  {
    msg_.amr_id = std::move(arg);
    return Init_Task_task_id(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

class Init_Task_platform_id
{
public:
  Init_Task_platform_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_amr_id platform_id(::ymrobot_msgs::msg::Task::_platform_id_type arg)
  {
    msg_.platform_id = std::move(arg);
    return Init_Task_amr_id(msg_);
  }

private:
  ::ymrobot_msgs::msg::Task msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::Task>()
{
  return ymrobot_msgs::msg::builder::Init_Task_platform_id();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_

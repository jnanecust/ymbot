// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/SlamCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/slam_command.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/slam_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_SlamCommand_stop
{
public:
  explicit Init_SlamCommand_stop(::ymrobot_msgs::msg::SlamCommand & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::SlamCommand stop(::ymrobot_msgs::msg::SlamCommand::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::SlamCommand msg_;
};

class Init_SlamCommand_start
{
public:
  explicit Init_SlamCommand_start(::ymrobot_msgs::msg::SlamCommand & msg)
  : msg_(msg)
  {}
  Init_SlamCommand_stop start(::ymrobot_msgs::msg::SlamCommand::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_SlamCommand_stop(msg_);
  }

private:
  ::ymrobot_msgs::msg::SlamCommand msg_;
};

class Init_SlamCommand_relocalize
{
public:
  explicit Init_SlamCommand_relocalize(::ymrobot_msgs::msg::SlamCommand & msg)
  : msg_(msg)
  {}
  Init_SlamCommand_start relocalize(::ymrobot_msgs::msg::SlamCommand::_relocalize_type arg)
  {
    msg_.relocalize = std::move(arg);
    return Init_SlamCommand_start(msg_);
  }

private:
  ::ymrobot_msgs::msg::SlamCommand msg_;
};

class Init_SlamCommand_mapping
{
public:
  Init_SlamCommand_mapping()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamCommand_relocalize mapping(::ymrobot_msgs::msg::SlamCommand::_mapping_type arg)
  {
    msg_.mapping = std::move(arg);
    return Init_SlamCommand_relocalize(msg_);
  }

private:
  ::ymrobot_msgs::msg::SlamCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::SlamCommand>()
{
  return ymrobot_msgs::msg::builder::Init_SlamCommand_mapping();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__BUILDER_HPP_

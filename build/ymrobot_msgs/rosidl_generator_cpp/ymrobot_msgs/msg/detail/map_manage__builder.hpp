// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/MapManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/map_manage.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/map_manage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_MapManage_pgm_file
{
public:
  explicit Init_MapManage_pgm_file(::ymrobot_msgs::msg::MapManage & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::MapManage pgm_file(::ymrobot_msgs::msg::MapManage::_pgm_file_type arg)
  {
    msg_.pgm_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::MapManage msg_;
};

class Init_MapManage_pcd_file
{
public:
  explicit Init_MapManage_pcd_file(::ymrobot_msgs::msg::MapManage & msg)
  : msg_(msg)
  {}
  Init_MapManage_pgm_file pcd_file(::ymrobot_msgs::msg::MapManage::_pcd_file_type arg)
  {
    msg_.pcd_file = std::move(arg);
    return Init_MapManage_pgm_file(msg_);
  }

private:
  ::ymrobot_msgs::msg::MapManage msg_;
};

class Init_MapManage_map_task
{
public:
  Init_MapManage_map_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapManage_pcd_file map_task(::ymrobot_msgs::msg::MapManage::_map_task_type arg)
  {
    msg_.map_task = std::move(arg);
    return Init_MapManage_pcd_file(msg_);
  }

private:
  ::ymrobot_msgs::msg::MapManage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::MapManage>()
{
  return ymrobot_msgs::msg::builder::Init_MapManage_map_task();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__MAP_MANAGE__BUILDER_HPP_

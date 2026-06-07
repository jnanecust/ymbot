// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/patrol_mission.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/patrol_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_PatrolMission_nav_name_list
{
public:
  explicit Init_PatrolMission_nav_name_list(::ymrobot_msgs::msg::PatrolMission & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::PatrolMission nav_name_list(::ymrobot_msgs::msg::PatrolMission::_nav_name_list_type arg)
  {
    msg_.nav_name_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::PatrolMission msg_;
};

class Init_PatrolMission_nearby_point_radius
{
public:
  explicit Init_PatrolMission_nearby_point_radius(::ymrobot_msgs::msg::PatrolMission & msg)
  : msg_(msg)
  {}
  Init_PatrolMission_nav_name_list nearby_point_radius(::ymrobot_msgs::msg::PatrolMission::_nearby_point_radius_type arg)
  {
    msg_.nearby_point_radius = std::move(arg);
    return Init_PatrolMission_nav_name_list(msg_);
  }

private:
  ::ymrobot_msgs::msg::PatrolMission msg_;
};

class Init_PatrolMission_is_activate_the_nearby_point
{
public:
  explicit Init_PatrolMission_is_activate_the_nearby_point(::ymrobot_msgs::msg::PatrolMission & msg)
  : msg_(msg)
  {}
  Init_PatrolMission_nearby_point_radius is_activate_the_nearby_point(::ymrobot_msgs::msg::PatrolMission::_is_activate_the_nearby_point_type arg)
  {
    msg_.is_activate_the_nearby_point = std::move(arg);
    return Init_PatrolMission_nearby_point_radius(msg_);
  }

private:
  ::ymrobot_msgs::msg::PatrolMission msg_;
};

class Init_PatrolMission_is_the_entire_process_recorded
{
public:
  explicit Init_PatrolMission_is_the_entire_process_recorded(::ymrobot_msgs::msg::PatrolMission & msg)
  : msg_(msg)
  {}
  Init_PatrolMission_is_activate_the_nearby_point is_the_entire_process_recorded(::ymrobot_msgs::msg::PatrolMission::_is_the_entire_process_recorded_type arg)
  {
    msg_.is_the_entire_process_recorded = std::move(arg);
    return Init_PatrolMission_is_activate_the_nearby_point(msg_);
  }

private:
  ::ymrobot_msgs::msg::PatrolMission msg_;
};

class Init_PatrolMission_full_audio_name
{
public:
  explicit Init_PatrolMission_full_audio_name(::ymrobot_msgs::msg::PatrolMission & msg)
  : msg_(msg)
  {}
  Init_PatrolMission_is_the_entire_process_recorded full_audio_name(::ymrobot_msgs::msg::PatrolMission::_full_audio_name_type arg)
  {
    msg_.full_audio_name = std::move(arg);
    return Init_PatrolMission_is_the_entire_process_recorded(msg_);
  }

private:
  ::ymrobot_msgs::msg::PatrolMission msg_;
};

class Init_PatrolMission_is_audio_played_throughout_the_entire_process
{
public:
  explicit Init_PatrolMission_is_audio_played_throughout_the_entire_process(::ymrobot_msgs::msg::PatrolMission & msg)
  : msg_(msg)
  {}
  Init_PatrolMission_full_audio_name is_audio_played_throughout_the_entire_process(::ymrobot_msgs::msg::PatrolMission::_is_audio_played_throughout_the_entire_process_type arg)
  {
    msg_.is_audio_played_throughout_the_entire_process = std::move(arg);
    return Init_PatrolMission_full_audio_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::PatrolMission msg_;
};

class Init_PatrolMission_image_video_msg
{
public:
  Init_PatrolMission_image_video_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolMission_is_audio_played_throughout_the_entire_process image_video_msg(::ymrobot_msgs::msg::PatrolMission::_image_video_msg_type arg)
  {
    msg_.image_video_msg = std::move(arg);
    return Init_PatrolMission_is_audio_played_throughout_the_entire_process(msg_);
  }

private:
  ::ymrobot_msgs::msg::PatrolMission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::PatrolMission>()
{
  return ymrobot_msgs::msg::builder::Init_PatrolMission_image_video_msg();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__BUILDER_HPP_

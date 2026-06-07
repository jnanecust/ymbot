// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ymrobot_msgs:msg/ImageVideo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/image_video.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__BUILDER_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ymrobot_msgs/msg/detail/image_video__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ymrobot_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageVideo_detect_target_name
{
public:
  explicit Init_ImageVideo_detect_target_name(::ymrobot_msgs::msg::ImageVideo & msg)
  : msg_(msg)
  {}
  ::ymrobot_msgs::msg::ImageVideo detect_target_name(::ymrobot_msgs::msg::ImageVideo::_detect_target_name_type arg)
  {
    msg_.detect_target_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ymrobot_msgs::msg::ImageVideo msg_;
};

class Init_ImageVideo_video_recording_time
{
public:
  explicit Init_ImageVideo_video_recording_time(::ymrobot_msgs::msg::ImageVideo & msg)
  : msg_(msg)
  {}
  Init_ImageVideo_detect_target_name video_recording_time(::ymrobot_msgs::msg::ImageVideo::_video_recording_time_type arg)
  {
    msg_.video_recording_time = std::move(arg);
    return Init_ImageVideo_detect_target_name(msg_);
  }

private:
  ::ymrobot_msgs::msg::ImageVideo msg_;
};

class Init_ImageVideo_photos_interval
{
public:
  explicit Init_ImageVideo_photos_interval(::ymrobot_msgs::msg::ImageVideo & msg)
  : msg_(msg)
  {}
  Init_ImageVideo_video_recording_time photos_interval(::ymrobot_msgs::msg::ImageVideo::_photos_interval_type arg)
  {
    msg_.photos_interval = std::move(arg);
    return Init_ImageVideo_video_recording_time(msg_);
  }

private:
  ::ymrobot_msgs::msg::ImageVideo msg_;
};

class Init_ImageVideo_number_of_photos
{
public:
  explicit Init_ImageVideo_number_of_photos(::ymrobot_msgs::msg::ImageVideo & msg)
  : msg_(msg)
  {}
  Init_ImageVideo_photos_interval number_of_photos(::ymrobot_msgs::msg::ImageVideo::_number_of_photos_type arg)
  {
    msg_.number_of_photos = std::move(arg);
    return Init_ImageVideo_photos_interval(msg_);
  }

private:
  ::ymrobot_msgs::msg::ImageVideo msg_;
};

class Init_ImageVideo_camera_task_type
{
public:
  Init_ImageVideo_camera_task_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageVideo_number_of_photos camera_task_type(::ymrobot_msgs::msg::ImageVideo::_camera_task_type_type arg)
  {
    msg_.camera_task_type = std::move(arg);
    return Init_ImageVideo_number_of_photos(msg_);
  }

private:
  ::ymrobot_msgs::msg::ImageVideo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ymrobot_msgs::msg::ImageVideo>()
{
  return ymrobot_msgs::msg::builder::Init_ImageVideo_camera_task_type();
}

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__BUILDER_HPP_

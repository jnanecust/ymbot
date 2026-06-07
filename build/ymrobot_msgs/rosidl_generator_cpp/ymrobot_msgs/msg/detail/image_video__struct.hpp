// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/ImageVideo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/image_video.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__ImageVideo __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__ImageVideo __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageVideo_
{
  using Type = ImageVideo_<ContainerAllocator>;

  explicit ImageVideo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_task_type = 0;
      this->number_of_photos = 0;
      this->photos_interval = 0;
      this->video_recording_time = 0;
      this->detect_target_name = "";
    }
  }

  explicit ImageVideo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detect_target_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_task_type = 0;
      this->number_of_photos = 0;
      this->photos_interval = 0;
      this->video_recording_time = 0;
      this->detect_target_name = "";
    }
  }

  // field types and members
  using _camera_task_type_type =
    uint8_t;
  _camera_task_type_type camera_task_type;
  using _number_of_photos_type =
    uint8_t;
  _number_of_photos_type number_of_photos;
  using _photos_interval_type =
    uint8_t;
  _photos_interval_type photos_interval;
  using _video_recording_time_type =
    uint8_t;
  _video_recording_time_type video_recording_time;
  using _detect_target_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detect_target_name_type detect_target_name;

  // setters for named parameter idiom
  Type & set__camera_task_type(
    const uint8_t & _arg)
  {
    this->camera_task_type = _arg;
    return *this;
  }
  Type & set__number_of_photos(
    const uint8_t & _arg)
  {
    this->number_of_photos = _arg;
    return *this;
  }
  Type & set__photos_interval(
    const uint8_t & _arg)
  {
    this->photos_interval = _arg;
    return *this;
  }
  Type & set__video_recording_time(
    const uint8_t & _arg)
  {
    this->video_recording_time = _arg;
    return *this;
  }
  Type & set__detect_target_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detect_target_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::ImageVideo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::ImageVideo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::ImageVideo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::ImageVideo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__ImageVideo
    std::shared_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__ImageVideo
    std::shared_ptr<ymrobot_msgs::msg::ImageVideo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageVideo_ & other) const
  {
    if (this->camera_task_type != other.camera_task_type) {
      return false;
    }
    if (this->number_of_photos != other.number_of_photos) {
      return false;
    }
    if (this->photos_interval != other.photos_interval) {
      return false;
    }
    if (this->video_recording_time != other.video_recording_time) {
      return false;
    }
    if (this->detect_target_name != other.detect_target_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageVideo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageVideo_

// alias to use template instance with default allocator
using ImageVideo =
  ymrobot_msgs::msg::ImageVideo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__IMAGE_VIDEO__STRUCT_HPP_

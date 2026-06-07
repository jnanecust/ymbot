// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/patrol_mission.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_video_msg'
#include "ymrobot_msgs/msg/detail/image_video__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__PatrolMission __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__PatrolMission __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PatrolMission_
{
  using Type = PatrolMission_<ContainerAllocator>;

  explicit PatrolMission_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_video_msg(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_audio_played_throughout_the_entire_process = false;
      this->full_audio_name = "";
      this->is_the_entire_process_recorded = false;
      this->is_activate_the_nearby_point = false;
      this->nearby_point_radius = 0.0f;
    }
  }

  explicit PatrolMission_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_video_msg(_alloc, _init),
    full_audio_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_audio_played_throughout_the_entire_process = false;
      this->full_audio_name = "";
      this->is_the_entire_process_recorded = false;
      this->is_activate_the_nearby_point = false;
      this->nearby_point_radius = 0.0f;
    }
  }

  // field types and members
  using _image_video_msg_type =
    ymrobot_msgs::msg::ImageVideo_<ContainerAllocator>;
  _image_video_msg_type image_video_msg;
  using _is_audio_played_throughout_the_entire_process_type =
    bool;
  _is_audio_played_throughout_the_entire_process_type is_audio_played_throughout_the_entire_process;
  using _full_audio_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _full_audio_name_type full_audio_name;
  using _is_the_entire_process_recorded_type =
    bool;
  _is_the_entire_process_recorded_type is_the_entire_process_recorded;
  using _is_activate_the_nearby_point_type =
    bool;
  _is_activate_the_nearby_point_type is_activate_the_nearby_point;
  using _nearby_point_radius_type =
    float;
  _nearby_point_radius_type nearby_point_radius;
  using _nav_name_list_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _nav_name_list_type nav_name_list;

  // setters for named parameter idiom
  Type & set__image_video_msg(
    const ymrobot_msgs::msg::ImageVideo_<ContainerAllocator> & _arg)
  {
    this->image_video_msg = _arg;
    return *this;
  }
  Type & set__is_audio_played_throughout_the_entire_process(
    const bool & _arg)
  {
    this->is_audio_played_throughout_the_entire_process = _arg;
    return *this;
  }
  Type & set__full_audio_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->full_audio_name = _arg;
    return *this;
  }
  Type & set__is_the_entire_process_recorded(
    const bool & _arg)
  {
    this->is_the_entire_process_recorded = _arg;
    return *this;
  }
  Type & set__is_activate_the_nearby_point(
    const bool & _arg)
  {
    this->is_activate_the_nearby_point = _arg;
    return *this;
  }
  Type & set__nearby_point_radius(
    const float & _arg)
  {
    this->nearby_point_radius = _arg;
    return *this;
  }
  Type & set__nav_name_list(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->nav_name_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::PatrolMission_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::PatrolMission_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::PatrolMission_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::PatrolMission_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__PatrolMission
    std::shared_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__PatrolMission
    std::shared_ptr<ymrobot_msgs::msg::PatrolMission_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrolMission_ & other) const
  {
    if (this->image_video_msg != other.image_video_msg) {
      return false;
    }
    if (this->is_audio_played_throughout_the_entire_process != other.is_audio_played_throughout_the_entire_process) {
      return false;
    }
    if (this->full_audio_name != other.full_audio_name) {
      return false;
    }
    if (this->is_the_entire_process_recorded != other.is_the_entire_process_recorded) {
      return false;
    }
    if (this->is_activate_the_nearby_point != other.is_activate_the_nearby_point) {
      return false;
    }
    if (this->nearby_point_radius != other.nearby_point_radius) {
      return false;
    }
    if (this->nav_name_list != other.nav_name_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrolMission_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrolMission_

// alias to use template instance with default allocator
using PatrolMission =
  ymrobot_msgs::msg::PatrolMission_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__PATROL_MISSION__STRUCT_HPP_

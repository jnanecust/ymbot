// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/voice_message.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__VoiceMessage __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__VoiceMessage __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VoiceMessage_
{
  using Type = VoiceMessage_<ContainerAllocator>;

  explicit VoiceMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->audio_task_type = 0;
      this->fixed_audio_name = "";
      this->timbre = "";
      this->synthetic_audio_txt = "";
      this->synthetic_audio_title = "";
      this->delete_fixed_audio = "";
      this->play_online_audio = "";
    }
  }

  explicit VoiceMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fixed_audio_name(_alloc),
    timbre(_alloc),
    synthetic_audio_txt(_alloc),
    synthetic_audio_title(_alloc),
    delete_fixed_audio(_alloc),
    play_online_audio(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->audio_task_type = 0;
      this->fixed_audio_name = "";
      this->timbre = "";
      this->synthetic_audio_txt = "";
      this->synthetic_audio_title = "";
      this->delete_fixed_audio = "";
      this->play_online_audio = "";
    }
  }

  // field types and members
  using _audio_task_type_type =
    uint8_t;
  _audio_task_type_type audio_task_type;
  using _fixed_audio_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fixed_audio_name_type fixed_audio_name;
  using _timbre_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _timbre_type timbre;
  using _synthetic_audio_txt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _synthetic_audio_txt_type synthetic_audio_txt;
  using _synthetic_audio_title_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _synthetic_audio_title_type synthetic_audio_title;
  using _delete_fixed_audio_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _delete_fixed_audio_type delete_fixed_audio;
  using _play_online_audio_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _play_online_audio_type play_online_audio;

  // setters for named parameter idiom
  Type & set__audio_task_type(
    const uint8_t & _arg)
  {
    this->audio_task_type = _arg;
    return *this;
  }
  Type & set__fixed_audio_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fixed_audio_name = _arg;
    return *this;
  }
  Type & set__timbre(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->timbre = _arg;
    return *this;
  }
  Type & set__synthetic_audio_txt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->synthetic_audio_txt = _arg;
    return *this;
  }
  Type & set__synthetic_audio_title(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->synthetic_audio_title = _arg;
    return *this;
  }
  Type & set__delete_fixed_audio(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->delete_fixed_audio = _arg;
    return *this;
  }
  Type & set__play_online_audio(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->play_online_audio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__VoiceMessage
    std::shared_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__VoiceMessage
    std::shared_ptr<ymrobot_msgs::msg::VoiceMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoiceMessage_ & other) const
  {
    if (this->audio_task_type != other.audio_task_type) {
      return false;
    }
    if (this->fixed_audio_name != other.fixed_audio_name) {
      return false;
    }
    if (this->timbre != other.timbre) {
      return false;
    }
    if (this->synthetic_audio_txt != other.synthetic_audio_txt) {
      return false;
    }
    if (this->synthetic_audio_title != other.synthetic_audio_title) {
      return false;
    }
    if (this->delete_fixed_audio != other.delete_fixed_audio) {
      return false;
    }
    if (this->play_online_audio != other.play_online_audio) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoiceMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoiceMessage_

// alias to use template instance with default allocator
using VoiceMessage =
  ymrobot_msgs::msg::VoiceMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__VOICE_MESSAGE__STRUCT_HPP_

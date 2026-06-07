// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/EmojiFixed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/emoji_fixed.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__EmojiFixed __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__EmojiFixed __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmojiFixed_
{
  using Type = EmojiFixed_<ContainerAllocator>;

  explicit EmojiFixed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
    }
  }

  explicit EmojiFixed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
    }
  }

  // field types and members
  using _code_type =
    uint8_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__code(
    const uint8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t PAUSE =
    1u;
  static constexpr uint8_t RESUME =
    2u;
  static constexpr uint8_t CANCLE =
    3u;
  static constexpr uint8_t WAIT =
    4u;
  static constexpr uint8_t FINISH_WAIT =
    5u;
  static constexpr uint8_t CHARGE =
    6u;
  static constexpr uint8_t FINISH_CHARGE =
    7u;
  static constexpr uint8_t BUILD_MAP =
    8u;
  static constexpr uint8_t UPLOAD_MAP =
    9u;
  static constexpr uint8_t DOWNLOAD_MAP =
    10u;
  static constexpr uint8_t SAVE_MAP =
    11u;
  static constexpr uint8_t RELOCALIZE =
    12u;
  static constexpr uint8_t NAVIGATION =
    13u;
  static constexpr uint8_t MULIT_POINTS_NAVIGATION =
    14u;
  static constexpr uint8_t MULIT_FLOOR_NAVIGATION =
    15u;
  static constexpr uint8_t CLOUD_MANUAL_CONTROL_MOVE =
    16u;
  static constexpr uint8_t DOT =
    17u;
  static constexpr uint8_t MANUAL_CONTROL_MOVE =
    18u;
  static constexpr uint8_t EXE_BEHAVIOR_TREE =
    19u;
  static constexpr uint8_t PLACE_CARTESIAN =
    20u;
  static constexpr uint8_t PLACE_JOINT =
    21u;
  static constexpr uint8_t PLACE_FIXED =
    22u;
  static constexpr uint8_t PLACE_CONTROL_MODE =
    23u;
  static constexpr uint8_t GRASP =
    24u;
  static constexpr uint8_t CAMERA =
    25u;
  static constexpr uint8_t PLAY_FIX_AUDIO =
    26u;
  static constexpr uint8_t SPEECH_2_TXT =
    27u;
  static constexpr uint8_t EXPRESSION_FIXED =
    28u;
  static constexpr uint8_t WAKE_UP =
    29u;
  static constexpr uint8_t POWER_OFF =
    30u;

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__EmojiFixed
    std::shared_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__EmojiFixed
    std::shared_ptr<ymrobot_msgs::msg::EmojiFixed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmojiFixed_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmojiFixed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmojiFixed_

// alias to use template instance with default allocator
using EmojiFixed =
  ymrobot_msgs::msg::EmojiFixed_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::RESUME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::CANCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::FINISH_WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::CHARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::FINISH_CHARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::BUILD_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::UPLOAD_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::DOWNLOAD_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::SAVE_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::RELOCALIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::MULIT_POINTS_NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::MULIT_FLOOR_NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::CLOUD_MANUAL_CONTROL_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::DOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::MANUAL_CONTROL_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::EXE_BEHAVIOR_TREE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::PLACE_CARTESIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::PLACE_JOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::PLACE_FIXED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::PLACE_CONTROL_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::GRASP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::CAMERA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::PLAY_FIX_AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::SPEECH_2_TXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::EXPRESSION_FIXED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::WAKE_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmojiFixed_<ContainerAllocator>::POWER_OFF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__EMOJI_FIXED__STRUCT_HPP_

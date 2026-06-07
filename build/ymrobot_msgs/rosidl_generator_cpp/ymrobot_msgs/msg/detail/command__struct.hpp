// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/Command.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/command.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__Command __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__Command __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Command_
{
  using Type = Command_<ContainerAllocator>;

  explicit Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
      this->params_code = "";
    }
  }

  explicit Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params_code(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0;
      this->params_code = "";
    }
  }

  // field types and members
  using _code_type =
    uint8_t;
  _code_type code;
  using _params_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _params_code_type params_code;
  using _params_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _params_type params;

  // setters for named parameter idiom
  Type & set__code(
    const uint8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__params_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->params_code = _arg;
    return *this;
  }
  Type & set__params(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->params = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t REGISTER =
    1u;
  static constexpr uint8_t LOG_OFF =
    2u;
  static constexpr uint8_t PAUSE =
    3u;
  static constexpr uint8_t RESUME =
    4u;
  static constexpr uint8_t CANCLE =
    5u;
  static constexpr uint8_t WAIT =
    6u;
  static constexpr uint8_t FINISH_WAIT =
    7u;
  static constexpr uint8_t CHARGE =
    8u;
  static constexpr uint8_t FINISH_CHARGE =
    9u;
  static constexpr uint8_t BUILD_MAP =
    10u;
  static constexpr uint8_t UPLOAD_MAP =
    11u;
  static constexpr uint8_t DOWNLOAD_MAP =
    12u;
  static constexpr uint8_t SAVE_MAP =
    13u;
  static constexpr uint8_t RELOCALIZE =
    14u;
  static constexpr uint8_t NAVIGATION =
    15u;
  static constexpr uint8_t MULIT_POINTS_NAVIGATION =
    16u;
  static constexpr uint8_t MULIT_FLOOR_NAVIGATION =
    17u;
  static constexpr uint8_t DOT =
    18u;
  static constexpr uint8_t CLOUD_NAVIGATION =
    19u;
  static constexpr uint8_t CLOUD_MULIT_POINTS_NAVIGATION =
    20u;
  static constexpr uint8_t CLOUD_NAVIGATION_NAME =
    21u;
  static constexpr uint8_t CLOUD_MULIT_POINTS_NAVIGATION_NAME =
    22u;
  static constexpr uint8_t MANUAL_CONTROL_MOVE =
    23u;
  static constexpr uint8_t EXE_BEHAVIOR_TREE =
    24u;
  static constexpr uint8_t PLACE_CARTESIAN =
    25u;
  static constexpr uint8_t PLACE_JOINT =
    26u;
  static constexpr uint8_t PLACE_FIXED =
    27u;
  static constexpr uint8_t PLACE_CONTROL_MODE =
    28u;
  static constexpr uint8_t GRASP =
    29u;
  static constexpr uint8_t CAMERA =
    30u;
  static constexpr uint8_t PHOTOGRAPH =
    31u;
  static constexpr uint8_t RECOGNIZE =
    32u;
  static constexpr uint8_t PLAY_FIX_AUDIO =
    33u;
  static constexpr uint8_t TXT_2_AUDIO =
    34u;
  static constexpr uint8_t SPEECH_2_TXT =
    35u;
  static constexpr uint8_t EXPRESSION_FIXED =
    36u;
  static constexpr uint8_t WAKE_UP =
    37u;
  static constexpr uint8_t POWER_OFF =
    38u;
  static constexpr uint8_t SETTING_PARAMETERS =
    39u;
  static constexpr uint8_t SYNTHETIC_AUDIO =
    40u;
  static constexpr uint8_t VOICE_INTERACTION_FUNCTION_SWITCH =
    41u;
  static constexpr uint8_t UPLOAD_VOICE_CONVERSATION_LOGS =
    42u;
  static constexpr uint8_t UPLOAD_OPERATION_LOGS =
    43u;
  static constexpr uint8_t PLAY_ONLINE_AUDIO =
    44u;
  static constexpr uint8_t DOWNLOAD_AUDIO =
    45u;

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__Command
    std::shared_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__Command
    std::shared_ptr<ymrobot_msgs::msg::Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->params_code != other.params_code) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_

// alias to use template instance with default allocator
using Command =
  ymrobot_msgs::msg::Command_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::REGISTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::LOG_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::RESUME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::CANCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::FINISH_WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::CHARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::FINISH_CHARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::BUILD_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::UPLOAD_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::DOWNLOAD_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::SAVE_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::RELOCALIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::MULIT_POINTS_NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::MULIT_FLOOR_NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::DOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::CLOUD_NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::CLOUD_MULIT_POINTS_NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::CLOUD_NAVIGATION_NAME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::CLOUD_MULIT_POINTS_NAVIGATION_NAME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::MANUAL_CONTROL_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::EXE_BEHAVIOR_TREE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PLACE_CARTESIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PLACE_JOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PLACE_FIXED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PLACE_CONTROL_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::GRASP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::CAMERA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PHOTOGRAPH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::RECOGNIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PLAY_FIX_AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::TXT_2_AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::SPEECH_2_TXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::EXPRESSION_FIXED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::WAKE_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::POWER_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::SETTING_PARAMETERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::SYNTHETIC_AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::VOICE_INTERACTION_FUNCTION_SWITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::UPLOAD_VOICE_CONVERSATION_LOGS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::UPLOAD_OPERATION_LOGS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::PLAY_ONLINE_AUDIO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Command_<ContainerAllocator>::DOWNLOAD_AUDIO;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__COMMAND__STRUCT_HPP_

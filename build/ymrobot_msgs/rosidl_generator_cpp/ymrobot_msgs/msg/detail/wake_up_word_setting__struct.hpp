// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/WakeUpWordSetting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/wake_up_word_setting.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__WakeUpWordSetting __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__WakeUpWordSetting __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WakeUpWordSetting_
{
  using Type = WakeUpWordSetting_<ContainerAllocator>;

  explicit WakeUpWordSetting_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit WakeUpWordSetting_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _wake_up_word_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _wake_up_word_type wake_up_word;

  // setters for named parameter idiom
  Type & set__wake_up_word(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->wake_up_word = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__WakeUpWordSetting
    std::shared_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__WakeUpWordSetting
    std::shared_ptr<ymrobot_msgs::msg::WakeUpWordSetting_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WakeUpWordSetting_ & other) const
  {
    if (this->wake_up_word != other.wake_up_word) {
      return false;
    }
    return true;
  }
  bool operator!=(const WakeUpWordSetting_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WakeUpWordSetting_

// alias to use template instance with default allocator
using WakeUpWordSetting =
  ymrobot_msgs::msg::WakeUpWordSetting_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__WAKE_UP_WORD_SETTING__STRUCT_HPP_

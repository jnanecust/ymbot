// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/SlamCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/slam_command.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__SlamCommand __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__SlamCommand __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SlamCommand_
{
  using Type = SlamCommand_<ContainerAllocator>;

  explicit SlamCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mapping = "";
      this->relocalize = "";
      this->start = "";
      this->stop = "";
    }
  }

  explicit SlamCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mapping(_alloc),
    relocalize(_alloc),
    start(_alloc),
    stop(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mapping = "";
      this->relocalize = "";
      this->start = "";
      this->stop = "";
    }
  }

  // field types and members
  using _mapping_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mapping_type mapping;
  using _relocalize_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _relocalize_type relocalize;
  using _start_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _start_type start;
  using _stop_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stop_type stop;

  // setters for named parameter idiom
  Type & set__mapping(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mapping = _arg;
    return *this;
  }
  Type & set__relocalize(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->relocalize = _arg;
    return *this;
  }
  Type & set__start(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__stop(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::SlamCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::SlamCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::SlamCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::SlamCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__SlamCommand
    std::shared_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__SlamCommand
    std::shared_ptr<ymrobot_msgs::msg::SlamCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SlamCommand_ & other) const
  {
    if (this->mapping != other.mapping) {
      return false;
    }
    if (this->relocalize != other.relocalize) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const SlamCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SlamCommand_

// alias to use template instance with default allocator
using SlamCommand =
  ymrobot_msgs::msg::SlamCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__SLAM_COMMAND__STRUCT_HPP_

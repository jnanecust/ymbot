// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/task.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__TASK__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nav_points'
#include "ymrobot_msgs/msg/detail/nav_point__struct.hpp"
// Member 'commands'
#include "ymrobot_msgs/msg/detail/command__struct.hpp"
// Member 'binary_file'
#include "ymrobot_msgs/msg/detail/binary_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__Task __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__Task __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Task_
{
  using Type = Task_<ContainerAllocator>;

  explicit Task_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : binary_file(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->task_type = 0;
      this->behavior_tree = "";
      this->reload = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->platform_id = "";
      this->amr_id = "";
      this->task_id = "";
      this->task_type = 0;
      this->control_mode = 0;
      this->behavior_tree = "";
      this->reload = false;
      this->index = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = "";
      this->amr_id = "";
      this->task_id = "";
      this->control_mode = 0;
      this->index = "";
    }
  }

  explicit Task_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : platform_id(_alloc),
    amr_id(_alloc),
    task_id(_alloc),
    behavior_tree(_alloc),
    index(_alloc),
    binary_file(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->task_type = 0;
      this->behavior_tree = "";
      this->reload = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->platform_id = "";
      this->amr_id = "";
      this->task_id = "";
      this->task_type = 0;
      this->control_mode = 0;
      this->behavior_tree = "";
      this->reload = false;
      this->index = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->platform_id = "";
      this->amr_id = "";
      this->task_id = "";
      this->control_mode = 0;
      this->index = "";
    }
  }

  // field types and members
  using _platform_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _platform_id_type platform_id;
  using _amr_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _amr_id_type amr_id;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _task_type_type =
    uint8_t;
  _task_type_type task_type;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _nav_points_type =
    std::vector<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>>>;
  _nav_points_type nav_points;
  using _commands_type =
    std::vector<ymrobot_msgs::msg::Command_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::msg::Command_<ContainerAllocator>>>;
  _commands_type commands;
  using _behavior_tree_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_tree_type behavior_tree;
  using _reload_type =
    bool;
  _reload_type reload;
  using _index_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _index_type index;
  using _binary_file_type =
    ymrobot_msgs::msg::BinaryData_<ContainerAllocator>;
  _binary_file_type binary_file;

  // setters for named parameter idiom
  Type & set__platform_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->platform_id = _arg;
    return *this;
  }
  Type & set__amr_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->amr_id = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__task_type(
    const uint8_t & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__nav_points(
    const std::vector<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::msg::NavPoint_<ContainerAllocator>>> & _arg)
  {
    this->nav_points = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<ymrobot_msgs::msg::Command_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::msg::Command_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }
  Type & set__behavior_tree(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_tree = _arg;
    return *this;
  }
  Type & set__reload(
    const bool & _arg)
  {
    this->reload = _arg;
    return *this;
  }
  Type & set__index(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__binary_file(
    const ymrobot_msgs::msg::BinaryData_<ContainerAllocator> & _arg)
  {
    this->binary_file = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REG =
    0u;
  static constexpr uint8_t TASK_GUIDANCE =
    1u;
  static constexpr uint8_t BT_TASK =
    2u;
  static constexpr uint8_t CHSSIS =
    3u;
  static constexpr uint8_t CLOUD_CHASSIS =
    4u;
  static constexpr uint8_t UP_LIMB =
    5u;
  static constexpr uint8_t VIDEO_IMAGE =
    6u;
  static constexpr uint8_t VOICE =
    7u;
  static constexpr uint8_t EMOJI_TASK =
    8u;
  static constexpr uint8_t SYSTEM_MANAGEMENT =
    9u;
  static constexpr uint8_t MOVE_CONTROL =
    10u;

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::Task_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::Task_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::Task_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::Task_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__Task
    std::shared_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__Task
    std::shared_ptr<ymrobot_msgs::msg::Task_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_ & other) const
  {
    if (this->platform_id != other.platform_id) {
      return false;
    }
    if (this->amr_id != other.amr_id) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->nav_points != other.nav_points) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    if (this->behavior_tree != other.behavior_tree) {
      return false;
    }
    if (this->reload != other.reload) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->binary_file != other.binary_file) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_

// alias to use template instance with default allocator
using Task =
  ymrobot_msgs::msg::Task_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::REG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::TASK_GUIDANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::BT_TASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::CHSSIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::CLOUD_CHASSIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::UP_LIMB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::VIDEO_IMAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::VOICE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::EMOJI_TASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::SYSTEM_MANAGEMENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Task_<ContainerAllocator>::MOVE_CONTROL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__TASK__STRUCT_HPP_

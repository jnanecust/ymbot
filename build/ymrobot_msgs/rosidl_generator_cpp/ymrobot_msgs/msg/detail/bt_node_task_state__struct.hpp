// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:msg/BTNodeTaskState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/msg/bt_node_task_state.hpp"


#ifndef YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__STRUCT_HPP_
#define YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__msg__BTNodeTaskState __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__msg__BTNodeTaskState __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BTNodeTaskState_
{
  using Type = BTNodeTaskState_<ContainerAllocator>;

  explicit BTNodeTaskState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->task_type = "";
      this->node_name = "";
      this->node_task_state = "";
      this->node_task_error = "";
      this->node_task_error_message = "";
      this->node_action_content = "";
    }
  }

  explicit BTNodeTaskState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    task_type(_alloc),
    node_name(_alloc),
    node_task_state(_alloc),
    node_task_error(_alloc),
    node_task_error_message(_alloc),
    node_action_content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->task_type = "";
      this->node_name = "";
      this->node_task_state = "";
      this->node_task_error = "";
      this->node_task_error_message = "";
      this->node_action_content = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _task_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_type_type task_type;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _node_task_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_task_state_type node_task_state;
  using _node_task_error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_task_error_type node_task_error;
  using _node_task_error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_task_error_message_type node_task_error_message;
  using _node_action_content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_action_content_type node_action_content;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__task_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__node_task_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_task_state = _arg;
    return *this;
  }
  Type & set__node_task_error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_task_error = _arg;
    return *this;
  }
  Type & set__node_task_error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_task_error_message = _arg;
    return *this;
  }
  Type & set__node_action_content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_action_content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__msg__BTNodeTaskState
    std::shared_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__msg__BTNodeTaskState
    std::shared_ptr<ymrobot_msgs::msg::BTNodeTaskState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BTNodeTaskState_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->node_task_state != other.node_task_state) {
      return false;
    }
    if (this->node_task_error != other.node_task_error) {
      return false;
    }
    if (this->node_task_error_message != other.node_task_error_message) {
      return false;
    }
    if (this->node_action_content != other.node_action_content) {
      return false;
    }
    return true;
  }
  bool operator!=(const BTNodeTaskState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BTNodeTaskState_

// alias to use template instance with default allocator
using BTNodeTaskState =
  ymrobot_msgs::msg::BTNodeTaskState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__MSG__DETAIL__BT_NODE_TASK_STATE__STRUCT_HPP_

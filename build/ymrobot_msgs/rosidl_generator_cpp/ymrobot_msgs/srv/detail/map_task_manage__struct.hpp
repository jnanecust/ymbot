// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ymrobot_msgs:srv/MapTaskManage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ymrobot_msgs/srv/map_task_manage.hpp"


#ifndef YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__STRUCT_HPP_
#define YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'map_task'
#include "ymrobot_msgs/msg/detail/map_task_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Request __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Request __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapTaskManage_Request_
{
  using Type = MapTaskManage_Request_<ContainerAllocator>;

  explicit MapTaskManage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_task(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_id = "";
      this->map_name = "";
      this->pcd_name = "";
      this->pgm_name = "";
    }
  }

  explicit MapTaskManage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_task(_alloc, _init),
    map_id(_alloc),
    map_name(_alloc),
    pcd_name(_alloc),
    pgm_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_id = "";
      this->map_name = "";
      this->pcd_name = "";
      this->pgm_name = "";
    }
  }

  // field types and members
  using _map_task_type =
    ymrobot_msgs::msg::MapTaskCommand_<ContainerAllocator>;
  _map_task_type map_task;
  using _map_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_id_type map_id;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _pcd_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pcd_name_type pcd_name;
  using _pgm_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pgm_name_type pgm_name;

  // setters for named parameter idiom
  Type & set__map_task(
    const ymrobot_msgs::msg::MapTaskCommand_<ContainerAllocator> & _arg)
  {
    this->map_task = _arg;
    return *this;
  }
  Type & set__map_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__pcd_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pcd_name = _arg;
    return *this;
  }
  Type & set__pgm_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pgm_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Request
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Request
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapTaskManage_Request_ & other) const
  {
    if (this->map_task != other.map_task) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->pcd_name != other.pcd_name) {
      return false;
    }
    if (this->pgm_name != other.pgm_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapTaskManage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapTaskManage_Request_

// alias to use template instance with default allocator
using MapTaskManage_Request =
  ymrobot_msgs::srv::MapTaskManage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Response __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Response __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapTaskManage_Response_
{
  using Type = MapTaskManage_Response_<ContainerAllocator>;

  explicit MapTaskManage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MapTaskManage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Response
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Response
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapTaskManage_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapTaskManage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapTaskManage_Response_

// alias to use template instance with default allocator
using MapTaskManage_Response =
  ymrobot_msgs::srv::MapTaskManage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Event __attribute__((deprecated))
#else
# define DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Event __declspec(deprecated)
#endif

namespace ymrobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapTaskManage_Event_
{
  using Type = MapTaskManage_Event_<ContainerAllocator>;

  explicit MapTaskManage_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MapTaskManage_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::MapTaskManage_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ymrobot_msgs::srv::MapTaskManage_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Event
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ymrobot_msgs__srv__MapTaskManage_Event
    std::shared_ptr<ymrobot_msgs::srv::MapTaskManage_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapTaskManage_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapTaskManage_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapTaskManage_Event_

// alias to use template instance with default allocator
using MapTaskManage_Event =
  ymrobot_msgs::srv::MapTaskManage_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{

namespace srv
{

struct MapTaskManage
{
  using Request = ymrobot_msgs::srv::MapTaskManage_Request;
  using Response = ymrobot_msgs::srv::MapTaskManage_Response;
  using Event = ymrobot_msgs::srv::MapTaskManage_Event;
};

}  // namespace srv

}  // namespace ymrobot_msgs

#endif  // YMROBOT_MSGS__SRV__DETAIL__MAP_TASK_MANAGE__STRUCT_HPP_

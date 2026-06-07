// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/Task.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/task__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ymrobot_msgs/msg/detail/task__functions.h"
#include "ymrobot_msgs/msg/detail/task__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ymrobot_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ymrobot_msgs::msg::NavPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ymrobot_msgs::msg::NavPoint &);
size_t get_serialized_size(
  const ymrobot_msgs::msg::NavPoint &,
  size_t current_alignment);
size_t
max_serialized_size_NavPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ymrobot_msgs::msg::NavPoint &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ymrobot_msgs::msg::NavPoint &,
  size_t current_alignment);
size_t
max_serialized_size_key_NavPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ymrobot_msgs::msg::Command &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ymrobot_msgs::msg::Command &);
size_t get_serialized_size(
  const ymrobot_msgs::msg::Command &,
  size_t current_alignment);
size_t
max_serialized_size_Command(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ymrobot_msgs::msg::Command &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ymrobot_msgs::msg::Command &,
  size_t current_alignment);
size_t
max_serialized_size_key_Command(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ymrobot_msgs

namespace ymrobot_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ymrobot_msgs::msg::BinaryData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ymrobot_msgs::msg::BinaryData &);
size_t get_serialized_size(
  const ymrobot_msgs::msg::BinaryData &,
  size_t current_alignment);
size_t
max_serialized_size_BinaryData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ymrobot_msgs::msg::BinaryData &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ymrobot_msgs::msg::BinaryData &,
  size_t current_alignment);
size_t
max_serialized_size_key_BinaryData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ymrobot_msgs


namespace ymrobot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_serialize(
  const ymrobot_msgs::msg::Task & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: platform_id
  cdr << ros_message.platform_id;

  // Member: amr_id
  cdr << ros_message.amr_id;

  // Member: task_id
  cdr << ros_message.task_id;

  // Member: task_type
  cdr << ros_message.task_type;

  // Member: control_mode
  cdr << ros_message.control_mode;

  // Member: nav_points
  {
    size_t size = ros_message.nav_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.nav_points[i],
        cdr);
    }
  }

  // Member: commands
  {
    size_t size = ros_message.commands.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.commands[i],
        cdr);
    }
  }

  // Member: behavior_tree
  cdr << ros_message.behavior_tree;

  // Member: reload
  cdr << (ros_message.reload ? true : false);

  // Member: index
  cdr << ros_message.index;

  // Member: binary_file
  ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.binary_file,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs::msg::Task & ros_message)
{
  // Member: platform_id
  cdr >> ros_message.platform_id;

  // Member: amr_id
  cdr >> ros_message.amr_id;

  // Member: task_id
  cdr >> ros_message.task_id;

  // Member: task_type
  cdr >> ros_message.task_type;

  // Member: control_mode
  cdr >> ros_message.control_mode;

  // Member: nav_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.nav_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.nav_points[i]);
    }
  }

  // Member: commands
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.commands.resize(size);
    for (size_t i = 0; i < size; i++) {
      ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.commands[i]);
    }
  }

  // Member: behavior_tree
  cdr >> ros_message.behavior_tree;

  // Member: reload
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reload = tmp ? true : false;
  }

  // Member: index
  cdr >> ros_message.index;

  // Member: binary_file
  ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.binary_file);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size(
  const ymrobot_msgs::msg::Task & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: platform_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.platform_id.size() + 1);

  // Member: amr_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.amr_id.size() + 1);

  // Member: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.task_id.size() + 1);

  // Member: task_type
  {
    size_t item_size = sizeof(ros_message.task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: control_mode
  {
    size_t item_size = sizeof(ros_message.control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_points
  {
    size_t array_size = ros_message.nav_points.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.nav_points[index], current_alignment);
    }
  }

  // Member: commands
  {
    size_t array_size = ros_message.commands.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.commands[index], current_alignment);
    }
  }

  // Member: behavior_tree
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.behavior_tree.size() + 1);

  // Member: reload
  {
    size_t item_size = sizeof(ros_message.reload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: index
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.index.size() + 1);

  // Member: binary_file
  current_alignment +=
    ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.binary_file, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_Task(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: platform_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: amr_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: task_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: control_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: nav_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NavPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Command(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: behavior_tree
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: reload
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: index
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: binary_file
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BinaryData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::Task;
    is_plain =
      (
      offsetof(DataType, binary_file) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_serialize_key(
  const ymrobot_msgs::msg::Task & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: platform_id
  cdr << ros_message.platform_id;

  // Member: amr_id
  cdr << ros_message.amr_id;

  // Member: task_id
  cdr << ros_message.task_id;

  // Member: task_type
  cdr << ros_message.task_type;

  // Member: control_mode
  cdr << ros_message.control_mode;

  // Member: nav_points
  {
    size_t size = ros_message.nav_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.nav_points[i],
        cdr);
    }
  }

  // Member: commands
  {
    size_t size = ros_message.commands.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.commands[i],
        cdr);
    }
  }

  // Member: behavior_tree
  cdr << ros_message.behavior_tree;

  // Member: reload
  cdr << (ros_message.reload ? true : false);

  // Member: index
  cdr << ros_message.index;

  // Member: binary_file
  ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.binary_file,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size_key(
  const ymrobot_msgs::msg::Task & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: platform_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.platform_id.size() + 1);

  // Member: amr_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.amr_id.size() + 1);

  // Member: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.task_id.size() + 1);

  // Member: task_type
  {
    size_t item_size = sizeof(ros_message.task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: control_mode
  {
    size_t item_size = sizeof(ros_message.control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_points
  {
    size_t array_size = ros_message.nav_points.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.nav_points[index], current_alignment);
    }
  }

  // Member: commands
  {
    size_t array_size = ros_message.commands.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.commands[index], current_alignment);
    }
  }

  // Member: behavior_tree
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.behavior_tree.size() + 1);

  // Member: reload
  {
    size_t item_size = sizeof(ros_message.reload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: index
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.index.size() + 1);

  // Member: binary_file
  current_alignment +=
    ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.binary_file, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_key_Task(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: platform_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: amr_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: task_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: control_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nav_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_NavPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: commands
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Command(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: behavior_tree
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: reload
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: index
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: binary_file
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_BinaryData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::Task;
    is_plain =
      (
      offsetof(DataType, binary_file) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Task__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::Task *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Task__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ymrobot_msgs::msg::Task *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Task__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::Task *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Task__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Task(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Task__callbacks = {
  "ymrobot_msgs::msg",
  "Task",
  _Task__cdr_serialize,
  _Task__cdr_deserialize,
  _Task__get_serialized_size,
  _Task__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Task__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Task__callbacks,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__Task__get_type_hash,
  &ymrobot_msgs__msg__Task__get_type_description,
  &ymrobot_msgs__msg__Task__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::Task>()
{
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_Task__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, msg, Task)() {
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_Task__handle;
}

#ifdef __cplusplus
}
#endif

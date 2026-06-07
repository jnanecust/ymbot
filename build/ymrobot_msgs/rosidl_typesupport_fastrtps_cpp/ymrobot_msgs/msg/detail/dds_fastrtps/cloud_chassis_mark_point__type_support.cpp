// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__functions.h"
#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__struct.hpp"

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


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_serialize(
  const ymrobot_msgs::msg::CloudChassisMarkPoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nav_mode
  cdr << ros_message.nav_mode;

  // Member: nav_target_name
  cdr << ros_message.nav_target_name;

  // Member: nav_target_x
  cdr << ros_message.nav_target_x;

  // Member: nav_target_y
  cdr << ros_message.nav_target_y;

  // Member: nav_target_yaw
  cdr << ros_message.nav_target_yaw;

  // Member: is_activate_the_nearby_point
  cdr << (ros_message.is_activate_the_nearby_point ? true : false);

  // Member: nearby_point_radius
  cdr << ros_message.nearby_point_radius;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs::msg::CloudChassisMarkPoint & ros_message)
{
  // Member: nav_mode
  cdr >> ros_message.nav_mode;

  // Member: nav_target_name
  cdr >> ros_message.nav_target_name;

  // Member: nav_target_x
  cdr >> ros_message.nav_target_x;

  // Member: nav_target_y
  cdr >> ros_message.nav_target_y;

  // Member: nav_target_yaw
  cdr >> ros_message.nav_target_yaw;

  // Member: is_activate_the_nearby_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_activate_the_nearby_point = tmp ? true : false;
  }

  // Member: nearby_point_radius
  cdr >> ros_message.nearby_point_radius;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size(
  const ymrobot_msgs::msg::CloudChassisMarkPoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nav_mode
  {
    size_t item_size = sizeof(ros_message.nav_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_target_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.nav_target_name.size() + 1);

  // Member: nav_target_x
  {
    size_t item_size = sizeof(ros_message.nav_target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_target_y
  {
    size_t item_size = sizeof(ros_message.nav_target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_target_yaw
  {
    size_t item_size = sizeof(ros_message.nav_target_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_activate_the_nearby_point
  {
    size_t item_size = sizeof(ros_message.is_activate_the_nearby_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nearby_point_radius
  {
    size_t item_size = sizeof(ros_message.nearby_point_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_CloudChassisMarkPoint(
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

  // Member: nav_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: nav_target_name
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
  // Member: nav_target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: nav_target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: nav_target_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: is_activate_the_nearby_point
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: nearby_point_radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::CloudChassisMarkPoint;
    is_plain =
      (
      offsetof(DataType, nearby_point_radius) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_serialize_key(
  const ymrobot_msgs::msg::CloudChassisMarkPoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nav_mode
  cdr << ros_message.nav_mode;

  // Member: nav_target_name
  cdr << ros_message.nav_target_name;

  // Member: nav_target_x
  cdr << ros_message.nav_target_x;

  // Member: nav_target_y
  cdr << ros_message.nav_target_y;

  // Member: nav_target_yaw
  cdr << ros_message.nav_target_yaw;

  // Member: is_activate_the_nearby_point
  cdr << (ros_message.is_activate_the_nearby_point ? true : false);

  // Member: nearby_point_radius
  cdr << ros_message.nearby_point_radius;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size_key(
  const ymrobot_msgs::msg::CloudChassisMarkPoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nav_mode
  {
    size_t item_size = sizeof(ros_message.nav_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_target_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.nav_target_name.size() + 1);

  // Member: nav_target_x
  {
    size_t item_size = sizeof(ros_message.nav_target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_target_y
  {
    size_t item_size = sizeof(ros_message.nav_target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nav_target_yaw
  {
    size_t item_size = sizeof(ros_message.nav_target_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_activate_the_nearby_point
  {
    size_t item_size = sizeof(ros_message.is_activate_the_nearby_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: nearby_point_radius
  {
    size_t item_size = sizeof(ros_message.nearby_point_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_key_CloudChassisMarkPoint(
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

  // Member: nav_mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nav_target_name
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

  // Member: nav_target_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nav_target_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nav_target_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_activate_the_nearby_point
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nearby_point_radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::CloudChassisMarkPoint;
    is_plain =
      (
      offsetof(DataType, nearby_point_radius) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _CloudChassisMarkPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::CloudChassisMarkPoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CloudChassisMarkPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ymrobot_msgs::msg::CloudChassisMarkPoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CloudChassisMarkPoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::CloudChassisMarkPoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CloudChassisMarkPoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CloudChassisMarkPoint(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CloudChassisMarkPoint__callbacks = {
  "ymrobot_msgs::msg",
  "CloudChassisMarkPoint",
  _CloudChassisMarkPoint__cdr_serialize,
  _CloudChassisMarkPoint__cdr_deserialize,
  _CloudChassisMarkPoint__get_serialized_size,
  _CloudChassisMarkPoint__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CloudChassisMarkPoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CloudChassisMarkPoint__callbacks,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__CloudChassisMarkPoint__get_type_hash,
  &ymrobot_msgs__msg__CloudChassisMarkPoint__get_type_description,
  &ymrobot_msgs__msg__CloudChassisMarkPoint__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::CloudChassisMarkPoint>()
{
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_CloudChassisMarkPoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, msg, CloudChassisMarkPoint)() {
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_CloudChassisMarkPoint__handle;
}

#ifdef __cplusplus
}
#endif

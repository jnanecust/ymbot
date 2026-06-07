// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/patrol_mission__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ymrobot_msgs/msg/detail/patrol_mission__functions.h"
#include "ymrobot_msgs/msg/detail/patrol_mission__struct.hpp"

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
  const ymrobot_msgs::msg::ImageVideo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ymrobot_msgs::msg::ImageVideo &);
size_t get_serialized_size(
  const ymrobot_msgs::msg::ImageVideo &,
  size_t current_alignment);
size_t
max_serialized_size_ImageVideo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ymrobot_msgs::msg::ImageVideo &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ymrobot_msgs::msg::ImageVideo &,
  size_t current_alignment);
size_t
max_serialized_size_key_ImageVideo(
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
  const ymrobot_msgs::msg::PatrolMission & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: image_video_msg
  ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image_video_msg,
    cdr);

  // Member: is_audio_played_throughout_the_entire_process
  cdr << (ros_message.is_audio_played_throughout_the_entire_process ? true : false);

  // Member: full_audio_name
  cdr << ros_message.full_audio_name;

  // Member: is_the_entire_process_recorded
  cdr << (ros_message.is_the_entire_process_recorded ? true : false);

  // Member: is_activate_the_nearby_point
  cdr << (ros_message.is_activate_the_nearby_point ? true : false);

  // Member: nearby_point_radius
  cdr << ros_message.nearby_point_radius;

  // Member: nav_name_list
  {
    cdr << ros_message.nav_name_list;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs::msg::PatrolMission & ros_message)
{
  // Member: image_video_msg
  ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image_video_msg);

  // Member: is_audio_played_throughout_the_entire_process
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_audio_played_throughout_the_entire_process = tmp ? true : false;
  }

  // Member: full_audio_name
  cdr >> ros_message.full_audio_name;

  // Member: is_the_entire_process_recorded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_the_entire_process_recorded = tmp ? true : false;
  }

  // Member: is_activate_the_nearby_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_activate_the_nearby_point = tmp ? true : false;
  }

  // Member: nearby_point_radius
  cdr >> ros_message.nearby_point_radius;

  // Member: nav_name_list
  {
    cdr >> ros_message.nav_name_list;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size(
  const ymrobot_msgs::msg::PatrolMission & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: image_video_msg
  current_alignment +=
    ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image_video_msg, current_alignment);

  // Member: is_audio_played_throughout_the_entire_process
  {
    size_t item_size = sizeof(ros_message.is_audio_played_throughout_the_entire_process);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: full_audio_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.full_audio_name.size() + 1);

  // Member: is_the_entire_process_recorded
  {
    size_t item_size = sizeof(ros_message.is_the_entire_process_recorded);
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

  // Member: nav_name_list
  {
    size_t array_size = ros_message.nav_name_list.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.nav_name_list[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_PatrolMission(
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

  // Member: image_video_msg
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ImageVideo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: is_audio_played_throughout_the_entire_process
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: full_audio_name
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
  // Member: is_the_entire_process_recorded
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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
  // Member: nav_name_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::PatrolMission;
    is_plain =
      (
      offsetof(DataType, nav_name_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_serialize_key(
  const ymrobot_msgs::msg::PatrolMission & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: image_video_msg
  ymrobot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.image_video_msg,
    cdr);

  // Member: is_audio_played_throughout_the_entire_process
  cdr << (ros_message.is_audio_played_throughout_the_entire_process ? true : false);

  // Member: full_audio_name
  cdr << ros_message.full_audio_name;

  // Member: is_the_entire_process_recorded
  cdr << (ros_message.is_the_entire_process_recorded ? true : false);

  // Member: is_activate_the_nearby_point
  cdr << (ros_message.is_activate_the_nearby_point ? true : false);

  // Member: nearby_point_radius
  cdr << ros_message.nearby_point_radius;

  // Member: nav_name_list
  {
    cdr << ros_message.nav_name_list;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size_key(
  const ymrobot_msgs::msg::PatrolMission & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: image_video_msg
  current_alignment +=
    ymrobot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.image_video_msg, current_alignment);

  // Member: is_audio_played_throughout_the_entire_process
  {
    size_t item_size = sizeof(ros_message.is_audio_played_throughout_the_entire_process);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: full_audio_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.full_audio_name.size() + 1);

  // Member: is_the_entire_process_recorded
  {
    size_t item_size = sizeof(ros_message.is_the_entire_process_recorded);
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

  // Member: nav_name_list
  {
    size_t array_size = ros_message.nav_name_list.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.nav_name_list[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_key_PatrolMission(
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

  // Member: image_video_msg
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ymrobot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ImageVideo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_audio_played_throughout_the_entire_process
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: full_audio_name
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

  // Member: is_the_entire_process_recorded
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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

  // Member: nav_name_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::PatrolMission;
    is_plain =
      (
      offsetof(DataType, nav_name_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _PatrolMission__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::PatrolMission *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PatrolMission__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ymrobot_msgs::msg::PatrolMission *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PatrolMission__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::PatrolMission *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PatrolMission__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PatrolMission(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PatrolMission__callbacks = {
  "ymrobot_msgs::msg",
  "PatrolMission",
  _PatrolMission__cdr_serialize,
  _PatrolMission__cdr_deserialize,
  _PatrolMission__get_serialized_size,
  _PatrolMission__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PatrolMission__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PatrolMission__callbacks,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__PatrolMission__get_type_hash,
  &ymrobot_msgs__msg__PatrolMission__get_type_description,
  &ymrobot_msgs__msg__PatrolMission__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::PatrolMission>()
{
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_PatrolMission__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, msg, PatrolMission)() {
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_PatrolMission__handle;
}

#ifdef __cplusplus
}
#endif

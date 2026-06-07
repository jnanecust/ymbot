// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/voice_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ymrobot_msgs/msg/detail/voice_message__functions.h"
#include "ymrobot_msgs/msg/detail/voice_message__struct.hpp"

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
  const ymrobot_msgs::msg::VoiceMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: audio_task_type
  cdr << ros_message.audio_task_type;

  // Member: fixed_audio_name
  cdr << ros_message.fixed_audio_name;

  // Member: timbre
  cdr << ros_message.timbre;

  // Member: synthetic_audio_txt
  cdr << ros_message.synthetic_audio_txt;

  // Member: synthetic_audio_title
  cdr << ros_message.synthetic_audio_title;

  // Member: delete_fixed_audio
  cdr << ros_message.delete_fixed_audio;

  // Member: play_online_audio
  cdr << ros_message.play_online_audio;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ymrobot_msgs::msg::VoiceMessage & ros_message)
{
  // Member: audio_task_type
  cdr >> ros_message.audio_task_type;

  // Member: fixed_audio_name
  cdr >> ros_message.fixed_audio_name;

  // Member: timbre
  cdr >> ros_message.timbre;

  // Member: synthetic_audio_txt
  cdr >> ros_message.synthetic_audio_txt;

  // Member: synthetic_audio_title
  cdr >> ros_message.synthetic_audio_title;

  // Member: delete_fixed_audio
  cdr >> ros_message.delete_fixed_audio;

  // Member: play_online_audio
  cdr >> ros_message.play_online_audio;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size(
  const ymrobot_msgs::msg::VoiceMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: audio_task_type
  {
    size_t item_size = sizeof(ros_message.audio_task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_audio_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.fixed_audio_name.size() + 1);

  // Member: timbre
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.timbre.size() + 1);

  // Member: synthetic_audio_txt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.synthetic_audio_txt.size() + 1);

  // Member: synthetic_audio_title
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.synthetic_audio_title.size() + 1);

  // Member: delete_fixed_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.delete_fixed_audio.size() + 1);

  // Member: play_online_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.play_online_audio.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_VoiceMessage(
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

  // Member: audio_task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: fixed_audio_name
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
  // Member: timbre
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
  // Member: synthetic_audio_txt
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
  // Member: synthetic_audio_title
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
  // Member: delete_fixed_audio
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
  // Member: play_online_audio
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::VoiceMessage;
    is_plain =
      (
      offsetof(DataType, play_online_audio) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
cdr_serialize_key(
  const ymrobot_msgs::msg::VoiceMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: audio_task_type
  cdr << ros_message.audio_task_type;

  // Member: fixed_audio_name
  cdr << ros_message.fixed_audio_name;

  // Member: timbre
  cdr << ros_message.timbre;

  // Member: synthetic_audio_txt
  cdr << ros_message.synthetic_audio_txt;

  // Member: synthetic_audio_title
  cdr << ros_message.synthetic_audio_title;

  // Member: delete_fixed_audio
  cdr << ros_message.delete_fixed_audio;

  // Member: play_online_audio
  cdr << ros_message.play_online_audio;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
get_serialized_size_key(
  const ymrobot_msgs::msg::VoiceMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: audio_task_type
  {
    size_t item_size = sizeof(ros_message.audio_task_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: fixed_audio_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.fixed_audio_name.size() + 1);

  // Member: timbre
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.timbre.size() + 1);

  // Member: synthetic_audio_txt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.synthetic_audio_txt.size() + 1);

  // Member: synthetic_audio_title
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.synthetic_audio_title.size() + 1);

  // Member: delete_fixed_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.delete_fixed_audio.size() + 1);

  // Member: play_online_audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.play_online_audio.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ymrobot_msgs
max_serialized_size_key_VoiceMessage(
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

  // Member: audio_task_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fixed_audio_name
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

  // Member: timbre
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

  // Member: synthetic_audio_txt
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

  // Member: synthetic_audio_title
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

  // Member: delete_fixed_audio
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

  // Member: play_online_audio
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ymrobot_msgs::msg::VoiceMessage;
    is_plain =
      (
      offsetof(DataType, play_online_audio) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _VoiceMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::VoiceMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VoiceMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ymrobot_msgs::msg::VoiceMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VoiceMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ymrobot_msgs::msg::VoiceMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VoiceMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VoiceMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VoiceMessage__callbacks = {
  "ymrobot_msgs::msg",
  "VoiceMessage",
  _VoiceMessage__cdr_serialize,
  _VoiceMessage__cdr_deserialize,
  _VoiceMessage__get_serialized_size,
  _VoiceMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VoiceMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VoiceMessage__callbacks,
  get_message_typesupport_handle_function,
  &ymrobot_msgs__msg__VoiceMessage__get_type_hash,
  &ymrobot_msgs__msg__VoiceMessage__get_type_description,
  &ymrobot_msgs__msg__VoiceMessage__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ymrobot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ymrobot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ymrobot_msgs::msg::VoiceMessage>()
{
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_VoiceMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ymrobot_msgs, msg, VoiceMessage)() {
  return &ymrobot_msgs::msg::typesupport_fastrtps_cpp::_VoiceMessage__handle;
}

#ifdef __cplusplus
}
#endif

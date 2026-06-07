// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/WakeUpWordSetting.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/wake_up_word_setting__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__WakeUpWordSetting__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0xe2, 0xdd, 0x53, 0x23, 0x30, 0xfd, 0xe1,
      0x05, 0x35, 0x00, 0xc4, 0x3f, 0x82, 0x3e, 0x3e,
      0x42, 0x69, 0x36, 0x7a, 0xa3, 0xb2, 0x2e, 0x0f,
      0x47, 0x81, 0x5f, 0x8e, 0xeb, 0x0e, 0x61, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__WakeUpWordSetting__TYPE_NAME[] = "ymrobot_msgs/msg/WakeUpWordSetting";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__WakeUpWordSetting__FIELD_NAME__wake_up_word[] = "wake_up_word";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__WakeUpWordSetting__FIELDS[] = {
  {
    {ymrobot_msgs__msg__WakeUpWordSetting__FIELD_NAME__wake_up_word, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__WakeUpWordSetting__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__WakeUpWordSetting__TYPE_NAME, 34, 34},
      {ymrobot_msgs__msg__WakeUpWordSetting__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] wake_up_word";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__WakeUpWordSetting__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__WakeUpWordSetting__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 21, 21},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__WakeUpWordSetting__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__WakeUpWordSetting__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

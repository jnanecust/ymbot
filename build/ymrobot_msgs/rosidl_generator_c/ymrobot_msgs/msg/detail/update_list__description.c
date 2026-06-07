// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/UpdateList.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/update_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__UpdateList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xb3, 0x23, 0x8a, 0x53, 0x17, 0xb4, 0x4e,
      0xdf, 0x92, 0xad, 0x64, 0x5a, 0x4f, 0x49, 0xc2,
      0xfb, 0xb0, 0x65, 0x9a, 0xb6, 0x3e, 0x6a, 0x6d,
      0x80, 0xb4, 0xf4, 0xf1, 0xe2, 0x0c, 0xc4, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__UpdateList__TYPE_NAME[] = "ymrobot_msgs/msg/UpdateList";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__UpdateList__FIELD_NAME__code[] = "code";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__UpdateList__FIELDS[] = {
  {
    {ymrobot_msgs__msg__UpdateList__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__UpdateList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__UpdateList__TYPE_NAME, 27, 27},
      {ymrobot_msgs__msg__UpdateList__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 POSE_MANAGER               = 0  # \\xe7\\x82\\xb9\\xe4\\xbd\\x8d\\xe7\\xae\\xa1\\xe7\\x90\\x86\n"
  "uint8 UP_CLIMB_ACTION            = 1  # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\n"
  "uint8 EMOJI                      = 2  # \\xe8\\xa1\\xa8\\xe6\\x83\\x85\n"
  "uint8 AUDIO                      = 3  # \\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "uint8 ALL_ACTION                 = 4  # \\xe5\\x85\\xa8\\xe9\\x83\\xa8\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\n"
  "\n"
  "uint8       code           # \\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe4\\xbb\\xa3\\xe7\\xa0\\x81";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__UpdateList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__UpdateList__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 256, 256},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__UpdateList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__UpdateList__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

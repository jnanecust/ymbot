// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/MapTaskCommand.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/map_task_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__MapTaskCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xc6, 0x22, 0x32, 0xa7, 0x85, 0xd3, 0xf5,
      0x78, 0x0d, 0x33, 0xc5, 0xec, 0xa3, 0xa8, 0xdd,
      0xfb, 0x45, 0xc0, 0x6d, 0xbe, 0xa8, 0xfe, 0xbe,
      0x42, 0xeb, 0x4f, 0xc2, 0x0f, 0x7f, 0x00, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME[] = "ymrobot_msgs/msg/MapTaskCommand";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__MapTaskCommand__FIELD_NAME__code[] = "code";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__MapTaskCommand__FIELDS[] = {
  {
    {ymrobot_msgs__msg__MapTaskCommand__FIELD_NAME__code, 4, 4},
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
ymrobot_msgs__msg__MapTaskCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
      {ymrobot_msgs__msg__MapTaskCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 NONE          = 0     # 0x00\n"
  "uint8 PCD2PGM       = 1     # 0x01\n"
  "uint8 LOAD_MAP      = 2     # 0x02\n"
  "\n"
  "uint8       code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__MapTaskCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__MapTaskCommand__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 122, 122},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__MapTaskCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__MapTaskCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

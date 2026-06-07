// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/BinaryData.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/binary_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__BinaryData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x34, 0x31, 0x69, 0xec, 0x99, 0x7c, 0x22,
      0xbe, 0xa8, 0x48, 0x52, 0x3b, 0xdd, 0xa7, 0x5c,
      0xf6, 0x54, 0x13, 0x45, 0xf8, 0xd1, 0x62, 0x9e,
      0xa1, 0x5f, 0x0e, 0x3a, 0xb7, 0xf6, 0xa9, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__BinaryData__TYPE_NAME[] = "ymrobot_msgs/msg/BinaryData";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__BinaryData__FIELD_NAME__file_format[] = "file_format";
static char ymrobot_msgs__msg__BinaryData__FIELD_NAME__binary_data[] = "binary_data";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__BinaryData__FIELDS[] = {
  {
    {ymrobot_msgs__msg__BinaryData__FIELD_NAME__file_format, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__BinaryData__FIELD_NAME__binary_data, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__BinaryData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__BinaryData__TYPE_NAME, 27, 27},
      {ymrobot_msgs__msg__BinaryData__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string   file_format\n"
  "uint8[]  binary_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__BinaryData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__BinaryData__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__BinaryData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__BinaryData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/Upper.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/upper__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__Upper__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x21, 0xa0, 0x8c, 0x43, 0x37, 0x38, 0xd6,
      0x5c, 0x4d, 0x01, 0xae, 0xb9, 0x02, 0x2c, 0x91,
      0x09, 0xca, 0x59, 0x17, 0xfc, 0x59, 0xaa, 0xc0,
      0x30, 0x18, 0xb0, 0xaf, 0xc8, 0x35, 0x64, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__Upper__TYPE_NAME[] = "ymrobot_msgs/msg/Upper";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__Upper__FIELD_NAME__chassis_status[] = "chassis_status";
static char ymrobot_msgs__msg__Upper__FIELD_NAME__auto_status[] = "auto_status";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__Upper__FIELDS[] = {
  {
    {ymrobot_msgs__msg__Upper__FIELD_NAME__chassis_status, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Upper__FIELD_NAME__auto_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__Upper__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__Upper__TYPE_NAME, 22, 22},
      {ymrobot_msgs__msg__Upper__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool chassis_status\n"
  "bool auto_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__Upper__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__Upper__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__Upper__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__Upper__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

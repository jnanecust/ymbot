// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/Movebase.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/movebase__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__Movebase__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xe4, 0x1b, 0x87, 0xd3, 0x74, 0xf2, 0x38,
      0x06, 0xae, 0xd7, 0x3f, 0x38, 0x45, 0x2e, 0x68,
      0x12, 0xc5, 0x0e, 0xe0, 0xcf, 0xac, 0x59, 0xb5,
      0x10, 0x43, 0xa0, 0x6a, 0x42, 0xc5, 0x25, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__Movebase__TYPE_NAME[] = "ymrobot_msgs/msg/Movebase";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__Movebase__FIELD_NAME__speed[] = "speed";
static char ymrobot_msgs__msg__Movebase__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__Movebase__FIELDS[] = {
  {
    {ymrobot_msgs__msg__Movebase__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Movebase__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__Movebase__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__Movebase__TYPE_NAME, 25, 25},
      {ymrobot_msgs__msg__Movebase__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 speed\n"
  "float32 angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__Movebase__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__Movebase__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__Movebase__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__Movebase__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

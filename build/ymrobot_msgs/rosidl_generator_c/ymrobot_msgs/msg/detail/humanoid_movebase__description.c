// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/HumanoidMovebase.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/humanoid_movebase__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__HumanoidMovebase__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x2c, 0x29, 0x8d, 0x37, 0xe3, 0x64, 0xfc,
      0x4d, 0x70, 0x6f, 0xda, 0xe7, 0xca, 0x63, 0x5c,
      0xeb, 0x0b, 0x56, 0x6e, 0x57, 0x6b, 0x9f, 0xaf,
      0x7b, 0x86, 0x37, 0x5e, 0xd3, 0x67, 0xd8, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__HumanoidMovebase__TYPE_NAME[] = "ymrobot_msgs/msg/HumanoidMovebase";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__HumanoidMovebase__FIELD_NAME__x[] = "x";
static char ymrobot_msgs__msg__HumanoidMovebase__FIELD_NAME__y[] = "y";
static char ymrobot_msgs__msg__HumanoidMovebase__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__HumanoidMovebase__FIELDS[] = {
  {
    {ymrobot_msgs__msg__HumanoidMovebase__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__HumanoidMovebase__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__HumanoidMovebase__FIELD_NAME__yaw, 3, 3},
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
ymrobot_msgs__msg__HumanoidMovebase__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__HumanoidMovebase__TYPE_NAME, 33, 33},
      {ymrobot_msgs__msg__HumanoidMovebase__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__HumanoidMovebase__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__HumanoidMovebase__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__HumanoidMovebase__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__HumanoidMovebase__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

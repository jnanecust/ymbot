// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/CurrentPose.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/current_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__CurrentPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x01, 0x8b, 0x67, 0xf2, 0x40, 0x71, 0xe2,
      0x81, 0xcb, 0x34, 0x1c, 0x78, 0x88, 0x30, 0x35,
      0x08, 0x78, 0x1e, 0xc4, 0x74, 0x9a, 0x7f, 0xc3,
      0xd8, 0x33, 0x2d, 0x92, 0x62, 0xb1, 0xe3, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__CurrentPose__TYPE_NAME[] = "ymrobot_msgs/msg/CurrentPose";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__x[] = "x";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__y[] = "y";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__z[] = "z";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__roll[] = "roll";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__pitch[] = "pitch";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__yaw[] = "yaw";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__rx[] = "rx";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__ry[] = "ry";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__rz[] = "rz";
static char ymrobot_msgs__msg__CurrentPose__FIELD_NAME__rw[] = "rw";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__CurrentPose__FIELDS[] = {
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__rx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__ry, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__rz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CurrentPose__FIELD_NAME__rw, 2, 2},
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
ymrobot_msgs__msg__CurrentPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__CurrentPose__TYPE_NAME, 28, 28},
      {ymrobot_msgs__msg__CurrentPose__FIELDS, 10, 10},
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
  "float32 z\n"
  "float32 roll\n"
  "float32 pitch\n"
  "float32 yaw\n"
  "float32 rx\n"
  "float32 ry\n"
  "float32 rz\n"
  "float32 rw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__CurrentPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__CurrentPose__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 112, 112},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__CurrentPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__CurrentPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

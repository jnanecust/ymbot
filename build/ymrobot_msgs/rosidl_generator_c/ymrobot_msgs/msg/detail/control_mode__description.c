// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/control_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__ControlMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0xe2, 0x5c, 0xc8, 0x4c, 0x2c, 0xaf, 0x48,
      0x2f, 0xfa, 0x6d, 0x5d, 0xc6, 0x16, 0xaa, 0x47,
      0xe4, 0x2c, 0x35, 0x2d, 0x05, 0xce, 0x1b, 0x22,
      0x6f, 0xb4, 0xdc, 0xcd, 0x34, 0x14, 0x19, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__ControlMode__TYPE_NAME[] = "ymrobot_msgs/msg/ControlMode";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__ControlMode__FIELD_NAME__code[] = "code";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__ControlMode__FIELDS[] = {
  {
    {ymrobot_msgs__msg__ControlMode__FIELD_NAME__code, 4, 4},
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
ymrobot_msgs__msg__ControlMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__ControlMode__TYPE_NAME, 28, 28},
      {ymrobot_msgs__msg__ControlMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 SHOU_DONG                  = 0  # shou\n"
  "uint8 SHOU_DONG_CLOUD            = 1  # \\xe6\\x9a\\x82\\xe5\\x81\\x9c\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\n"
  "uint8 AUTO                       = 2  # \\xe6\\x81\\xa2\\xe5\\xa4\\x8d\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\n"
  "uint8 PID                        = 3  # PID\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\n"
  "\n"
  "uint8       code           # \\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe4\\xbb\\xa3\\xe7\\xa0\\x81";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__ControlMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__ControlMode__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 216, 216},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__ControlMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__ControlMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

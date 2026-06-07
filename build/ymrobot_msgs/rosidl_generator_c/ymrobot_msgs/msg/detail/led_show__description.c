// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/LedShow.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/led_show__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__LedShow__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x6d, 0xd5, 0x55, 0x84, 0x24, 0x03, 0xe5,
      0x6a, 0x11, 0xc2, 0x33, 0xb8, 0xf0, 0x73, 0xe9,
      0x22, 0x10, 0x13, 0x12, 0x8a, 0x22, 0xdf, 0x49,
      0xdd, 0x0d, 0xc0, 0xd9, 0xd4, 0x62, 0x5e, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__LedShow__TYPE_NAME[] = "ymrobot_msgs/msg/LedShow";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__LedShow__FIELD_NAME__luminance[] = "luminance";
static char ymrobot_msgs__msg__LedShow__FIELD_NAME__color_r[] = "color_r";
static char ymrobot_msgs__msg__LedShow__FIELD_NAME__color_g[] = "color_g";
static char ymrobot_msgs__msg__LedShow__FIELD_NAME__color_b[] = "color_b";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__LedShow__FIELDS[] = {
  {
    {ymrobot_msgs__msg__LedShow__FIELD_NAME__luminance, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__LedShow__FIELD_NAME__color_r, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__LedShow__FIELD_NAME__color_g, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__LedShow__FIELD_NAME__color_b, 7, 7},
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
ymrobot_msgs__msg__LedShow__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__LedShow__TYPE_NAME, 24, 24},
      {ymrobot_msgs__msg__LedShow__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 luminance  #\\xe4\\xba\\xae\\xe5\\xba\\xa6\n"
  "uint8 color_r\n"
  "uint8 color_g\n"
  "uint8 color_b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__LedShow__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__LedShow__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 63, 63},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__LedShow__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__LedShow__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

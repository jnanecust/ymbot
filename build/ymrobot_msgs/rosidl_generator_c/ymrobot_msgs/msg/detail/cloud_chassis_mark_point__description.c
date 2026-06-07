// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__CloudChassisMarkPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x01, 0x19, 0x2e, 0x10, 0xa7, 0x3c, 0x07,
      0x27, 0xaf, 0xb8, 0xf8, 0x97, 0x54, 0x0f, 0x9f,
      0x1e, 0x48, 0xa0, 0xbb, 0xef, 0xe2, 0xfc, 0x83,
      0xed, 0x08, 0x0b, 0x74, 0x48, 0x0f, 0xff, 0xbd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__CloudChassisMarkPoint__TYPE_NAME[] = "ymrobot_msgs/msg/CloudChassisMarkPoint";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_mode[] = "nav_mode";
static char ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_name[] = "nav_target_name";
static char ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_x[] = "nav_target_x";
static char ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_y[] = "nav_target_y";
static char ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_yaw[] = "nav_target_yaw";
static char ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__is_activate_the_nearby_point[] = "is_activate_the_nearby_point";
static char ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nearby_point_radius[] = "nearby_point_radius";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__CloudChassisMarkPoint__FIELDS[] = {
  {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_mode, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nav_target_yaw, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__is_activate_the_nearby_point, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELD_NAME__nearby_point_radius, 19, 19},
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
ymrobot_msgs__msg__CloudChassisMarkPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__CloudChassisMarkPoint__TYPE_NAME, 38, 38},
      {ymrobot_msgs__msg__CloudChassisMarkPoint__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8   nav_mode            #\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f  0: \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe5\\x90\\x8d\\xe5\\xaf\\xbc\\xe8\\x88\\xaa  1\\xef\\xbc\\x9a\\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe7\\x82\\xb9\\xe5\\xaf\\xbc\\xe8\\x88\\xaa  3:\\xe6\\x89\\x93\\xe7\\x82\\xb9 4\\xef\\xbc\\x9a\\xe5\\x85\\x85\\xe7\\x94\\xb5 5\\xef\\xbc\\x9a\\xe5\\x8f\\x96\\xe6\\xb6\\x88\\xe5\\x85\\x85\\xe7\\x94\\xb5 2:\\xe9\\x87\\x8d\\xe5\\xae\\x9a\\xe4\\xbd\\x8d\n"
  "string  nav_target_name     #\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe5\\x90\\x8d\n"
  "float32 nav_target_x        #\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87x\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float32 nav_target_y        #\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87y\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float32 nav_target_yaw      #\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87yaw\\xe8\\xa7\\x92\\xe5\\xba\\xa6\n"
  "bool    is_activate_the_nearby_point # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\xbf\\x80\\xe6\\xb4\\xbb\\xe9\\x99\\x84\\xe8\\xbf\\x91\\xe7\\x82\\xb9\n"
  "float32 nearby_point_radius    #\\xe5\\xb0\\xb1\\xe8\\xbf\\x91\\xe7\\x82\\xb9\\xe5\\x8d\\x8a\\xe5\\xbe\\x84";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__CloudChassisMarkPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__CloudChassisMarkPoint__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 309, 309},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__CloudChassisMarkPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__CloudChassisMarkPoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

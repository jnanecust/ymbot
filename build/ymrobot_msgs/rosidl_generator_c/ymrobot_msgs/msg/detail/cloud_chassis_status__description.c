// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/cloud_chassis_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__CloudChassisStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0d, 0xf1, 0x89, 0x21, 0x9b, 0xcf, 0x30, 0x1a,
      0xe3, 0x1d, 0xda, 0x71, 0xee, 0xa7, 0x58, 0x32,
      0x61, 0x66, 0xe9, 0xf8, 0x96, 0x42, 0x5f, 0x09,
      0xd9, 0x2d, 0xc3, 0x5b, 0xc7, 0x71, 0xaf, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__CloudChassisStatus__TYPE_NAME[] = "ymrobot_msgs/msg/CloudChassisStatus";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__charge_state[] = "charge_state";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__soft_estop_state[] = "soft_estop_state";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__hard_estop_state[] = "hard_estop_state";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__estop_state[] = "estop_state";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__power_percent[] = "power_percent";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__x[] = "x";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__y[] = "y";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__yaw[] = "yaw";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__current_floor[] = "current_floor";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__error_code[] = "error_code";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__move_target[] = "move_target";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__move_status[] = "move_status";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__running_status[] = "running_status";
static char ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__target_floor[] = "target_floor";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__CloudChassisStatus__FIELDS[] = {
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__charge_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__soft_estop_state, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__hard_estop_state, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__estop_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__power_percent, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__current_floor, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__move_target, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__move_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__running_status, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__CloudChassisStatus__FIELD_NAME__target_floor, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__CloudChassisStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__CloudChassisStatus__TYPE_NAME, 35, 35},
      {ymrobot_msgs__msg__CloudChassisStatus__FIELDS, 14, 14},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe4\\xba\\x91\\xe8\\xbf\\xb9\\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe4\\xbf\\xa1\\xe6\\x81\\xafmsg\n"
  "bool    charge_state        # \\xe5\\x85\\x85\\xe7\\x94\\xb5\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "bool    soft_estop_state    # \\xe8\\xbd\\xaf\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe7\\x8a\\xb6\\xe6\\x80\\x81 true->\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe4\\xb8\\xad\\xef\\xbc\\x8cfalse->\\xe9\\x9d\\x9e\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe4\\xb8\\xad\n"
  "bool    hard_estop_state    # \\xe7\\xa1\\xac\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe7\\x8a\\xb6\\xe6\\x80\\x81 true->\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe4\\xb8\\xad\\xef\\xbc\\x8cfalse->\\xe9\\x9d\\x9e\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe4\\xb8\\xad\n"
  "bool    estop_state         # \\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe7\\x8a\\xb6\\xe6\\x80\\x81 true->\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe4\\xb8\\xad\\xef\\xbc\\x8cfalse->\\xe9\\x9d\\x9e\\xe6\\x80\\xa5\\xe5\\x81\\x9c\\xe4\\xb8\\xad\n"
  "uint8   power_percent       # \\xe7\\x94\\xb5\\xe9\\x87\\x8f\\xe7\\x99\\xbe\\xe5\\x88\\x86\\xe6\\xaf\\x94\n"
  "float64 x                   # \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe4\\xbd\\x8d\\xe7\\xbd\\xaex\n"
  "float64 y                   # \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe4\\xbd\\x8d\\xe7\\xbd\\xaey\n"
  "float64 yaw                 # \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe4\\xbd\\x8d\\xe7\\xbd\\xaeyaw\n"
  "uint8   current_floor       # \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\xa5\\xbc\\xe5\\xb1\\x82  --  \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe5\\x9c\\xb0\\xe5\\x9b\\xbe\n"
  "uint8   error_code          # \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe7\\xa0\\x81\n"
  "string  move_target         # \\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe7\\x82\\xb9\n"
  "string  move_status         # \\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "string  running_status      # \\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe8\\xbf\\x90\\xe8\\xa1\\x8c\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "string  target_floor        # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\xa5\\xbc\\xe5\\xb1\\x82   -- \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe5\\x9c\\xb0\\xe5\\x9b\\xbe";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__CloudChassisStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__CloudChassisStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 600, 600},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__CloudChassisStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__CloudChassisStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

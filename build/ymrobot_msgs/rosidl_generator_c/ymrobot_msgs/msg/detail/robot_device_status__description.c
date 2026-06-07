// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/robot_device_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__RobotDeviceStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x4a, 0x8a, 0x33, 0x3e, 0xd0, 0xa4, 0xea,
      0x54, 0xb9, 0xc2, 0x38, 0x2c, 0x1d, 0xbb, 0xdd,
      0xd6, 0x87, 0x6e, 0x72, 0x4f, 0x0f, 0x51, 0x4d,
      0xd4, 0x9e, 0x1c, 0x95, 0xf7, 0xf4, 0x55, 0x3a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__RobotDeviceStatus__TYPE_NAME[] = "ymrobot_msgs/msg/RobotDeviceStatus";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__battery_percentage[] = "battery_percentage";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__battery_temperature[] = "battery_temperature";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__left_motor_speed[] = "left_motor_speed";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__right_motor_speed[] = "right_motor_speed";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__left_motor_temperature[] = "left_motor_temperature";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__right_motor_temperature[] = "right_motor_temperature";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__cpu_usage[] = "cpu_usage";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__memory_usage[] = "memory_usage";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__cpu_temperature[] = "cpu_temperature";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__disk_space_percentage[] = "disk_space_percentage";
static char ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__mainboard_temperature[] = "mainboard_temperature";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__RobotDeviceStatus__FIELDS[] = {
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__battery_percentage, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__battery_temperature, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__left_motor_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__right_motor_speed, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__left_motor_temperature, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__right_motor_temperature, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__cpu_usage, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__memory_usage, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__cpu_temperature, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__disk_space_percentage, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__RobotDeviceStatus__FIELD_NAME__mainboard_temperature, 21, 21},
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
ymrobot_msgs__msg__RobotDeviceStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__RobotDeviceStatus__TYPE_NAME, 34, 34},
      {ymrobot_msgs__msg__RobotDeviceStatus__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "float32 battery_voltage          # \\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe7\\x94\\xb5\\xe5\\x8e\\x8b\\xef\\xbc\\x88\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aV\\xef\\xbc\\x89\n"
  "float32 battery_percentage       # \\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe5\\x89\\xa9\\xe4\\xbd\\x99\\xe7\\x94\\xb5\\xe9\\x87\\x8f\\xe7\\x99\\xbe\\xe5\\x88\\x86\\xe6\\xaf\\x94\\xef\\xbc\\x88\\xe8\\x8c\\x83\\xe5\\x9b\\xb4\\xef\\xbc\\x9a0.0-100.0\\xef\\xbc\\x89\n"
  "float32 battery_temperature      # \\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe6\\xb8\\xa9\\xe5\\xba\\xa6\\xef\\xbc\\x88\\xe5\\x8f\\xaf\\xe9\\x80\\x89\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x91\\x84\\xe6\\xb0\\x8f\\xe5\\xba\\xa6\\xef\\xbc\\x89\n"
  "\n"
  "# \\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "int32 left_motor_speed           # \\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbd\\xac\\xe9\\x80\\x9f\\xef\\xbc\\x88\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aRPM\\xef\\xbc\\x89\n"
  "int32 right_motor_speed          # \\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe8\\xbd\\xac\\xe9\\x80\\x9f\\xef\\xbc\\x88\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aRPM\\xef\\xbc\\x89\n"
  "float32 left_motor_temperature\n"
  "float32 right_motor_temperature\n"
  "\n"
  "# \\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "float32 cpu_usage                # CPU\\xe4\\xbd\\xbf\\xe7\\x94\\xa8\\xe7\\x8e\\x87\\xef\\xbc\\x88\\xe8\\x8c\\x83\\xe5\\x9b\\xb4\\xef\\xbc\\x9a0.0-100.0\\xef\\xbc\\x89\n"
  "float32 memory_usage             # \\xe5\\x86\\x85\\xe5\\xad\\x98\\xe5\\x8d\\xa0\\xe7\\x94\\xa8\\xe7\\x8e\\x87\\xef\\xbc\\x88\\xe8\\x8c\\x83\\xe5\\x9b\\xb4\\xef\\xbc\\x9a0.0-100.0\\xef\\xbc\\x89\n"
  "float32  cpu_temperature          # CPU\\xe6\\xb8\\xa9\\xe5\\xba\\xa6\\xef\\xbc\\x88\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x91\\x84\\xe6\\xb0\\x8f\\xe5\\xba\\xa6\\xef\\xbc\\x89\n"
  "float32 disk_space_percentage    # \\xe7\\xa3\\x81\\xe7\\x9b\\x98\\xe5\\x89\\xa9\\xe4\\xbd\\x99\\xe7\\xa9\\xba\\xe9\\x97\\xb4\\xe5\\x8d\\xa0\\xe6\\xaf\\x94\\xef\\xbc\\x88\\xe8\\x8c\\x83\\xe5\\x9b\\xb4\\xef\\xbc\\x9a0.0-100.0\\xef\\xbc\\x89\n"
  "float32 mainboard_temperature    # \\xe4\\xb8\\xbb\\xe6\\x8e\\xa7\\xe6\\x9d\\xbf\\xe6\\xb8\\xa9\\xe5\\xba\\xa6\\xef\\xbc\\x88\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x91\\x84\\xe6\\xb0\\x8f\\xe5\\xba\\xa6\\xef\\xbc\\x89";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__RobotDeviceStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__RobotDeviceStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 605, 605},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__RobotDeviceStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__RobotDeviceStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

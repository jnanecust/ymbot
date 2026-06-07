// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/msg/detail/command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__msg__Command__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x84, 0xe7, 0x73, 0x3e, 0x04, 0xd4, 0x8e,
      0xc0, 0x6d, 0xab, 0x63, 0x41, 0x5d, 0x76, 0x0b,
      0x63, 0x23, 0x02, 0x20, 0x82, 0xb2, 0x20, 0x9f,
      0x0a, 0x9d, 0x87, 0xf3, 0x6a, 0x79, 0x14, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ymrobot_msgs__msg__Command__TYPE_NAME[] = "ymrobot_msgs/msg/Command";

// Define type names, field names, and default values
static char ymrobot_msgs__msg__Command__FIELD_NAME__code[] = "code";
static char ymrobot_msgs__msg__Command__FIELD_NAME__params_code[] = "params_code";
static char ymrobot_msgs__msg__Command__FIELD_NAME__params[] = "params";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__msg__Command__FIELDS[] = {
  {
    {ymrobot_msgs__msg__Command__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Command__FIELD_NAME__params_code, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__msg__Command__FIELD_NAME__params, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__msg__Command__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__msg__Command__TYPE_NAME, 24, 24},
      {ymrobot_msgs__msg__Command__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 NONE                                = 0  # \\xe6\\x97\\xa0\\xe5\\x91\\xbd\\xe4\\xbb\\xa4\n"
  "uint8 REGISTER                            = 1  # \\xe6\\xb3\\xa8\\xe5\\x86\\x8c\n"
  "uint8 LOG_OFF                             = 2  # \\xe6\\xb3\\xa8\\xe9\\x94\\x80\n"
  "uint8 PAUSE                               = 3  # \\xe6\\x9a\\x82\\xe5\\x81\\x9c\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\n"
  "uint8 RESUME                              = 4  # \\xe6\\x81\\xa2\\xe5\\xa4\\x8d\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\n"
  "uint8 CANCLE                              = 5  # \\xe5\\x8f\\x96\\xe6\\xb6\\x88\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe6\\x93\\x8d\\xe4\\xbd\\x9c\n"
  "uint8 WAIT                                = 6  # \\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe4\\xbc\\x91\\xe7\\x9c\\xa0\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\n"
  "uint8 FINISH_WAIT                         = 7  # \\xe4\\xbb\\x8e\\xe4\\xbc\\x91\\xe7\\x9c\\xa0\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe5\\x94\\xa4\\xe9\\x86\\x92\n"
  "uint8 CHARGE                              = 8  # \\xe5\\x9b\\x9e\\xe5\\x86\\xb2\n"
  "uint8 FINISH_CHARGE                       = 9  # \\xe7\\xbb\\x93\\xe6\\x9d\\x9f\\xe5\\x9b\\x9e\\xe5\\x86\\xb2\n"
  "uint8 BUILD_MAP                           = 10 # \\xe5\\xbb\\xba\\xe5\\x9b\\xbe\n"
  "uint8 UPLOAD_MAP                          = 11 # \\xe6\\x9b\\xb4\\xe6\\x96\\xb0\\xe5\\x9c\\xb0\\xe5\\x9b\\xbe\n"
  "uint8 DOWNLOAD_MAP                        = 12 # \\xe4\\xb8\\x8b\\xe8\\xbd\\xbd\\xe5\\x9c\\xb0\\xe5\\x9b\\xbe\n"
  "uint8 SAVE_MAP                            = 13 # \\xe4\\xbf\\x9d\\xe5\\xad\\x98\\xe5\\x9c\\xb0\\xe5\\x9b\\xbe\n"
  "uint8 RELOCALIZE                          = 14 # \\xe9\\x87\\x8d\\xe5\\xae\\x9a\\xe4\\xbd\\x8d\n"
  "uint8 NAVIGATION                          = 15 # \\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 MULIT_POINTS_NAVIGATION             = 16 # \\xe5\\xa4\\x9a\\xe7\\x82\\xb9\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 MULIT_FLOOR_NAVIGATION              = 17 # \\xe8\\xb7\\xa8\\xe6\\xa5\\xbc\\xe5\\xb1\\x82\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xef\\xbc\\x88\\xe5\\x8f\\xaa\\xe9\\x80\\x82\\xe5\\x90\\x88\\xe5\\x8d\\x95\\xe7\\x82\\xb9\\xef\\xbc\\x89\n"
  "uint8 DOT                                 = 18 # \\xe6\\x89\\x93\\xe7\\x82\\xb9\n"
  "uint8 CLOUD_NAVIGATION                    = 19 # \\xe4\\xba\\x91\\xe8\\xbf\\xb9\\xe5\\x8d\\x95\\xe7\\x82\\xb9\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 CLOUD_MULIT_POINTS_NAVIGATION       = 20 # \\xe4\\xba\\x91\\xe8\\xbf\\xb9\\xe5\\xa4\\x9a\\xe7\\x82\\xb9\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 CLOUD_NAVIGATION_NAME               = 21 # \\xe4\\xba\\x91\\xe8\\xbf\\xb9\\xe5\\x8d\\x95\\xe7\\x82\\xb9\\xe7\\x82\\xb9\\xe4\\xbd\\x8d\\xe5\\x90\\x8d\\xe7\\xa7\\xb0\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 CLOUD_MULIT_POINTS_NAVIGATION_NAME  = 22 # \\xe4\\xba\\x91\\xe8\\xbf\\xb9\\xe5\\xa4\\x9a\\xe7\\x82\\xb9\\xe7\\x82\\xb9\\xe4\\xbd\\x8d\\xe5\\x90\\x8d\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 MANUAL_CONTROL_MOVE                 = 23 # \\xe9\\x81\\xa5\\xe6\\x8e\\xa7\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe7\\xa7\\xbb\\xe5\\x8a\\xa8\n"
  "uint8 EXE_BEHAVIOR_TREE                   = 24 # \\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe8\\xa1\\x8c\\xe4\\xb8\\xba\\xe6\\xa0\\x91\n"
  "uint8 PLACE_CARTESIAN                     = 25 # \\xe6\\x9c\\xab\\xe7\\xab\\xaf\\xe5\\x8f\\x98\\xe5\\x8c\\x96\\xef\\xbc\\x88\\xe7\\xac\\x9b\\xe5\\x8d\\xa1\\xe5\\xb0\\x94\\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xef\\xbc\\x89\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 PLACE_JOINT                         = 26 # \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe5\\x8f\\x98\\xe5\\x8c\\x96\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "uint8 PLACE_FIXED                         = 27 # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe9\\xa2\\x84\\xe8\\xae\\xbe\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\n"
  "uint8 PLACE_CONTROL_MODE                  = 28 # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe5\\x88\\x87\\xe6\\x8d\\xa2\n"
  "uint8 GRASP                               = 29 # \\xe5\\xa4\\xb9\\xe7\\x88\\xaa\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\n"
  "uint8 CAMERA                              = 30 # \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\n"
  "uint8 PHOTOGRAPH                          = 31 # \\xe6\\x8b\\x8d\\xe7\\x85\\xa7\n"
  "uint8 RECOGNIZE                           = 32 # \\xe8\\xaf\\x86\\xe5\\x88\\xab\\xe7\\x89\\xa9\\xe4\\xbd\\x93\n"
  "uint8 PLAY_FIX_AUDIO                      = 33 # \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "uint8 TXT_2_AUDIO                         = 34 # \\xe6\\x96\\x87\\xe5\\xad\\x97\\xe5\\x90\\x88\\xe6\\x88\\x90\\xe8\\xaf\\xad\\xe9\\x9f\\xb3\n"
  "uint8 SPEECH_2_TXT                        = 35 # \\xe8\\xaf\\xad\\xe9\\x9f\\xb3\\xe8\\xbd\\xac\\xe6\\x96\\x87\\xe5\\xad\\x97\\xef\\xbc\\x88\\xe5\\x9c\\xa8\\xe7\\xba\\xbf\\xe5\\x92\\x8c\\xe7\\xa6\\xbb\\xe7\\xba\\xbf\\xe9\\x83\\xbd\\xe6\\x9c\\x89\\xef\\xbc\\x89\n"
  "uint8 EXPRESSION_FIXED                    = 36 # \\xe8\\xa1\\xa8\\xe6\\x83\\x85\\xe9\\xa2\\x84\\xe8\\xae\\xbe\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\n"
  "uint8 WAKE_UP                             = 37 # \\xe5\\x94\\xa4\\xe9\\x86\\x92\n"
  "uint8 POWER_OFF                           = 38 # \\xe8\\xbf\\x9c\\xe7\\xa8\\x8b\\xe5\\x85\\xb3\\xe6\\x9c\\xba\n"
  "uint8 SETTING_PARAMETERS                  = 39 # \\xe8\\xae\\xbe\\xe7\\xbd\\xae\\xe5\\x8f\\x82\\xe6\\x95\\xb0\n"
  "uint8 SYNTHETIC_AUDIO                     = 40 # \\xe5\\x88\\xa0\\xe6\\x8e\\x89\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "uint8 VOICE_INTERACTION_FUNCTION_SWITCH   = 41 # \\xe5\\x90\\xaf\\xe5\\x8a\\xa8/\\xe5\\x85\\xb3\\xe9\\x97\\xad \\xe8\\xaf\\xad\\xe9\\x9f\\xb3\\xe4\\xba\\xa4\\xe4\\xba\\x92\\xe5\\x8a\\x9f\\xe8\\x83\\xbd\\xe5\\xbc\\x80\\xe5\\x85\\xb3\n"
  "uint8 UPLOAD_VOICE_CONVERSATION_LOGS      = 42 # \\xe4\\xb8\\x8a\\xe4\\xbc\\xa0\\xe8\\xaf\\xad\\xe9\\x9f\\xb3\\xe5\\xaf\\xb9\\xe8\\xaf\\x9d\\xe6\\x97\\xa5\\xe5\\xbf\\x97\n"
  "uint8 UPLOAD_OPERATION_LOGS               = 43 # \\xe4\\xb8\\x8a\\xe4\\xbc\\xa0\\xe8\\xbf\\x90\\xe8\\xa1\\x8c\\xe6\\x97\\xa5\\xe5\\xbf\\x97\n"
  "uint8 PLAY_ONLINE_AUDIO                   = 44 # \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe5\\x9c\\xa8\\xe7\\xba\\xbf\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "uint8 DOWNLOAD_AUDIO                      = 45 # \\xe4\\xb8\\x8b\\xe8\\xbd\\xbd\\xe9\\x9f\\xb3\\xe9\\xa2\\x91\n"
  "\n"
  "\n"
  "uint8       code           # \\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe4\\xbb\\xa3\\xe7\\xa0\\x81\n"
  "string      params_code    # \\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe5\\x8f\\x82\\xe6\\x95\\xb0\n"
  "string[]    params         # \\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe7\\x9a\\x84\\xe5\\x8f\\x82\\xe6\\x95\\xb0\\xe5\\x80\\xbc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__msg__Command__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__msg__Command__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2659, 2659},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__msg__Command__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__msg__Command__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

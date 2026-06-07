// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:srv/LargeModelRequestTask.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/srv/detail/large_model_request_task__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__LargeModelRequestTask__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x8f, 0x11, 0x67, 0xac, 0xf7, 0xcb, 0x6d,
      0x13, 0x5d, 0x19, 0x0d, 0xee, 0xb6, 0xc1, 0xec,
      0xa6, 0x14, 0x8d, 0x23, 0xcd, 0x6a, 0x3b, 0x7a,
      0x37, 0x31, 0xdd, 0xc3, 0xed, 0x11, 0xe0, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__LargeModelRequestTask_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x1d, 0x0a, 0xdd, 0xac, 0x7c, 0x38, 0x05,
      0xae, 0x2a, 0x5f, 0x48, 0xbb, 0x0d, 0xae, 0xb4,
      0xb4, 0x34, 0xfd, 0x65, 0x20, 0x0a, 0x6b, 0x37,
      0xc2, 0x32, 0x43, 0xfd, 0x56, 0xb1, 0xbe, 0xde,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__LargeModelRequestTask_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x62, 0xc1, 0x2c, 0x07, 0xe2, 0xe8, 0xdd,
      0x09, 0x52, 0x8d, 0xe2, 0x46, 0xe1, 0x5d, 0x89,
      0x6d, 0x75, 0x21, 0x3e, 0xde, 0x2e, 0x87, 0xff,
      0x74, 0xb4, 0x6a, 0xf0, 0x63, 0x4b, 0x40, 0x05,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__LargeModelRequestTask_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x60, 0xee, 0x79, 0x2a, 0x4c, 0x39, 0x9e,
      0xb6, 0x17, 0xeb, 0xd0, 0x9c, 0x2d, 0x85, 0x6e,
      0xe3, 0xff, 0x01, 0xff, 0xa0, 0xa4, 0x4d, 0x14,
      0x9c, 0xf1, 0x28, 0x01, 0xed, 0x4d, 0xf4, 0x20,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ymrobot_msgs__srv__LargeModelRequestTask__TYPE_NAME[] = "ymrobot_msgs/srv/LargeModelRequestTask";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ymrobot_msgs__srv__LargeModelRequestTask_Event__TYPE_NAME[] = "ymrobot_msgs/srv/LargeModelRequestTask_Event";
static char ymrobot_msgs__srv__LargeModelRequestTask_Request__TYPE_NAME[] = "ymrobot_msgs/srv/LargeModelRequestTask_Request";
static char ymrobot_msgs__srv__LargeModelRequestTask_Response__TYPE_NAME[] = "ymrobot_msgs/srv/LargeModelRequestTask_Response";

// Define type names, field names, and default values
static char ymrobot_msgs__srv__LargeModelRequestTask__FIELD_NAME__request_message[] = "request_message";
static char ymrobot_msgs__srv__LargeModelRequestTask__FIELD_NAME__response_message[] = "response_message";
static char ymrobot_msgs__srv__LargeModelRequestTask__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__LargeModelRequestTask__FIELDS[] = {
  {
    {ymrobot_msgs__srv__LargeModelRequestTask__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__LargeModelRequestTask_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__LargeModelRequestTask_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__LargeModelRequestTask_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__LargeModelRequestTask__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__LargeModelRequestTask__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__LargeModelRequestTask__TYPE_NAME, 38, 38},
      {ymrobot_msgs__srv__LargeModelRequestTask__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__LargeModelRequestTask__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__LargeModelRequestTask_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__LargeModelRequestTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ymrobot_msgs__srv__LargeModelRequestTask_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__larget_mode_task_type[] = "larget_mode_task_type";
static char ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__mark_point_name[] = "mark_point_name";
static char ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__mark_point_name_list[] = "mark_point_name_list";
static char ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__guidance_task_name[] = "guidance_task_name";
static char ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__upper_climb_fixed_action[] = "upper_climb_fixed_action";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELDS[] = {
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__larget_mode_task_type, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__mark_point_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__mark_point_name_list, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__guidance_task_name, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELD_NAME__upper_climb_fixed_action, 24, 24},
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
ymrobot_msgs__srv__LargeModelRequestTask_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__LargeModelRequestTask_Request__TYPE_NAME, 46, 46},
      {ymrobot_msgs__srv__LargeModelRequestTask_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELD_NAME__success[] = "success";
static char ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELD_NAME__error_code[] = "error_code";
static char ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELDS[] = {
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELD_NAME__message, 7, 7},
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
ymrobot_msgs__srv__LargeModelRequestTask_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__LargeModelRequestTask_Response__TYPE_NAME, 47, 47},
      {ymrobot_msgs__srv__LargeModelRequestTask_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELD_NAME__info[] = "info";
static char ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELD_NAME__request[] = "request";
static char ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELDS[] = {
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__LargeModelRequestTask_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__LargeModelRequestTask_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__LargeModelRequestTask_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__LargeModelRequestTask_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__LargeModelRequestTask_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__LargeModelRequestTask_Event__TYPE_NAME, 44, 44},
      {ymrobot_msgs__srv__LargeModelRequestTask_Event__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__LargeModelRequestTask_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__LargeModelRequestTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__LargeModelRequestTask_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8       larget_mode_task_type   # \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b 0\\xef\\xbc\\x9a\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\\xe5\\x88\\xb0\\xe6\\x9f\\x90\\xe4\\xb8\\xaa\\xe6\\xa0\\x87\\xe8\\xae\\xb0\\xe7\\x82\\xb9  1\\xef\\xbc\\x9a\\xe5\\xa4\\x9a\\xe7\\x82\\xb9\\xe5\\xaf\\xbc\\xe8\\x88\\xaa  2\\xef\\xbc\\x9a\\xe5\\xaf\\xbc\\xe8\\xa7\\x88\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1  3: \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "string      mark_point_name         # \\xe6\\xa0\\x87\\xe8\\xae\\xb0\\xe7\\x82\\xb9\\xe4\\xbd\\x8d\\xe5\\x90\\x8d\\xe7\\xa7\\xb0  --- \\xe7\\x94\\xa8\\xe4\\xba\\x8e\\xe5\\x8d\\x95\\xe7\\x82\\xb9\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "string[]    mark_point_name_list    # \\xe5\\xa4\\x9a\\xe7\\x82\\xb9\\xe5\\xaf\\xbc\\xe8\\x88\\xaa\n"
  "string      guidance_task_name      # \\xe5\\xaf\\xbc\\xe8\\xa7\\x88\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\x90\\x8d\\xe7\\xa7\\xb0\n"
  "uint8       upper_climb_fixed_action # \\xe4\\xb8\\x8a\\xe8\\x82\\xa2\\xe5\\x9b\\xba\\xe5\\xae\\x9a\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe7\\xa0\\x81\n"
  "---\n"
  "bool        success                 # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\n"
  "uint8       error_code              # \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe7\\xa0\\x81    0 -- \\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5  1--\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\x9c\\x89\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\x9c\\xa8\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe4\\xb8\\xad  2--\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe5\\x9c\\xa8\\xe5\\x85\\x85\\xe7\\x94\\xb5  3--\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe5\\x87\\xba\\xe7\\x8e\\xb0\\xe6\\x95\\x85\\xe9\\x9a\\x9c  4--\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe5\\x9c\\xa8\\xe5\\x8d\\x87\\xe7\\xba\\xa7\\xe4\\xb8\\xad \n"
  "string      message                 # \\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe5\\x8f\\x8d\\xe9\\xa6\\x88 -- \\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe5\\x8e\\x9f\\xe5\\x9b\\xa0 \\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe4\\xba\\x86 \\xe5\\x95\\xa5\\xe7\\x9a\\x84......";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__LargeModelRequestTask__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__LargeModelRequestTask__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 492, 492},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__LargeModelRequestTask_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__LargeModelRequestTask_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__LargeModelRequestTask_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__LargeModelRequestTask_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__LargeModelRequestTask_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__LargeModelRequestTask_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__LargeModelRequestTask__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__LargeModelRequestTask__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__LargeModelRequestTask_Event__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__LargeModelRequestTask_Request__get_individual_type_description_source(NULL);
    sources[5] = *ymrobot_msgs__srv__LargeModelRequestTask_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__LargeModelRequestTask_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__LargeModelRequestTask_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__LargeModelRequestTask_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__LargeModelRequestTask_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__LargeModelRequestTask_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__LargeModelRequestTask_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__LargeModelRequestTask_Request__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__LargeModelRequestTask_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

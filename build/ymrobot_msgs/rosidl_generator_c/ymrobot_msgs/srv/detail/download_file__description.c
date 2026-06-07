// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ymrobot_msgs:srv/DownloadFile.idl
// generated code does not contain a copyright notice

#include "ymrobot_msgs/srv/detail/download_file__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__DownloadFile__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xc3, 0x6e, 0x60, 0xc3, 0xb4, 0x7f, 0x47,
      0x88, 0x1a, 0x68, 0x54, 0x4a, 0xb6, 0x3f, 0x37,
      0x3d, 0xbc, 0xb1, 0x95, 0xa8, 0xfc, 0xa7, 0x2d,
      0xf6, 0xef, 0x43, 0x60, 0xa9, 0x73, 0x1e, 0x74,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__DownloadFile_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0xb5, 0x33, 0xc4, 0x54, 0xbc, 0x3a, 0x3f,
      0x56, 0xb6, 0xa8, 0x0d, 0x30, 0x31, 0x4f, 0x4d,
      0xbe, 0x73, 0x7b, 0x5b, 0xc4, 0x71, 0x71, 0x56,
      0x75, 0x69, 0x30, 0xeb, 0xa3, 0x9b, 0x2c, 0xe3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__DownloadFile_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xf9, 0x6f, 0x69, 0x21, 0xce, 0x81, 0xfe,
      0x02, 0x53, 0x08, 0x3b, 0x65, 0x3e, 0x57, 0xe7,
      0x30, 0xf7, 0x84, 0x59, 0xfb, 0x01, 0x8d, 0x89,
      0xf5, 0xb1, 0x85, 0xd6, 0x86, 0xef, 0xd3, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ymrobot_msgs
const rosidl_type_hash_t *
ymrobot_msgs__srv__DownloadFile_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x17, 0x6f, 0xcf, 0xa6, 0x37, 0x9f, 0x71,
      0xa1, 0x11, 0x5a, 0x3b, 0x04, 0x13, 0x24, 0x16,
      0x7a, 0xb9, 0xb2, 0x7b, 0x28, 0x31, 0x24, 0x3d,
      0xd7, 0xd3, 0x2b, 0xf5, 0x0c, 0x5f, 0x49, 0xf6,
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

static char ymrobot_msgs__srv__DownloadFile__TYPE_NAME[] = "ymrobot_msgs/srv/DownloadFile";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ymrobot_msgs__srv__DownloadFile_Event__TYPE_NAME[] = "ymrobot_msgs/srv/DownloadFile_Event";
static char ymrobot_msgs__srv__DownloadFile_Request__TYPE_NAME[] = "ymrobot_msgs/srv/DownloadFile_Request";
static char ymrobot_msgs__srv__DownloadFile_Response__TYPE_NAME[] = "ymrobot_msgs/srv/DownloadFile_Response";

// Define type names, field names, and default values
static char ymrobot_msgs__srv__DownloadFile__FIELD_NAME__request_message[] = "request_message";
static char ymrobot_msgs__srv__DownloadFile__FIELD_NAME__response_message[] = "response_message";
static char ymrobot_msgs__srv__DownloadFile__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__DownloadFile__FIELDS[] = {
  {
    {ymrobot_msgs__srv__DownloadFile__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__DownloadFile_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__DownloadFile_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ymrobot_msgs__srv__DownloadFile_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__DownloadFile__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__DownloadFile__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__DownloadFile__TYPE_NAME, 29, 29},
      {ymrobot_msgs__srv__DownloadFile__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__DownloadFile__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__DownloadFile_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__DownloadFile_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ymrobot_msgs__srv__DownloadFile_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__DownloadFile_Request__FIELD_NAME__url[] = "url";
static char ymrobot_msgs__srv__DownloadFile_Request__FIELD_NAME__save_path[] = "save_path";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__DownloadFile_Request__FIELDS[] = {
  {
    {ymrobot_msgs__srv__DownloadFile_Request__FIELD_NAME__url, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Request__FIELD_NAME__save_path, 9, 9},
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
ymrobot_msgs__srv__DownloadFile_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__DownloadFile_Request__TYPE_NAME, 37, 37},
      {ymrobot_msgs__srv__DownloadFile_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__DownloadFile_Response__FIELD_NAME__success[] = "success";
static char ymrobot_msgs__srv__DownloadFile_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__DownloadFile_Response__FIELDS[] = {
  {
    {ymrobot_msgs__srv__DownloadFile_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Response__FIELD_NAME__message, 7, 7},
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
ymrobot_msgs__srv__DownloadFile_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__DownloadFile_Response__TYPE_NAME, 38, 38},
      {ymrobot_msgs__srv__DownloadFile_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ymrobot_msgs__srv__DownloadFile_Event__FIELD_NAME__info[] = "info";
static char ymrobot_msgs__srv__DownloadFile_Event__FIELD_NAME__request[] = "request";
static char ymrobot_msgs__srv__DownloadFile_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ymrobot_msgs__srv__DownloadFile_Event__FIELDS[] = {
  {
    {ymrobot_msgs__srv__DownloadFile_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__DownloadFile_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ymrobot_msgs__srv__DownloadFile_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ymrobot_msgs__srv__DownloadFile_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ymrobot_msgs__srv__DownloadFile_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ymrobot_msgs__srv__DownloadFile_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ymrobot_msgs__srv__DownloadFile_Event__TYPE_NAME, 35, 35},
      {ymrobot_msgs__srv__DownloadFile_Event__FIELDS, 3, 3},
    },
    {ymrobot_msgs__srv__DownloadFile_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ymrobot_msgs__srv__DownloadFile_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ymrobot_msgs__srv__DownloadFile_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string url      \n"
  "string save_path\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__DownloadFile__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__DownloadFile__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__DownloadFile_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__DownloadFile_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__DownloadFile_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__DownloadFile_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ymrobot_msgs__srv__DownloadFile_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ymrobot_msgs__srv__DownloadFile_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__DownloadFile__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__DownloadFile__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__DownloadFile_Event__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__DownloadFile_Request__get_individual_type_description_source(NULL);
    sources[5] = *ymrobot_msgs__srv__DownloadFile_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__DownloadFile_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__DownloadFile_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__DownloadFile_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__DownloadFile_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ymrobot_msgs__srv__DownloadFile_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ymrobot_msgs__srv__DownloadFile_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ymrobot_msgs__srv__DownloadFile_Request__get_individual_type_description_source(NULL);
    sources[4] = *ymrobot_msgs__srv__DownloadFile_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

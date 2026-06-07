// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/VoiceMessage.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/voice_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fixed_audio_name`
// Member `timbre`
// Member `synthetic_audio_txt`
// Member `synthetic_audio_title`
// Member `delete_fixed_audio`
// Member `play_online_audio`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__VoiceMessage__init(ymrobot_msgs__msg__VoiceMessage * msg)
{
  if (!msg) {
    return false;
  }
  // audio_task_type
  // fixed_audio_name
  if (!rosidl_runtime_c__String__init(&msg->fixed_audio_name)) {
    ymrobot_msgs__msg__VoiceMessage__fini(msg);
    return false;
  }
  // timbre
  if (!rosidl_runtime_c__String__init(&msg->timbre)) {
    ymrobot_msgs__msg__VoiceMessage__fini(msg);
    return false;
  }
  // synthetic_audio_txt
  if (!rosidl_runtime_c__String__init(&msg->synthetic_audio_txt)) {
    ymrobot_msgs__msg__VoiceMessage__fini(msg);
    return false;
  }
  // synthetic_audio_title
  if (!rosidl_runtime_c__String__init(&msg->synthetic_audio_title)) {
    ymrobot_msgs__msg__VoiceMessage__fini(msg);
    return false;
  }
  // delete_fixed_audio
  if (!rosidl_runtime_c__String__init(&msg->delete_fixed_audio)) {
    ymrobot_msgs__msg__VoiceMessage__fini(msg);
    return false;
  }
  // play_online_audio
  if (!rosidl_runtime_c__String__init(&msg->play_online_audio)) {
    ymrobot_msgs__msg__VoiceMessage__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__VoiceMessage__fini(ymrobot_msgs__msg__VoiceMessage * msg)
{
  if (!msg) {
    return;
  }
  // audio_task_type
  // fixed_audio_name
  rosidl_runtime_c__String__fini(&msg->fixed_audio_name);
  // timbre
  rosidl_runtime_c__String__fini(&msg->timbre);
  // synthetic_audio_txt
  rosidl_runtime_c__String__fini(&msg->synthetic_audio_txt);
  // synthetic_audio_title
  rosidl_runtime_c__String__fini(&msg->synthetic_audio_title);
  // delete_fixed_audio
  rosidl_runtime_c__String__fini(&msg->delete_fixed_audio);
  // play_online_audio
  rosidl_runtime_c__String__fini(&msg->play_online_audio);
}

bool
ymrobot_msgs__msg__VoiceMessage__are_equal(const ymrobot_msgs__msg__VoiceMessage * lhs, const ymrobot_msgs__msg__VoiceMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // audio_task_type
  if (lhs->audio_task_type != rhs->audio_task_type) {
    return false;
  }
  // fixed_audio_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fixed_audio_name), &(rhs->fixed_audio_name)))
  {
    return false;
  }
  // timbre
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->timbre), &(rhs->timbre)))
  {
    return false;
  }
  // synthetic_audio_txt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->synthetic_audio_txt), &(rhs->synthetic_audio_txt)))
  {
    return false;
  }
  // synthetic_audio_title
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->synthetic_audio_title), &(rhs->synthetic_audio_title)))
  {
    return false;
  }
  // delete_fixed_audio
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->delete_fixed_audio), &(rhs->delete_fixed_audio)))
  {
    return false;
  }
  // play_online_audio
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->play_online_audio), &(rhs->play_online_audio)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__VoiceMessage__copy(
  const ymrobot_msgs__msg__VoiceMessage * input,
  ymrobot_msgs__msg__VoiceMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // audio_task_type
  output->audio_task_type = input->audio_task_type;
  // fixed_audio_name
  if (!rosidl_runtime_c__String__copy(
      &(input->fixed_audio_name), &(output->fixed_audio_name)))
  {
    return false;
  }
  // timbre
  if (!rosidl_runtime_c__String__copy(
      &(input->timbre), &(output->timbre)))
  {
    return false;
  }
  // synthetic_audio_txt
  if (!rosidl_runtime_c__String__copy(
      &(input->synthetic_audio_txt), &(output->synthetic_audio_txt)))
  {
    return false;
  }
  // synthetic_audio_title
  if (!rosidl_runtime_c__String__copy(
      &(input->synthetic_audio_title), &(output->synthetic_audio_title)))
  {
    return false;
  }
  // delete_fixed_audio
  if (!rosidl_runtime_c__String__copy(
      &(input->delete_fixed_audio), &(output->delete_fixed_audio)))
  {
    return false;
  }
  // play_online_audio
  if (!rosidl_runtime_c__String__copy(
      &(input->play_online_audio), &(output->play_online_audio)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__VoiceMessage *
ymrobot_msgs__msg__VoiceMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__VoiceMessage * msg = (ymrobot_msgs__msg__VoiceMessage *)allocator.allocate(sizeof(ymrobot_msgs__msg__VoiceMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__VoiceMessage));
  bool success = ymrobot_msgs__msg__VoiceMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__VoiceMessage__destroy(ymrobot_msgs__msg__VoiceMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__VoiceMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__VoiceMessage__Sequence__init(ymrobot_msgs__msg__VoiceMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__VoiceMessage * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__VoiceMessage *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__VoiceMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__VoiceMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__VoiceMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ymrobot_msgs__msg__VoiceMessage__Sequence__fini(ymrobot_msgs__msg__VoiceMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ymrobot_msgs__msg__VoiceMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ymrobot_msgs__msg__VoiceMessage__Sequence *
ymrobot_msgs__msg__VoiceMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__VoiceMessage__Sequence * array = (ymrobot_msgs__msg__VoiceMessage__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__VoiceMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__VoiceMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__VoiceMessage__Sequence__destroy(ymrobot_msgs__msg__VoiceMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__VoiceMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__VoiceMessage__Sequence__are_equal(const ymrobot_msgs__msg__VoiceMessage__Sequence * lhs, const ymrobot_msgs__msg__VoiceMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__VoiceMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__VoiceMessage__Sequence__copy(
  const ymrobot_msgs__msg__VoiceMessage__Sequence * input,
  ymrobot_msgs__msg__VoiceMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__VoiceMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__VoiceMessage * data =
      (ymrobot_msgs__msg__VoiceMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__VoiceMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__VoiceMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__VoiceMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

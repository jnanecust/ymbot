// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:action/AudioControl.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/action/detail/audio_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fixed_audio_name`
// Member `synthetic_audio_txt`
// Member `synthetic_audio_title`
// Member `delete_fixed_audio`
// Member `play_online_audio`
// Member `download_online_audio_url`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__action__AudioControl_Goal__init(ymrobot_msgs__action__AudioControl_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // audio_task_type
  // fixed_audio_name
  if (!rosidl_runtime_c__String__init(&msg->fixed_audio_name)) {
    ymrobot_msgs__action__AudioControl_Goal__fini(msg);
    return false;
  }
  // timbre
  // synthetic_audio_txt
  if (!rosidl_runtime_c__String__init(&msg->synthetic_audio_txt)) {
    ymrobot_msgs__action__AudioControl_Goal__fini(msg);
    return false;
  }
  // synthetic_audio_title
  if (!rosidl_runtime_c__String__init(&msg->synthetic_audio_title)) {
    ymrobot_msgs__action__AudioControl_Goal__fini(msg);
    return false;
  }
  // delete_fixed_audio
  if (!rosidl_runtime_c__String__init(&msg->delete_fixed_audio)) {
    ymrobot_msgs__action__AudioControl_Goal__fini(msg);
    return false;
  }
  // play_online_audio
  if (!rosidl_runtime_c__String__init(&msg->play_online_audio)) {
    ymrobot_msgs__action__AudioControl_Goal__fini(msg);
    return false;
  }
  // download_online_audio_url
  if (!rosidl_runtime_c__String__init(&msg->download_online_audio_url)) {
    ymrobot_msgs__action__AudioControl_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_Goal__fini(ymrobot_msgs__action__AudioControl_Goal * msg)
{
  if (!msg) {
    return;
  }
  // audio_task_type
  // fixed_audio_name
  rosidl_runtime_c__String__fini(&msg->fixed_audio_name);
  // timbre
  // synthetic_audio_txt
  rosidl_runtime_c__String__fini(&msg->synthetic_audio_txt);
  // synthetic_audio_title
  rosidl_runtime_c__String__fini(&msg->synthetic_audio_title);
  // delete_fixed_audio
  rosidl_runtime_c__String__fini(&msg->delete_fixed_audio);
  // play_online_audio
  rosidl_runtime_c__String__fini(&msg->play_online_audio);
  // download_online_audio_url
  rosidl_runtime_c__String__fini(&msg->download_online_audio_url);
}

bool
ymrobot_msgs__action__AudioControl_Goal__are_equal(const ymrobot_msgs__action__AudioControl_Goal * lhs, const ymrobot_msgs__action__AudioControl_Goal * rhs)
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
  if (lhs->timbre != rhs->timbre) {
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
  // download_online_audio_url
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->download_online_audio_url), &(rhs->download_online_audio_url)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_Goal__copy(
  const ymrobot_msgs__action__AudioControl_Goal * input,
  ymrobot_msgs__action__AudioControl_Goal * output)
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
  output->timbre = input->timbre;
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
  // download_online_audio_url
  if (!rosidl_runtime_c__String__copy(
      &(input->download_online_audio_url), &(output->download_online_audio_url)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_Goal *
ymrobot_msgs__action__AudioControl_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Goal * msg = (ymrobot_msgs__action__AudioControl_Goal *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_Goal));
  bool success = ymrobot_msgs__action__AudioControl_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_Goal__destroy(ymrobot_msgs__action__AudioControl_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_Goal__Sequence__init(ymrobot_msgs__action__AudioControl_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Goal * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_Goal *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_Goal__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_Goal__Sequence__fini(ymrobot_msgs__action__AudioControl_Goal__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_Goal__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_Goal__Sequence *
ymrobot_msgs__action__AudioControl_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Goal__Sequence * array = (ymrobot_msgs__action__AudioControl_Goal__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_Goal__Sequence__destroy(ymrobot_msgs__action__AudioControl_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_Goal__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_Goal__Sequence * lhs, const ymrobot_msgs__action__AudioControl_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_Goal__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_Goal__Sequence * input,
  ymrobot_msgs__action__AudioControl_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_Goal * data =
      (ymrobot_msgs__action__AudioControl_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__action__AudioControl_Result__init(ymrobot_msgs__action__AudioControl_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ymrobot_msgs__action__AudioControl_Result__fini(msg);
    return false;
  }
  // total_elapsed_time
  return true;
}

void
ymrobot_msgs__action__AudioControl_Result__fini(ymrobot_msgs__action__AudioControl_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // total_elapsed_time
}

bool
ymrobot_msgs__action__AudioControl_Result__are_equal(const ymrobot_msgs__action__AudioControl_Result * lhs, const ymrobot_msgs__action__AudioControl_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // total_elapsed_time
  if (lhs->total_elapsed_time != rhs->total_elapsed_time) {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_Result__copy(
  const ymrobot_msgs__action__AudioControl_Result * input,
  ymrobot_msgs__action__AudioControl_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // total_elapsed_time
  output->total_elapsed_time = input->total_elapsed_time;
  return true;
}

ymrobot_msgs__action__AudioControl_Result *
ymrobot_msgs__action__AudioControl_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Result * msg = (ymrobot_msgs__action__AudioControl_Result *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_Result));
  bool success = ymrobot_msgs__action__AudioControl_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_Result__destroy(ymrobot_msgs__action__AudioControl_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_Result__Sequence__init(ymrobot_msgs__action__AudioControl_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Result * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_Result *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_Result__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_Result__Sequence__fini(ymrobot_msgs__action__AudioControl_Result__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_Result__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_Result__Sequence *
ymrobot_msgs__action__AudioControl_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Result__Sequence * array = (ymrobot_msgs__action__AudioControl_Result__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_Result__Sequence__destroy(ymrobot_msgs__action__AudioControl_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_Result__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_Result__Sequence * lhs, const ymrobot_msgs__action__AudioControl_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_Result__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_Result__Sequence * input,
  ymrobot_msgs__action__AudioControl_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_Result * data =
      (ymrobot_msgs__action__AudioControl_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__action__AudioControl_Feedback__init(ymrobot_msgs__action__AudioControl_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ymrobot_msgs__action__AudioControl_Feedback__fini(msg);
    return false;
  }
  // total_elapsed_time
  return true;
}

void
ymrobot_msgs__action__AudioControl_Feedback__fini(ymrobot_msgs__action__AudioControl_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // total_elapsed_time
}

bool
ymrobot_msgs__action__AudioControl_Feedback__are_equal(const ymrobot_msgs__action__AudioControl_Feedback * lhs, const ymrobot_msgs__action__AudioControl_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // total_elapsed_time
  if (lhs->total_elapsed_time != rhs->total_elapsed_time) {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_Feedback__copy(
  const ymrobot_msgs__action__AudioControl_Feedback * input,
  ymrobot_msgs__action__AudioControl_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // total_elapsed_time
  output->total_elapsed_time = input->total_elapsed_time;
  return true;
}

ymrobot_msgs__action__AudioControl_Feedback *
ymrobot_msgs__action__AudioControl_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Feedback * msg = (ymrobot_msgs__action__AudioControl_Feedback *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_Feedback));
  bool success = ymrobot_msgs__action__AudioControl_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_Feedback__destroy(ymrobot_msgs__action__AudioControl_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_Feedback__Sequence__init(ymrobot_msgs__action__AudioControl_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Feedback * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_Feedback *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_Feedback__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_Feedback__Sequence__fini(ymrobot_msgs__action__AudioControl_Feedback__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_Feedback__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_Feedback__Sequence *
ymrobot_msgs__action__AudioControl_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_Feedback__Sequence * array = (ymrobot_msgs__action__AudioControl_Feedback__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_Feedback__Sequence__destroy(ymrobot_msgs__action__AudioControl_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_Feedback__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_Feedback__Sequence * lhs, const ymrobot_msgs__action__AudioControl_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_Feedback__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_Feedback__Sequence * input,
  ymrobot_msgs__action__AudioControl_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_Feedback * data =
      (ymrobot_msgs__action__AudioControl_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ymrobot_msgs/action/detail/audio_control__functions.h"

bool
ymrobot_msgs__action__AudioControl_SendGoal_Request__init(ymrobot_msgs__action__AudioControl_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ymrobot_msgs__action__AudioControl_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ymrobot_msgs__action__AudioControl_Goal__init(&msg->goal)) {
    ymrobot_msgs__action__AudioControl_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Request__fini(ymrobot_msgs__action__AudioControl_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ymrobot_msgs__action__AudioControl_Goal__fini(&msg->goal);
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Request__are_equal(const ymrobot_msgs__action__AudioControl_SendGoal_Request * lhs, const ymrobot_msgs__action__AudioControl_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ymrobot_msgs__action__AudioControl_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Request__copy(
  const ymrobot_msgs__action__AudioControl_SendGoal_Request * input,
  ymrobot_msgs__action__AudioControl_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ymrobot_msgs__action__AudioControl_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_SendGoal_Request *
ymrobot_msgs__action__AudioControl_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Request * msg = (ymrobot_msgs__action__AudioControl_SendGoal_Request *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Request));
  bool success = ymrobot_msgs__action__AudioControl_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Request__destroy(ymrobot_msgs__action__AudioControl_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__init(ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Request * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_SendGoal_Request__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__fini(ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_SendGoal_Request__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence *
ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * array = (ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__destroy(ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * lhs, const ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * input,
  ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_SendGoal_Request * data =
      (ymrobot_msgs__action__AudioControl_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ymrobot_msgs__action__AudioControl_SendGoal_Response__init(ymrobot_msgs__action__AudioControl_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ymrobot_msgs__action__AudioControl_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Response__fini(ymrobot_msgs__action__AudioControl_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Response__are_equal(const ymrobot_msgs__action__AudioControl_SendGoal_Response * lhs, const ymrobot_msgs__action__AudioControl_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Response__copy(
  const ymrobot_msgs__action__AudioControl_SendGoal_Response * input,
  ymrobot_msgs__action__AudioControl_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_SendGoal_Response *
ymrobot_msgs__action__AudioControl_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Response * msg = (ymrobot_msgs__action__AudioControl_SendGoal_Response *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Response));
  bool success = ymrobot_msgs__action__AudioControl_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Response__destroy(ymrobot_msgs__action__AudioControl_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__init(ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Response * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_SendGoal_Response__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__fini(ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_SendGoal_Response__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence *
ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * array = (ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__destroy(ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * lhs, const ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * input,
  ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_SendGoal_Response * data =
      (ymrobot_msgs__action__AudioControl_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ymrobot_msgs/action/detail/audio_control__functions.h"

bool
ymrobot_msgs__action__AudioControl_SendGoal_Event__init(ymrobot_msgs__action__AudioControl_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(ymrobot_msgs__action__AudioControl_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Event__are_equal(const ymrobot_msgs__action__AudioControl_SendGoal_Event * lhs, const ymrobot_msgs__action__AudioControl_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Event__copy(
  const ymrobot_msgs__action__AudioControl_SendGoal_Event * input,
  ymrobot_msgs__action__AudioControl_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ymrobot_msgs__action__AudioControl_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ymrobot_msgs__action__AudioControl_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_SendGoal_Event *
ymrobot_msgs__action__AudioControl_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Event * msg = (ymrobot_msgs__action__AudioControl_SendGoal_Event *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Event));
  bool success = ymrobot_msgs__action__AudioControl_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Event__destroy(ymrobot_msgs__action__AudioControl_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__init(ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Event * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_SendGoal_Event *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__fini(ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence *
ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * array = (ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__destroy(ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * lhs, const ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * input,
  ymrobot_msgs__action__AudioControl_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_SendGoal_Event * data =
      (ymrobot_msgs__action__AudioControl_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ymrobot_msgs__action__AudioControl_GetResult_Request__init(ymrobot_msgs__action__AudioControl_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ymrobot_msgs__action__AudioControl_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Request__fini(ymrobot_msgs__action__AudioControl_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Request__are_equal(const ymrobot_msgs__action__AudioControl_GetResult_Request * lhs, const ymrobot_msgs__action__AudioControl_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Request__copy(
  const ymrobot_msgs__action__AudioControl_GetResult_Request * input,
  ymrobot_msgs__action__AudioControl_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_GetResult_Request *
ymrobot_msgs__action__AudioControl_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Request * msg = (ymrobot_msgs__action__AudioControl_GetResult_Request *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_GetResult_Request));
  bool success = ymrobot_msgs__action__AudioControl_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Request__destroy(ymrobot_msgs__action__AudioControl_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__init(ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Request * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_GetResult_Request *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_GetResult_Request__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__fini(ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_GetResult_Request__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence *
ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * array = (ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__destroy(ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * lhs, const ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * input,
  ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_GetResult_Request * data =
      (ymrobot_msgs__action__AudioControl_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ymrobot_msgs/action/detail/audio_control__functions.h"

bool
ymrobot_msgs__action__AudioControl_GetResult_Response__init(ymrobot_msgs__action__AudioControl_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ymrobot_msgs__action__AudioControl_Result__init(&msg->result)) {
    ymrobot_msgs__action__AudioControl_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Response__fini(ymrobot_msgs__action__AudioControl_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ymrobot_msgs__action__AudioControl_Result__fini(&msg->result);
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Response__are_equal(const ymrobot_msgs__action__AudioControl_GetResult_Response * lhs, const ymrobot_msgs__action__AudioControl_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ymrobot_msgs__action__AudioControl_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Response__copy(
  const ymrobot_msgs__action__AudioControl_GetResult_Response * input,
  ymrobot_msgs__action__AudioControl_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ymrobot_msgs__action__AudioControl_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_GetResult_Response *
ymrobot_msgs__action__AudioControl_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Response * msg = (ymrobot_msgs__action__AudioControl_GetResult_Response *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_GetResult_Response));
  bool success = ymrobot_msgs__action__AudioControl_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Response__destroy(ymrobot_msgs__action__AudioControl_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__init(ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Response * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_GetResult_Response *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_GetResult_Response__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__fini(ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_GetResult_Response__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence *
ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * array = (ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__destroy(ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * lhs, const ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * input,
  ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_GetResult_Response * data =
      (ymrobot_msgs__action__AudioControl_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ymrobot_msgs/action/detail/audio_control__functions.h"

bool
ymrobot_msgs__action__AudioControl_GetResult_Event__init(ymrobot_msgs__action__AudioControl_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ymrobot_msgs__action__AudioControl_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__init(&msg->request, 0)) {
    ymrobot_msgs__action__AudioControl_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__init(&msg->response, 0)) {
    ymrobot_msgs__action__AudioControl_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Event__fini(ymrobot_msgs__action__AudioControl_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__fini(&msg->request);
  // response
  ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__fini(&msg->response);
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Event__are_equal(const ymrobot_msgs__action__AudioControl_GetResult_Event * lhs, const ymrobot_msgs__action__AudioControl_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Event__copy(
  const ymrobot_msgs__action__AudioControl_GetResult_Event * input,
  ymrobot_msgs__action__AudioControl_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ymrobot_msgs__action__AudioControl_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ymrobot_msgs__action__AudioControl_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_GetResult_Event *
ymrobot_msgs__action__AudioControl_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Event * msg = (ymrobot_msgs__action__AudioControl_GetResult_Event *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_GetResult_Event));
  bool success = ymrobot_msgs__action__AudioControl_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Event__destroy(ymrobot_msgs__action__AudioControl_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__init(ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Event * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_GetResult_Event *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_GetResult_Event__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__fini(ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_GetResult_Event__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence *
ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * array = (ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__destroy(ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * lhs, const ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * input,
  ymrobot_msgs__action__AudioControl_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_GetResult_Event * data =
      (ymrobot_msgs__action__AudioControl_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ymrobot_msgs/action/detail/audio_control__functions.h"

bool
ymrobot_msgs__action__AudioControl_FeedbackMessage__init(ymrobot_msgs__action__AudioControl_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ymrobot_msgs__action__AudioControl_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ymrobot_msgs__action__AudioControl_Feedback__init(&msg->feedback)) {
    ymrobot_msgs__action__AudioControl_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__action__AudioControl_FeedbackMessage__fini(ymrobot_msgs__action__AudioControl_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ymrobot_msgs__action__AudioControl_Feedback__fini(&msg->feedback);
}

bool
ymrobot_msgs__action__AudioControl_FeedbackMessage__are_equal(const ymrobot_msgs__action__AudioControl_FeedbackMessage * lhs, const ymrobot_msgs__action__AudioControl_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ymrobot_msgs__action__AudioControl_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_FeedbackMessage__copy(
  const ymrobot_msgs__action__AudioControl_FeedbackMessage * input,
  ymrobot_msgs__action__AudioControl_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ymrobot_msgs__action__AudioControl_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__action__AudioControl_FeedbackMessage *
ymrobot_msgs__action__AudioControl_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_FeedbackMessage * msg = (ymrobot_msgs__action__AudioControl_FeedbackMessage *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__action__AudioControl_FeedbackMessage));
  bool success = ymrobot_msgs__action__AudioControl_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__action__AudioControl_FeedbackMessage__destroy(ymrobot_msgs__action__AudioControl_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__action__AudioControl_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__init(ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_FeedbackMessage * data = NULL;

  if (size) {
    data = (ymrobot_msgs__action__AudioControl_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__action__AudioControl_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__action__AudioControl_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__action__AudioControl_FeedbackMessage__fini(&data[i - 1]);
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
ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__fini(ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * array)
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
      ymrobot_msgs__action__AudioControl_FeedbackMessage__fini(&array->data[i]);
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

ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence *
ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * array = (ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__destroy(ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__are_equal(const ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * lhs, const ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence__copy(
  const ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * input,
  ymrobot_msgs__action__AudioControl_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__action__AudioControl_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__action__AudioControl_FeedbackMessage * data =
      (ymrobot_msgs__action__AudioControl_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__action__AudioControl_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__action__AudioControl_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__action__AudioControl_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

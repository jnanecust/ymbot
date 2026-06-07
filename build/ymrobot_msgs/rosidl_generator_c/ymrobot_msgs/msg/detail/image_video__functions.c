// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/ImageVideo.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/image_video__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detect_target_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__ImageVideo__init(ymrobot_msgs__msg__ImageVideo * msg)
{
  if (!msg) {
    return false;
  }
  // camera_task_type
  // number_of_photos
  // photos_interval
  // video_recording_time
  // detect_target_name
  if (!rosidl_runtime_c__String__init(&msg->detect_target_name)) {
    ymrobot_msgs__msg__ImageVideo__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__ImageVideo__fini(ymrobot_msgs__msg__ImageVideo * msg)
{
  if (!msg) {
    return;
  }
  // camera_task_type
  // number_of_photos
  // photos_interval
  // video_recording_time
  // detect_target_name
  rosidl_runtime_c__String__fini(&msg->detect_target_name);
}

bool
ymrobot_msgs__msg__ImageVideo__are_equal(const ymrobot_msgs__msg__ImageVideo * lhs, const ymrobot_msgs__msg__ImageVideo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_task_type
  if (lhs->camera_task_type != rhs->camera_task_type) {
    return false;
  }
  // number_of_photos
  if (lhs->number_of_photos != rhs->number_of_photos) {
    return false;
  }
  // photos_interval
  if (lhs->photos_interval != rhs->photos_interval) {
    return false;
  }
  // video_recording_time
  if (lhs->video_recording_time != rhs->video_recording_time) {
    return false;
  }
  // detect_target_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detect_target_name), &(rhs->detect_target_name)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__ImageVideo__copy(
  const ymrobot_msgs__msg__ImageVideo * input,
  ymrobot_msgs__msg__ImageVideo * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_task_type
  output->camera_task_type = input->camera_task_type;
  // number_of_photos
  output->number_of_photos = input->number_of_photos;
  // photos_interval
  output->photos_interval = input->photos_interval;
  // video_recording_time
  output->video_recording_time = input->video_recording_time;
  // detect_target_name
  if (!rosidl_runtime_c__String__copy(
      &(input->detect_target_name), &(output->detect_target_name)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__ImageVideo *
ymrobot_msgs__msg__ImageVideo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__ImageVideo * msg = (ymrobot_msgs__msg__ImageVideo *)allocator.allocate(sizeof(ymrobot_msgs__msg__ImageVideo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__ImageVideo));
  bool success = ymrobot_msgs__msg__ImageVideo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__ImageVideo__destroy(ymrobot_msgs__msg__ImageVideo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__ImageVideo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__ImageVideo__Sequence__init(ymrobot_msgs__msg__ImageVideo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__ImageVideo * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__ImageVideo *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__ImageVideo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__ImageVideo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__ImageVideo__fini(&data[i - 1]);
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
ymrobot_msgs__msg__ImageVideo__Sequence__fini(ymrobot_msgs__msg__ImageVideo__Sequence * array)
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
      ymrobot_msgs__msg__ImageVideo__fini(&array->data[i]);
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

ymrobot_msgs__msg__ImageVideo__Sequence *
ymrobot_msgs__msg__ImageVideo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__ImageVideo__Sequence * array = (ymrobot_msgs__msg__ImageVideo__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__ImageVideo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__ImageVideo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__ImageVideo__Sequence__destroy(ymrobot_msgs__msg__ImageVideo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__ImageVideo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__ImageVideo__Sequence__are_equal(const ymrobot_msgs__msg__ImageVideo__Sequence * lhs, const ymrobot_msgs__msg__ImageVideo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__ImageVideo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__ImageVideo__Sequence__copy(
  const ymrobot_msgs__msg__ImageVideo__Sequence * input,
  ymrobot_msgs__msg__ImageVideo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__ImageVideo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__ImageVideo * data =
      (ymrobot_msgs__msg__ImageVideo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__ImageVideo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__ImageVideo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__ImageVideo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

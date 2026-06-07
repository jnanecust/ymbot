// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/patrol_mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_video_msg`
#include "ymrobot_msgs/msg/detail/image_video__functions.h"
// Member `full_audio_name`
// Member `nav_name_list`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__PatrolMission__init(ymrobot_msgs__msg__PatrolMission * msg)
{
  if (!msg) {
    return false;
  }
  // image_video_msg
  if (!ymrobot_msgs__msg__ImageVideo__init(&msg->image_video_msg)) {
    ymrobot_msgs__msg__PatrolMission__fini(msg);
    return false;
  }
  // is_audio_played_throughout_the_entire_process
  // full_audio_name
  if (!rosidl_runtime_c__String__init(&msg->full_audio_name)) {
    ymrobot_msgs__msg__PatrolMission__fini(msg);
    return false;
  }
  // is_the_entire_process_recorded
  // is_activate_the_nearby_point
  // nearby_point_radius
  // nav_name_list
  if (!rosidl_runtime_c__String__Sequence__init(&msg->nav_name_list, 0)) {
    ymrobot_msgs__msg__PatrolMission__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__PatrolMission__fini(ymrobot_msgs__msg__PatrolMission * msg)
{
  if (!msg) {
    return;
  }
  // image_video_msg
  ymrobot_msgs__msg__ImageVideo__fini(&msg->image_video_msg);
  // is_audio_played_throughout_the_entire_process
  // full_audio_name
  rosidl_runtime_c__String__fini(&msg->full_audio_name);
  // is_the_entire_process_recorded
  // is_activate_the_nearby_point
  // nearby_point_radius
  // nav_name_list
  rosidl_runtime_c__String__Sequence__fini(&msg->nav_name_list);
}

bool
ymrobot_msgs__msg__PatrolMission__are_equal(const ymrobot_msgs__msg__PatrolMission * lhs, const ymrobot_msgs__msg__PatrolMission * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image_video_msg
  if (!ymrobot_msgs__msg__ImageVideo__are_equal(
      &(lhs->image_video_msg), &(rhs->image_video_msg)))
  {
    return false;
  }
  // is_audio_played_throughout_the_entire_process
  if (lhs->is_audio_played_throughout_the_entire_process != rhs->is_audio_played_throughout_the_entire_process) {
    return false;
  }
  // full_audio_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->full_audio_name), &(rhs->full_audio_name)))
  {
    return false;
  }
  // is_the_entire_process_recorded
  if (lhs->is_the_entire_process_recorded != rhs->is_the_entire_process_recorded) {
    return false;
  }
  // is_activate_the_nearby_point
  if (lhs->is_activate_the_nearby_point != rhs->is_activate_the_nearby_point) {
    return false;
  }
  // nearby_point_radius
  if (lhs->nearby_point_radius != rhs->nearby_point_radius) {
    return false;
  }
  // nav_name_list
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->nav_name_list), &(rhs->nav_name_list)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__PatrolMission__copy(
  const ymrobot_msgs__msg__PatrolMission * input,
  ymrobot_msgs__msg__PatrolMission * output)
{
  if (!input || !output) {
    return false;
  }
  // image_video_msg
  if (!ymrobot_msgs__msg__ImageVideo__copy(
      &(input->image_video_msg), &(output->image_video_msg)))
  {
    return false;
  }
  // is_audio_played_throughout_the_entire_process
  output->is_audio_played_throughout_the_entire_process = input->is_audio_played_throughout_the_entire_process;
  // full_audio_name
  if (!rosidl_runtime_c__String__copy(
      &(input->full_audio_name), &(output->full_audio_name)))
  {
    return false;
  }
  // is_the_entire_process_recorded
  output->is_the_entire_process_recorded = input->is_the_entire_process_recorded;
  // is_activate_the_nearby_point
  output->is_activate_the_nearby_point = input->is_activate_the_nearby_point;
  // nearby_point_radius
  output->nearby_point_radius = input->nearby_point_radius;
  // nav_name_list
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->nav_name_list), &(output->nav_name_list)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__PatrolMission *
ymrobot_msgs__msg__PatrolMission__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__PatrolMission * msg = (ymrobot_msgs__msg__PatrolMission *)allocator.allocate(sizeof(ymrobot_msgs__msg__PatrolMission), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__PatrolMission));
  bool success = ymrobot_msgs__msg__PatrolMission__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__PatrolMission__destroy(ymrobot_msgs__msg__PatrolMission * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__PatrolMission__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__PatrolMission__Sequence__init(ymrobot_msgs__msg__PatrolMission__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__PatrolMission * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__PatrolMission *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__PatrolMission), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__PatrolMission__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__PatrolMission__fini(&data[i - 1]);
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
ymrobot_msgs__msg__PatrolMission__Sequence__fini(ymrobot_msgs__msg__PatrolMission__Sequence * array)
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
      ymrobot_msgs__msg__PatrolMission__fini(&array->data[i]);
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

ymrobot_msgs__msg__PatrolMission__Sequence *
ymrobot_msgs__msg__PatrolMission__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__PatrolMission__Sequence * array = (ymrobot_msgs__msg__PatrolMission__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__PatrolMission__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__PatrolMission__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__PatrolMission__Sequence__destroy(ymrobot_msgs__msg__PatrolMission__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__PatrolMission__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__PatrolMission__Sequence__are_equal(const ymrobot_msgs__msg__PatrolMission__Sequence * lhs, const ymrobot_msgs__msg__PatrolMission__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__PatrolMission__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__PatrolMission__Sequence__copy(
  const ymrobot_msgs__msg__PatrolMission__Sequence * input,
  ymrobot_msgs__msg__PatrolMission__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__PatrolMission);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__PatrolMission * data =
      (ymrobot_msgs__msg__PatrolMission *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__PatrolMission__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__PatrolMission__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__PatrolMission__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

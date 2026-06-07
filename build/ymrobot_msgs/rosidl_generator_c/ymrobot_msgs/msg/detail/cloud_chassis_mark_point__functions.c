// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nav_target_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__CloudChassisMarkPoint__init(ymrobot_msgs__msg__CloudChassisMarkPoint * msg)
{
  if (!msg) {
    return false;
  }
  // nav_mode
  // nav_target_name
  if (!rosidl_runtime_c__String__init(&msg->nav_target_name)) {
    ymrobot_msgs__msg__CloudChassisMarkPoint__fini(msg);
    return false;
  }
  // nav_target_x
  // nav_target_y
  // nav_target_yaw
  // is_activate_the_nearby_point
  // nearby_point_radius
  return true;
}

void
ymrobot_msgs__msg__CloudChassisMarkPoint__fini(ymrobot_msgs__msg__CloudChassisMarkPoint * msg)
{
  if (!msg) {
    return;
  }
  // nav_mode
  // nav_target_name
  rosidl_runtime_c__String__fini(&msg->nav_target_name);
  // nav_target_x
  // nav_target_y
  // nav_target_yaw
  // is_activate_the_nearby_point
  // nearby_point_radius
}

bool
ymrobot_msgs__msg__CloudChassisMarkPoint__are_equal(const ymrobot_msgs__msg__CloudChassisMarkPoint * lhs, const ymrobot_msgs__msg__CloudChassisMarkPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nav_mode
  if (lhs->nav_mode != rhs->nav_mode) {
    return false;
  }
  // nav_target_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nav_target_name), &(rhs->nav_target_name)))
  {
    return false;
  }
  // nav_target_x
  if (lhs->nav_target_x != rhs->nav_target_x) {
    return false;
  }
  // nav_target_y
  if (lhs->nav_target_y != rhs->nav_target_y) {
    return false;
  }
  // nav_target_yaw
  if (lhs->nav_target_yaw != rhs->nav_target_yaw) {
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
  return true;
}

bool
ymrobot_msgs__msg__CloudChassisMarkPoint__copy(
  const ymrobot_msgs__msg__CloudChassisMarkPoint * input,
  ymrobot_msgs__msg__CloudChassisMarkPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // nav_mode
  output->nav_mode = input->nav_mode;
  // nav_target_name
  if (!rosidl_runtime_c__String__copy(
      &(input->nav_target_name), &(output->nav_target_name)))
  {
    return false;
  }
  // nav_target_x
  output->nav_target_x = input->nav_target_x;
  // nav_target_y
  output->nav_target_y = input->nav_target_y;
  // nav_target_yaw
  output->nav_target_yaw = input->nav_target_yaw;
  // is_activate_the_nearby_point
  output->is_activate_the_nearby_point = input->is_activate_the_nearby_point;
  // nearby_point_radius
  output->nearby_point_radius = input->nearby_point_radius;
  return true;
}

ymrobot_msgs__msg__CloudChassisMarkPoint *
ymrobot_msgs__msg__CloudChassisMarkPoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__CloudChassisMarkPoint * msg = (ymrobot_msgs__msg__CloudChassisMarkPoint *)allocator.allocate(sizeof(ymrobot_msgs__msg__CloudChassisMarkPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__CloudChassisMarkPoint));
  bool success = ymrobot_msgs__msg__CloudChassisMarkPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__CloudChassisMarkPoint__destroy(ymrobot_msgs__msg__CloudChassisMarkPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__CloudChassisMarkPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__init(ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__CloudChassisMarkPoint * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__CloudChassisMarkPoint *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__CloudChassisMarkPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__CloudChassisMarkPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__CloudChassisMarkPoint__fini(&data[i - 1]);
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
ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__fini(ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * array)
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
      ymrobot_msgs__msg__CloudChassisMarkPoint__fini(&array->data[i]);
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

ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence *
ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * array = (ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__destroy(ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__are_equal(const ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * lhs, const ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__CloudChassisMarkPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence__copy(
  const ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * input,
  ymrobot_msgs__msg__CloudChassisMarkPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__CloudChassisMarkPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__CloudChassisMarkPoint * data =
      (ymrobot_msgs__msg__CloudChassisMarkPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__CloudChassisMarkPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__CloudChassisMarkPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__CloudChassisMarkPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

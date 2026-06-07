// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/LedShow.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/led_show__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ymrobot_msgs__msg__LedShow__init(ymrobot_msgs__msg__LedShow * msg)
{
  if (!msg) {
    return false;
  }
  // luminance
  // color_r
  // color_g
  // color_b
  return true;
}

void
ymrobot_msgs__msg__LedShow__fini(ymrobot_msgs__msg__LedShow * msg)
{
  if (!msg) {
    return;
  }
  // luminance
  // color_r
  // color_g
  // color_b
}

bool
ymrobot_msgs__msg__LedShow__are_equal(const ymrobot_msgs__msg__LedShow * lhs, const ymrobot_msgs__msg__LedShow * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // luminance
  if (lhs->luminance != rhs->luminance) {
    return false;
  }
  // color_r
  if (lhs->color_r != rhs->color_r) {
    return false;
  }
  // color_g
  if (lhs->color_g != rhs->color_g) {
    return false;
  }
  // color_b
  if (lhs->color_b != rhs->color_b) {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__LedShow__copy(
  const ymrobot_msgs__msg__LedShow * input,
  ymrobot_msgs__msg__LedShow * output)
{
  if (!input || !output) {
    return false;
  }
  // luminance
  output->luminance = input->luminance;
  // color_r
  output->color_r = input->color_r;
  // color_g
  output->color_g = input->color_g;
  // color_b
  output->color_b = input->color_b;
  return true;
}

ymrobot_msgs__msg__LedShow *
ymrobot_msgs__msg__LedShow__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__LedShow * msg = (ymrobot_msgs__msg__LedShow *)allocator.allocate(sizeof(ymrobot_msgs__msg__LedShow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__LedShow));
  bool success = ymrobot_msgs__msg__LedShow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__LedShow__destroy(ymrobot_msgs__msg__LedShow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__LedShow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__LedShow__Sequence__init(ymrobot_msgs__msg__LedShow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__LedShow * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__LedShow *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__LedShow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__LedShow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__LedShow__fini(&data[i - 1]);
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
ymrobot_msgs__msg__LedShow__Sequence__fini(ymrobot_msgs__msg__LedShow__Sequence * array)
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
      ymrobot_msgs__msg__LedShow__fini(&array->data[i]);
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

ymrobot_msgs__msg__LedShow__Sequence *
ymrobot_msgs__msg__LedShow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__LedShow__Sequence * array = (ymrobot_msgs__msg__LedShow__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__LedShow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__LedShow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__LedShow__Sequence__destroy(ymrobot_msgs__msg__LedShow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__LedShow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__LedShow__Sequence__are_equal(const ymrobot_msgs__msg__LedShow__Sequence * lhs, const ymrobot_msgs__msg__LedShow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__LedShow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__LedShow__Sequence__copy(
  const ymrobot_msgs__msg__LedShow__Sequence * input,
  ymrobot_msgs__msg__LedShow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__LedShow);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__LedShow * data =
      (ymrobot_msgs__msg__LedShow *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__LedShow__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__LedShow__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__LedShow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

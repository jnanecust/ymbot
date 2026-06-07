// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/HumanoidMovebase.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/humanoid_movebase__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ymrobot_msgs__msg__HumanoidMovebase__init(ymrobot_msgs__msg__HumanoidMovebase * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // yaw
  return true;
}

void
ymrobot_msgs__msg__HumanoidMovebase__fini(ymrobot_msgs__msg__HumanoidMovebase * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // yaw
}

bool
ymrobot_msgs__msg__HumanoidMovebase__are_equal(const ymrobot_msgs__msg__HumanoidMovebase * lhs, const ymrobot_msgs__msg__HumanoidMovebase * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__HumanoidMovebase__copy(
  const ymrobot_msgs__msg__HumanoidMovebase * input,
  ymrobot_msgs__msg__HumanoidMovebase * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  return true;
}

ymrobot_msgs__msg__HumanoidMovebase *
ymrobot_msgs__msg__HumanoidMovebase__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__HumanoidMovebase * msg = (ymrobot_msgs__msg__HumanoidMovebase *)allocator.allocate(sizeof(ymrobot_msgs__msg__HumanoidMovebase), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__HumanoidMovebase));
  bool success = ymrobot_msgs__msg__HumanoidMovebase__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__HumanoidMovebase__destroy(ymrobot_msgs__msg__HumanoidMovebase * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__HumanoidMovebase__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__HumanoidMovebase__Sequence__init(ymrobot_msgs__msg__HumanoidMovebase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__HumanoidMovebase * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__HumanoidMovebase *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__HumanoidMovebase), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__HumanoidMovebase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__HumanoidMovebase__fini(&data[i - 1]);
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
ymrobot_msgs__msg__HumanoidMovebase__Sequence__fini(ymrobot_msgs__msg__HumanoidMovebase__Sequence * array)
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
      ymrobot_msgs__msg__HumanoidMovebase__fini(&array->data[i]);
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

ymrobot_msgs__msg__HumanoidMovebase__Sequence *
ymrobot_msgs__msg__HumanoidMovebase__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__HumanoidMovebase__Sequence * array = (ymrobot_msgs__msg__HumanoidMovebase__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__HumanoidMovebase__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__HumanoidMovebase__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__HumanoidMovebase__Sequence__destroy(ymrobot_msgs__msg__HumanoidMovebase__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__HumanoidMovebase__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__HumanoidMovebase__Sequence__are_equal(const ymrobot_msgs__msg__HumanoidMovebase__Sequence * lhs, const ymrobot_msgs__msg__HumanoidMovebase__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__HumanoidMovebase__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__HumanoidMovebase__Sequence__copy(
  const ymrobot_msgs__msg__HumanoidMovebase__Sequence * input,
  ymrobot_msgs__msg__HumanoidMovebase__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__HumanoidMovebase);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__HumanoidMovebase * data =
      (ymrobot_msgs__msg__HumanoidMovebase *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__HumanoidMovebase__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__HumanoidMovebase__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__HumanoidMovebase__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

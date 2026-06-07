// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/WakeUpWordSetting.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/wake_up_word_setting__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wake_up_word`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__WakeUpWordSetting__init(ymrobot_msgs__msg__WakeUpWordSetting * msg)
{
  if (!msg) {
    return false;
  }
  // wake_up_word
  if (!rosidl_runtime_c__String__Sequence__init(&msg->wake_up_word, 0)) {
    ymrobot_msgs__msg__WakeUpWordSetting__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__WakeUpWordSetting__fini(ymrobot_msgs__msg__WakeUpWordSetting * msg)
{
  if (!msg) {
    return;
  }
  // wake_up_word
  rosidl_runtime_c__String__Sequence__fini(&msg->wake_up_word);
}

bool
ymrobot_msgs__msg__WakeUpWordSetting__are_equal(const ymrobot_msgs__msg__WakeUpWordSetting * lhs, const ymrobot_msgs__msg__WakeUpWordSetting * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wake_up_word
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->wake_up_word), &(rhs->wake_up_word)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__WakeUpWordSetting__copy(
  const ymrobot_msgs__msg__WakeUpWordSetting * input,
  ymrobot_msgs__msg__WakeUpWordSetting * output)
{
  if (!input || !output) {
    return false;
  }
  // wake_up_word
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->wake_up_word), &(output->wake_up_word)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__WakeUpWordSetting *
ymrobot_msgs__msg__WakeUpWordSetting__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__WakeUpWordSetting * msg = (ymrobot_msgs__msg__WakeUpWordSetting *)allocator.allocate(sizeof(ymrobot_msgs__msg__WakeUpWordSetting), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__WakeUpWordSetting));
  bool success = ymrobot_msgs__msg__WakeUpWordSetting__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__WakeUpWordSetting__destroy(ymrobot_msgs__msg__WakeUpWordSetting * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__WakeUpWordSetting__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__WakeUpWordSetting__Sequence__init(ymrobot_msgs__msg__WakeUpWordSetting__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__WakeUpWordSetting * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__WakeUpWordSetting *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__WakeUpWordSetting), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__WakeUpWordSetting__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__WakeUpWordSetting__fini(&data[i - 1]);
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
ymrobot_msgs__msg__WakeUpWordSetting__Sequence__fini(ymrobot_msgs__msg__WakeUpWordSetting__Sequence * array)
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
      ymrobot_msgs__msg__WakeUpWordSetting__fini(&array->data[i]);
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

ymrobot_msgs__msg__WakeUpWordSetting__Sequence *
ymrobot_msgs__msg__WakeUpWordSetting__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__WakeUpWordSetting__Sequence * array = (ymrobot_msgs__msg__WakeUpWordSetting__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__WakeUpWordSetting__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__WakeUpWordSetting__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__WakeUpWordSetting__Sequence__destroy(ymrobot_msgs__msg__WakeUpWordSetting__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__WakeUpWordSetting__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__WakeUpWordSetting__Sequence__are_equal(const ymrobot_msgs__msg__WakeUpWordSetting__Sequence * lhs, const ymrobot_msgs__msg__WakeUpWordSetting__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__WakeUpWordSetting__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__WakeUpWordSetting__Sequence__copy(
  const ymrobot_msgs__msg__WakeUpWordSetting__Sequence * input,
  ymrobot_msgs__msg__WakeUpWordSetting__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__WakeUpWordSetting);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__WakeUpWordSetting * data =
      (ymrobot_msgs__msg__WakeUpWordSetting *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__WakeUpWordSetting__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__WakeUpWordSetting__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__WakeUpWordSetting__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

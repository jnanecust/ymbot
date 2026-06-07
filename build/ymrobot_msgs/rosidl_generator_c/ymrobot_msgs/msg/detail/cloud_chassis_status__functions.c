// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/cloud_chassis_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `move_target`
// Member `move_status`
// Member `running_status`
// Member `target_floor`
#include "rosidl_runtime_c/string_functions.h"

bool
ymrobot_msgs__msg__CloudChassisStatus__init(ymrobot_msgs__msg__CloudChassisStatus * msg)
{
  if (!msg) {
    return false;
  }
  // charge_state
  // soft_estop_state
  // hard_estop_state
  // estop_state
  // power_percent
  // x
  // y
  // yaw
  // current_floor
  // error_code
  // move_target
  if (!rosidl_runtime_c__String__init(&msg->move_target)) {
    ymrobot_msgs__msg__CloudChassisStatus__fini(msg);
    return false;
  }
  // move_status
  if (!rosidl_runtime_c__String__init(&msg->move_status)) {
    ymrobot_msgs__msg__CloudChassisStatus__fini(msg);
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__init(&msg->running_status)) {
    ymrobot_msgs__msg__CloudChassisStatus__fini(msg);
    return false;
  }
  // target_floor
  if (!rosidl_runtime_c__String__init(&msg->target_floor)) {
    ymrobot_msgs__msg__CloudChassisStatus__fini(msg);
    return false;
  }
  return true;
}

void
ymrobot_msgs__msg__CloudChassisStatus__fini(ymrobot_msgs__msg__CloudChassisStatus * msg)
{
  if (!msg) {
    return;
  }
  // charge_state
  // soft_estop_state
  // hard_estop_state
  // estop_state
  // power_percent
  // x
  // y
  // yaw
  // current_floor
  // error_code
  // move_target
  rosidl_runtime_c__String__fini(&msg->move_target);
  // move_status
  rosidl_runtime_c__String__fini(&msg->move_status);
  // running_status
  rosidl_runtime_c__String__fini(&msg->running_status);
  // target_floor
  rosidl_runtime_c__String__fini(&msg->target_floor);
}

bool
ymrobot_msgs__msg__CloudChassisStatus__are_equal(const ymrobot_msgs__msg__CloudChassisStatus * lhs, const ymrobot_msgs__msg__CloudChassisStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // charge_state
  if (lhs->charge_state != rhs->charge_state) {
    return false;
  }
  // soft_estop_state
  if (lhs->soft_estop_state != rhs->soft_estop_state) {
    return false;
  }
  // hard_estop_state
  if (lhs->hard_estop_state != rhs->hard_estop_state) {
    return false;
  }
  // estop_state
  if (lhs->estop_state != rhs->estop_state) {
    return false;
  }
  // power_percent
  if (lhs->power_percent != rhs->power_percent) {
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
  // current_floor
  if (lhs->current_floor != rhs->current_floor) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // move_target
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_target), &(rhs->move_target)))
  {
    return false;
  }
  // move_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move_status), &(rhs->move_status)))
  {
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->running_status), &(rhs->running_status)))
  {
    return false;
  }
  // target_floor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_floor), &(rhs->target_floor)))
  {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__CloudChassisStatus__copy(
  const ymrobot_msgs__msg__CloudChassisStatus * input,
  ymrobot_msgs__msg__CloudChassisStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // charge_state
  output->charge_state = input->charge_state;
  // soft_estop_state
  output->soft_estop_state = input->soft_estop_state;
  // hard_estop_state
  output->hard_estop_state = input->hard_estop_state;
  // estop_state
  output->estop_state = input->estop_state;
  // power_percent
  output->power_percent = input->power_percent;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  // current_floor
  output->current_floor = input->current_floor;
  // error_code
  output->error_code = input->error_code;
  // move_target
  if (!rosidl_runtime_c__String__copy(
      &(input->move_target), &(output->move_target)))
  {
    return false;
  }
  // move_status
  if (!rosidl_runtime_c__String__copy(
      &(input->move_status), &(output->move_status)))
  {
    return false;
  }
  // running_status
  if (!rosidl_runtime_c__String__copy(
      &(input->running_status), &(output->running_status)))
  {
    return false;
  }
  // target_floor
  if (!rosidl_runtime_c__String__copy(
      &(input->target_floor), &(output->target_floor)))
  {
    return false;
  }
  return true;
}

ymrobot_msgs__msg__CloudChassisStatus *
ymrobot_msgs__msg__CloudChassisStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__CloudChassisStatus * msg = (ymrobot_msgs__msg__CloudChassisStatus *)allocator.allocate(sizeof(ymrobot_msgs__msg__CloudChassisStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__CloudChassisStatus));
  bool success = ymrobot_msgs__msg__CloudChassisStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__CloudChassisStatus__destroy(ymrobot_msgs__msg__CloudChassisStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__CloudChassisStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__CloudChassisStatus__Sequence__init(ymrobot_msgs__msg__CloudChassisStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__CloudChassisStatus * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__CloudChassisStatus *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__CloudChassisStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__CloudChassisStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__CloudChassisStatus__fini(&data[i - 1]);
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
ymrobot_msgs__msg__CloudChassisStatus__Sequence__fini(ymrobot_msgs__msg__CloudChassisStatus__Sequence * array)
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
      ymrobot_msgs__msg__CloudChassisStatus__fini(&array->data[i]);
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

ymrobot_msgs__msg__CloudChassisStatus__Sequence *
ymrobot_msgs__msg__CloudChassisStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__CloudChassisStatus__Sequence * array = (ymrobot_msgs__msg__CloudChassisStatus__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__CloudChassisStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__CloudChassisStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__CloudChassisStatus__Sequence__destroy(ymrobot_msgs__msg__CloudChassisStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__CloudChassisStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__CloudChassisStatus__Sequence__are_equal(const ymrobot_msgs__msg__CloudChassisStatus__Sequence * lhs, const ymrobot_msgs__msg__CloudChassisStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__CloudChassisStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__CloudChassisStatus__Sequence__copy(
  const ymrobot_msgs__msg__CloudChassisStatus__Sequence * input,
  ymrobot_msgs__msg__CloudChassisStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__CloudChassisStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__CloudChassisStatus * data =
      (ymrobot_msgs__msg__CloudChassisStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__CloudChassisStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__CloudChassisStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__CloudChassisStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

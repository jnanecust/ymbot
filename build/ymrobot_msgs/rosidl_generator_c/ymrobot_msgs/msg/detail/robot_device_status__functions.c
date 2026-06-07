// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ymrobot_msgs:msg/RobotDeviceStatus.idl
// generated code does not contain a copyright notice
#include "ymrobot_msgs/msg/detail/robot_device_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ymrobot_msgs__msg__RobotDeviceStatus__init(ymrobot_msgs__msg__RobotDeviceStatus * msg)
{
  if (!msg) {
    return false;
  }
  // battery_voltage
  // battery_percentage
  // battery_temperature
  // left_motor_speed
  // right_motor_speed
  // left_motor_temperature
  // right_motor_temperature
  // cpu_usage
  // memory_usage
  // cpu_temperature
  // disk_space_percentage
  // mainboard_temperature
  return true;
}

void
ymrobot_msgs__msg__RobotDeviceStatus__fini(ymrobot_msgs__msg__RobotDeviceStatus * msg)
{
  if (!msg) {
    return;
  }
  // battery_voltage
  // battery_percentage
  // battery_temperature
  // left_motor_speed
  // right_motor_speed
  // left_motor_temperature
  // right_motor_temperature
  // cpu_usage
  // memory_usage
  // cpu_temperature
  // disk_space_percentage
  // mainboard_temperature
}

bool
ymrobot_msgs__msg__RobotDeviceStatus__are_equal(const ymrobot_msgs__msg__RobotDeviceStatus * lhs, const ymrobot_msgs__msg__RobotDeviceStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // battery_temperature
  if (lhs->battery_temperature != rhs->battery_temperature) {
    return false;
  }
  // left_motor_speed
  if (lhs->left_motor_speed != rhs->left_motor_speed) {
    return false;
  }
  // right_motor_speed
  if (lhs->right_motor_speed != rhs->right_motor_speed) {
    return false;
  }
  // left_motor_temperature
  if (lhs->left_motor_temperature != rhs->left_motor_temperature) {
    return false;
  }
  // right_motor_temperature
  if (lhs->right_motor_temperature != rhs->right_motor_temperature) {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // memory_usage
  if (lhs->memory_usage != rhs->memory_usage) {
    return false;
  }
  // cpu_temperature
  if (lhs->cpu_temperature != rhs->cpu_temperature) {
    return false;
  }
  // disk_space_percentage
  if (lhs->disk_space_percentage != rhs->disk_space_percentage) {
    return false;
  }
  // mainboard_temperature
  if (lhs->mainboard_temperature != rhs->mainboard_temperature) {
    return false;
  }
  return true;
}

bool
ymrobot_msgs__msg__RobotDeviceStatus__copy(
  const ymrobot_msgs__msg__RobotDeviceStatus * input,
  ymrobot_msgs__msg__RobotDeviceStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // battery_temperature
  output->battery_temperature = input->battery_temperature;
  // left_motor_speed
  output->left_motor_speed = input->left_motor_speed;
  // right_motor_speed
  output->right_motor_speed = input->right_motor_speed;
  // left_motor_temperature
  output->left_motor_temperature = input->left_motor_temperature;
  // right_motor_temperature
  output->right_motor_temperature = input->right_motor_temperature;
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // cpu_temperature
  output->cpu_temperature = input->cpu_temperature;
  // disk_space_percentage
  output->disk_space_percentage = input->disk_space_percentage;
  // mainboard_temperature
  output->mainboard_temperature = input->mainboard_temperature;
  return true;
}

ymrobot_msgs__msg__RobotDeviceStatus *
ymrobot_msgs__msg__RobotDeviceStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__RobotDeviceStatus * msg = (ymrobot_msgs__msg__RobotDeviceStatus *)allocator.allocate(sizeof(ymrobot_msgs__msg__RobotDeviceStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ymrobot_msgs__msg__RobotDeviceStatus));
  bool success = ymrobot_msgs__msg__RobotDeviceStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ymrobot_msgs__msg__RobotDeviceStatus__destroy(ymrobot_msgs__msg__RobotDeviceStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ymrobot_msgs__msg__RobotDeviceStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ymrobot_msgs__msg__RobotDeviceStatus__Sequence__init(ymrobot_msgs__msg__RobotDeviceStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__RobotDeviceStatus * data = NULL;

  if (size) {
    data = (ymrobot_msgs__msg__RobotDeviceStatus *)allocator.zero_allocate(size, sizeof(ymrobot_msgs__msg__RobotDeviceStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ymrobot_msgs__msg__RobotDeviceStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ymrobot_msgs__msg__RobotDeviceStatus__fini(&data[i - 1]);
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
ymrobot_msgs__msg__RobotDeviceStatus__Sequence__fini(ymrobot_msgs__msg__RobotDeviceStatus__Sequence * array)
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
      ymrobot_msgs__msg__RobotDeviceStatus__fini(&array->data[i]);
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

ymrobot_msgs__msg__RobotDeviceStatus__Sequence *
ymrobot_msgs__msg__RobotDeviceStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ymrobot_msgs__msg__RobotDeviceStatus__Sequence * array = (ymrobot_msgs__msg__RobotDeviceStatus__Sequence *)allocator.allocate(sizeof(ymrobot_msgs__msg__RobotDeviceStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ymrobot_msgs__msg__RobotDeviceStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ymrobot_msgs__msg__RobotDeviceStatus__Sequence__destroy(ymrobot_msgs__msg__RobotDeviceStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ymrobot_msgs__msg__RobotDeviceStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ymrobot_msgs__msg__RobotDeviceStatus__Sequence__are_equal(const ymrobot_msgs__msg__RobotDeviceStatus__Sequence * lhs, const ymrobot_msgs__msg__RobotDeviceStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ymrobot_msgs__msg__RobotDeviceStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ymrobot_msgs__msg__RobotDeviceStatus__Sequence__copy(
  const ymrobot_msgs__msg__RobotDeviceStatus__Sequence * input,
  ymrobot_msgs__msg__RobotDeviceStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ymrobot_msgs__msg__RobotDeviceStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ymrobot_msgs__msg__RobotDeviceStatus * data =
      (ymrobot_msgs__msg__RobotDeviceStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ymrobot_msgs__msg__RobotDeviceStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ymrobot_msgs__msg__RobotDeviceStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ymrobot_msgs__msg__RobotDeviceStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ymrobot_msgs:msg/CloudChassisStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ymrobot_msgs/msg/detail/cloud_chassis_status__struct.h"
#include "ymrobot_msgs/msg/detail/cloud_chassis_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ymrobot_msgs__msg__cloud_chassis_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ymrobot_msgs.msg._cloud_chassis_status.CloudChassisStatus", full_classname_dest, 57) == 0);
  }
  ymrobot_msgs__msg__CloudChassisStatus * ros_message = _ros_message;
  {  // charge_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charge_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // soft_estop_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "soft_estop_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->soft_estop_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hard_estop_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "hard_estop_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hard_estop_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estop_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estop_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_percent = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_floor
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_floor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_floor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // move_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_target");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->move_target, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // move_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->move_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // running_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "running_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->running_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // target_floor
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_floor");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->target_floor, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ymrobot_msgs__msg__cloud_chassis_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CloudChassisStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ymrobot_msgs.msg._cloud_chassis_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CloudChassisStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ymrobot_msgs__msg__CloudChassisStatus * ros_message = (ymrobot_msgs__msg__CloudChassisStatus *)raw_ros_message;
  {  // charge_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charge_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // soft_estop_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->soft_estop_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soft_estop_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hard_estop_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hard_estop_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hard_estop_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estop_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_percent
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_floor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_floor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_floor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_target
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->move_target.data,
      strlen(ros_message->move_target.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->move_status.data,
      strlen(ros_message->move_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // running_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->running_status.data,
      strlen(ros_message->running_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "running_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_floor
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->target_floor.data,
      strlen(ros_message->target_floor.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_floor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

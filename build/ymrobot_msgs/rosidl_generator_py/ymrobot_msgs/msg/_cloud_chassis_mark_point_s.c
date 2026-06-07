// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ymrobot_msgs:msg/CloudChassisMarkPoint.idl
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
#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__struct.h"
#include "ymrobot_msgs/msg/detail/cloud_chassis_mark_point__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ymrobot_msgs__msg__cloud_chassis_mark_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("ymrobot_msgs.msg._cloud_chassis_mark_point.CloudChassisMarkPoint", full_classname_dest, 64) == 0);
  }
  ymrobot_msgs__msg__CloudChassisMarkPoint * ros_message = _ros_message;
  {  // nav_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_target_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_target_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->nav_target_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // nav_target_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_target_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nav_target_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nav_target_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_target_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nav_target_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nav_target_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_target_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nav_target_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_activate_the_nearby_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_activate_the_nearby_point");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_activate_the_nearby_point = (Py_True == field);
    Py_DECREF(field);
  }
  {  // nearby_point_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "nearby_point_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nearby_point_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ymrobot_msgs__msg__cloud_chassis_mark_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CloudChassisMarkPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ymrobot_msgs.msg._cloud_chassis_mark_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CloudChassisMarkPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ymrobot_msgs__msg__CloudChassisMarkPoint * ros_message = (ymrobot_msgs__msg__CloudChassisMarkPoint *)raw_ros_message;
  {  // nav_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nav_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_target_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->nav_target_name.data,
      strlen(ros_message->nav_target_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_target_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_target_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nav_target_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_target_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_target_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nav_target_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_target_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_target_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nav_target_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_target_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_activate_the_nearby_point
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_activate_the_nearby_point ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_activate_the_nearby_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nearby_point_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nearby_point_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nearby_point_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

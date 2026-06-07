// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ymrobot_msgs:msg/MapManage.idl
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
#include "ymrobot_msgs/msg/detail/map_manage__struct.h"
#include "ymrobot_msgs/msg/detail/map_manage__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool ymrobot_msgs__msg__map_task_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ymrobot_msgs__msg__map_task_command__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ymrobot_msgs__msg__map_manage__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("ymrobot_msgs.msg._map_manage.MapManage", full_classname_dest, 38) == 0);
  }
  ymrobot_msgs__msg__MapManage * ros_message = _ros_message;
  {  // map_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_task");
    if (!field) {
      return false;
    }
    if (!ymrobot_msgs__msg__map_task_command__convert_from_py(field, &ros_message->map_task)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pcd_file
    PyObject * field = PyObject_GetAttrString(_pymsg, "pcd_file");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pcd_file, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pgm_file
    PyObject * field = PyObject_GetAttrString(_pymsg, "pgm_file");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->pgm_file, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ymrobot_msgs__msg__map_manage__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapManage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ymrobot_msgs.msg._map_manage");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapManage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ymrobot_msgs__msg__MapManage * ros_message = (ymrobot_msgs__msg__MapManage *)raw_ros_message;
  {  // map_task
    PyObject * field = NULL;
    field = ymrobot_msgs__msg__map_task_command__convert_to_py(&ros_message->map_task);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pcd_file
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pcd_file.data,
      strlen(ros_message->pcd_file.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pcd_file", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pgm_file
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pgm_file.data,
      strlen(ros_message->pgm_file.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pgm_file", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

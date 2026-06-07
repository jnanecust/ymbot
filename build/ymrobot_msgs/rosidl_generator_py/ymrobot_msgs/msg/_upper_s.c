// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ymrobot_msgs:msg/Upper.idl
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
#include "ymrobot_msgs/msg/detail/upper__struct.h"
#include "ymrobot_msgs/msg/detail/upper__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ymrobot_msgs__msg__upper__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
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
    assert(strncmp("ymrobot_msgs.msg._upper.Upper", full_classname_dest, 29) == 0);
  }
  ymrobot_msgs__msg__Upper * ros_message = _ros_message;
  {  // chassis_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->chassis_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_status = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ymrobot_msgs__msg__upper__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Upper */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ymrobot_msgs.msg._upper");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Upper");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ymrobot_msgs__msg__Upper * ros_message = (ymrobot_msgs__msg__Upper *)raw_ros_message;
  {  // chassis_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->chassis_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

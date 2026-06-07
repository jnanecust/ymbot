// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ymrobot_msgs:msg/Task.idl
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
#include "ymrobot_msgs/msg/detail/task__struct.h"
#include "ymrobot_msgs/msg/detail/task__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ymrobot_msgs/msg/detail/command__functions.h"
#include "ymrobot_msgs/msg/detail/nav_point__functions.h"
// end nested array functions include
bool ymrobot_msgs__msg__nav_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ymrobot_msgs__msg__nav_point__convert_to_py(void * raw_ros_message);
bool ymrobot_msgs__msg__command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ymrobot_msgs__msg__command__convert_to_py(void * raw_ros_message);
bool ymrobot_msgs__msg__binary_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ymrobot_msgs__msg__binary_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ymrobot_msgs__msg__task__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
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
    assert(strncmp("ymrobot_msgs.msg._task.Task", full_classname_dest, 27) == 0);
  }
  ymrobot_msgs__msg__Task * ros_message = _ros_message;
  {  // platform_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "platform_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->platform_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // amr_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "amr_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->amr_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // task_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nav_points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ymrobot_msgs__msg__NavPoint__Sequence__init(&(ros_message->nav_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ymrobot_msgs__msg__NavPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ymrobot_msgs__msg__NavPoint * dest = ros_message->nav_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ymrobot_msgs__msg__nav_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // commands
    PyObject * field = PyObject_GetAttrString(_pymsg, "commands");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'commands'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ymrobot_msgs__msg__Command__Sequence__init(&(ros_message->commands), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ymrobot_msgs__msg__Command__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ymrobot_msgs__msg__Command * dest = ros_message->commands.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ymrobot_msgs__msg__command__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // behavior_tree
    PyObject * field = PyObject_GetAttrString(_pymsg, "behavior_tree");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->behavior_tree, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // reload
    PyObject * field = PyObject_GetAttrString(_pymsg, "reload");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reload = (Py_True == field);
    Py_DECREF(field);
  }
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->index, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // binary_file
    PyObject * field = PyObject_GetAttrString(_pymsg, "binary_file");
    if (!field) {
      return false;
    }
    if (!ymrobot_msgs__msg__binary_data__convert_from_py(field, &ros_message->binary_file)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ymrobot_msgs__msg__task__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Task */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ymrobot_msgs.msg._task");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Task");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ymrobot_msgs__msg__Task * ros_message = (ymrobot_msgs__msg__Task *)raw_ros_message;
  {  // platform_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->platform_id.data,
      strlen(ros_message->platform_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "platform_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // amr_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->amr_id.data,
      strlen(ros_message->amr_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "amr_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_id.data,
      strlen(ros_message->task_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->task_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_points
    PyObject * field = NULL;
    size_t size = ros_message->nav_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ymrobot_msgs__msg__NavPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nav_points.data[i]);
      PyObject * pyitem = ymrobot_msgs__msg__nav_point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commands
    PyObject * field = NULL;
    size_t size = ros_message->commands.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ymrobot_msgs__msg__Command * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->commands.data[i]);
      PyObject * pyitem = ymrobot_msgs__msg__command__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "commands", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // behavior_tree
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->behavior_tree.data,
      strlen(ros_message->behavior_tree.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "behavior_tree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reload
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reload ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reload", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // index
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->index.data,
      strlen(ros_message->index.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // binary_file
    PyObject * field = NULL;
    field = ymrobot_msgs__msg__binary_data__convert_to_py(&ros_message->binary_file);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "binary_file", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

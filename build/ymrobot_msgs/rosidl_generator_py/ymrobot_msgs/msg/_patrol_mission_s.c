// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ymrobot_msgs:msg/PatrolMission.idl
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
#include "ymrobot_msgs/msg/detail/patrol_mission__struct.h"
#include "ymrobot_msgs/msg/detail/patrol_mission__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool ymrobot_msgs__msg__image_video__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ymrobot_msgs__msg__image_video__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ymrobot_msgs__msg__patrol_mission__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("ymrobot_msgs.msg._patrol_mission.PatrolMission", full_classname_dest, 46) == 0);
  }
  ymrobot_msgs__msg__PatrolMission * ros_message = _ros_message;
  {  // image_video_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_video_msg");
    if (!field) {
      return false;
    }
    if (!ymrobot_msgs__msg__image_video__convert_from_py(field, &ros_message->image_video_msg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_audio_played_throughout_the_entire_process
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_audio_played_throughout_the_entire_process");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_audio_played_throughout_the_entire_process = (Py_True == field);
    Py_DECREF(field);
  }
  {  // full_audio_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_audio_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->full_audio_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_the_entire_process_recorded
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_the_entire_process_recorded");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_the_entire_process_recorded = (Py_True == field);
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
  {  // nav_name_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_name_list");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nav_name_list'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->nav_name_list), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->nav_name_list.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ymrobot_msgs__msg__patrol_mission__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PatrolMission */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ymrobot_msgs.msg._patrol_mission");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PatrolMission");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ymrobot_msgs__msg__PatrolMission * ros_message = (ymrobot_msgs__msg__PatrolMission *)raw_ros_message;
  {  // image_video_msg
    PyObject * field = NULL;
    field = ymrobot_msgs__msg__image_video__convert_to_py(&ros_message->image_video_msg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_video_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_audio_played_throughout_the_entire_process
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_audio_played_throughout_the_entire_process ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_audio_played_throughout_the_entire_process", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_audio_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->full_audio_name.data,
      strlen(ros_message->full_audio_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_audio_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_the_entire_process_recorded
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_the_entire_process_recorded ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_the_entire_process_recorded", field);
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
  {  // nav_name_list
    PyObject * field = NULL;
    size_t size = ros_message->nav_name_list.size;
    rosidl_runtime_c__String * src = ros_message->nav_name_list.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_name_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

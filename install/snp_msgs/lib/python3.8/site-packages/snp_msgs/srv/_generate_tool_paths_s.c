// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
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
#include "snp_msgs/srv/detail/generate_tool_paths__struct.h"
#include "snp_msgs/srv/detail/generate_tool_paths__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool snp_msgs__srv__generate_tool_paths__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("snp_msgs.srv._generate_tool_paths.GenerateToolPaths_Request", full_classname_dest, 59) == 0);
  }
  snp_msgs__srv__GenerateToolPaths_Request * ros_message = _ros_message;
  {  // mesh_filename
    PyObject * field = PyObject_GetAttrString(_pymsg, "mesh_filename");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mesh_filename, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // line_spacing
    PyObject * field = PyObject_GetAttrString(_pymsg, "line_spacing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->line_spacing = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_hole_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_hole_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_hole_size = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_segment_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_segment_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_segment_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // point_spacing
    PyObject * field = PyObject_GetAttrString(_pymsg, "point_spacing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->point_spacing = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // search_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "search_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->search_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * snp_msgs__srv__generate_tool_paths__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateToolPaths_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("snp_msgs.srv._generate_tool_paths");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateToolPaths_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  snp_msgs__srv__GenerateToolPaths_Request * ros_message = (snp_msgs__srv__GenerateToolPaths_Request *)raw_ros_message;
  {  // mesh_filename
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mesh_filename.data,
      strlen(ros_message->mesh_filename.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mesh_filename", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // line_spacing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->line_spacing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "line_spacing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_hole_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_hole_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_hole_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_segment_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_segment_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_segment_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // point_spacing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->point_spacing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "point_spacing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // search_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->search_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "search_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "snp_msgs/srv/detail/generate_tool_paths__struct.h"
// already included above
// #include "snp_msgs/srv/detail/generate_tool_paths__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool snp_msgs__msg__tool_paths__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * snp_msgs__msg__tool_paths__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool snp_msgs__srv__generate_tool_paths__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("snp_msgs.srv._generate_tool_paths.GenerateToolPaths_Response", full_classname_dest, 60) == 0);
  }
  snp_msgs__srv__GenerateToolPaths_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tool_paths
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool_paths");
    if (!field) {
      return false;
    }
    if (!snp_msgs__msg__tool_paths__convert_from_py(field, &ros_message->tool_paths)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * snp_msgs__srv__generate_tool_paths__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GenerateToolPaths_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("snp_msgs.srv._generate_tool_paths");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GenerateToolPaths_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  snp_msgs__srv__GenerateToolPaths_Response * ros_message = (snp_msgs__srv__GenerateToolPaths_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool_paths
    PyObject * field = NULL;
    field = snp_msgs__msg__tool_paths__convert_to_py(&ros_message->tool_paths);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool_paths", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

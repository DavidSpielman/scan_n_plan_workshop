// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice
#include "snp_msgs/srv/detail/generate_tool_paths__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `mesh_filename`
#include "rosidl_runtime_c/string_functions.h"

bool
snp_msgs__srv__GenerateToolPaths_Request__init(snp_msgs__srv__GenerateToolPaths_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mesh_filename
  if (!rosidl_runtime_c__String__init(&msg->mesh_filename)) {
    snp_msgs__srv__GenerateToolPaths_Request__fini(msg);
    return false;
  }
  // line_spacing
  // min_hole_size
  // min_segment_length
  // point_spacing
  // search_radius
  return true;
}

void
snp_msgs__srv__GenerateToolPaths_Request__fini(snp_msgs__srv__GenerateToolPaths_Request * msg)
{
  if (!msg) {
    return;
  }
  // mesh_filename
  rosidl_runtime_c__String__fini(&msg->mesh_filename);
  // line_spacing
  // min_hole_size
  // min_segment_length
  // point_spacing
  // search_radius
}

snp_msgs__srv__GenerateToolPaths_Request *
snp_msgs__srv__GenerateToolPaths_Request__create()
{
  snp_msgs__srv__GenerateToolPaths_Request * msg = (snp_msgs__srv__GenerateToolPaths_Request *)malloc(sizeof(snp_msgs__srv__GenerateToolPaths_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__srv__GenerateToolPaths_Request));
  bool success = snp_msgs__srv__GenerateToolPaths_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
snp_msgs__srv__GenerateToolPaths_Request__destroy(snp_msgs__srv__GenerateToolPaths_Request * msg)
{
  if (msg) {
    snp_msgs__srv__GenerateToolPaths_Request__fini(msg);
  }
  free(msg);
}


bool
snp_msgs__srv__GenerateToolPaths_Request__Sequence__init(snp_msgs__srv__GenerateToolPaths_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  snp_msgs__srv__GenerateToolPaths_Request * data = NULL;
  if (size) {
    data = (snp_msgs__srv__GenerateToolPaths_Request *)calloc(size, sizeof(snp_msgs__srv__GenerateToolPaths_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__srv__GenerateToolPaths_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__srv__GenerateToolPaths_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
snp_msgs__srv__GenerateToolPaths_Request__Sequence__fini(snp_msgs__srv__GenerateToolPaths_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      snp_msgs__srv__GenerateToolPaths_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

snp_msgs__srv__GenerateToolPaths_Request__Sequence *
snp_msgs__srv__GenerateToolPaths_Request__Sequence__create(size_t size)
{
  snp_msgs__srv__GenerateToolPaths_Request__Sequence * array = (snp_msgs__srv__GenerateToolPaths_Request__Sequence *)malloc(sizeof(snp_msgs__srv__GenerateToolPaths_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__srv__GenerateToolPaths_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
snp_msgs__srv__GenerateToolPaths_Request__Sequence__destroy(snp_msgs__srv__GenerateToolPaths_Request__Sequence * array)
{
  if (array) {
    snp_msgs__srv__GenerateToolPaths_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `tool_paths`
#include "snp_msgs/msg/detail/tool_paths__functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
snp_msgs__srv__GenerateToolPaths_Response__init(snp_msgs__srv__GenerateToolPaths_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // tool_paths
  if (!snp_msgs__msg__ToolPaths__init(&msg->tool_paths)) {
    snp_msgs__srv__GenerateToolPaths_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    snp_msgs__srv__GenerateToolPaths_Response__fini(msg);
    return false;
  }
  return true;
}

void
snp_msgs__srv__GenerateToolPaths_Response__fini(snp_msgs__srv__GenerateToolPaths_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // tool_paths
  snp_msgs__msg__ToolPaths__fini(&msg->tool_paths);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

snp_msgs__srv__GenerateToolPaths_Response *
snp_msgs__srv__GenerateToolPaths_Response__create()
{
  snp_msgs__srv__GenerateToolPaths_Response * msg = (snp_msgs__srv__GenerateToolPaths_Response *)malloc(sizeof(snp_msgs__srv__GenerateToolPaths_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__srv__GenerateToolPaths_Response));
  bool success = snp_msgs__srv__GenerateToolPaths_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
snp_msgs__srv__GenerateToolPaths_Response__destroy(snp_msgs__srv__GenerateToolPaths_Response * msg)
{
  if (msg) {
    snp_msgs__srv__GenerateToolPaths_Response__fini(msg);
  }
  free(msg);
}


bool
snp_msgs__srv__GenerateToolPaths_Response__Sequence__init(snp_msgs__srv__GenerateToolPaths_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  snp_msgs__srv__GenerateToolPaths_Response * data = NULL;
  if (size) {
    data = (snp_msgs__srv__GenerateToolPaths_Response *)calloc(size, sizeof(snp_msgs__srv__GenerateToolPaths_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__srv__GenerateToolPaths_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__srv__GenerateToolPaths_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
snp_msgs__srv__GenerateToolPaths_Response__Sequence__fini(snp_msgs__srv__GenerateToolPaths_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      snp_msgs__srv__GenerateToolPaths_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

snp_msgs__srv__GenerateToolPaths_Response__Sequence *
snp_msgs__srv__GenerateToolPaths_Response__Sequence__create(size_t size)
{
  snp_msgs__srv__GenerateToolPaths_Response__Sequence * array = (snp_msgs__srv__GenerateToolPaths_Response__Sequence *)malloc(sizeof(snp_msgs__srv__GenerateToolPaths_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__srv__GenerateToolPaths_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
snp_msgs__srv__GenerateToolPaths_Response__Sequence__destroy(snp_msgs__srv__GenerateToolPaths_Response__Sequence * array)
{
  if (array) {
    snp_msgs__srv__GenerateToolPaths_Response__Sequence__fini(array);
  }
  free(array);
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice
#include "snp_msgs/msg/detail/tool_paths__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `paths`
#include "snp_msgs/msg/detail/tool_path__functions.h"

bool
snp_msgs__msg__ToolPaths__init(snp_msgs__msg__ToolPaths * msg)
{
  if (!msg) {
    return false;
  }
  // paths
  if (!snp_msgs__msg__ToolPath__Sequence__init(&msg->paths, 0)) {
    snp_msgs__msg__ToolPaths__fini(msg);
    return false;
  }
  return true;
}

void
snp_msgs__msg__ToolPaths__fini(snp_msgs__msg__ToolPaths * msg)
{
  if (!msg) {
    return;
  }
  // paths
  snp_msgs__msg__ToolPath__Sequence__fini(&msg->paths);
}

snp_msgs__msg__ToolPaths *
snp_msgs__msg__ToolPaths__create()
{
  snp_msgs__msg__ToolPaths * msg = (snp_msgs__msg__ToolPaths *)malloc(sizeof(snp_msgs__msg__ToolPaths));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__msg__ToolPaths));
  bool success = snp_msgs__msg__ToolPaths__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
snp_msgs__msg__ToolPaths__destroy(snp_msgs__msg__ToolPaths * msg)
{
  if (msg) {
    snp_msgs__msg__ToolPaths__fini(msg);
  }
  free(msg);
}


bool
snp_msgs__msg__ToolPaths__Sequence__init(snp_msgs__msg__ToolPaths__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  snp_msgs__msg__ToolPaths * data = NULL;
  if (size) {
    data = (snp_msgs__msg__ToolPaths *)calloc(size, sizeof(snp_msgs__msg__ToolPaths));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__msg__ToolPaths__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__msg__ToolPaths__fini(&data[i - 1]);
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
snp_msgs__msg__ToolPaths__Sequence__fini(snp_msgs__msg__ToolPaths__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      snp_msgs__msg__ToolPaths__fini(&array->data[i]);
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

snp_msgs__msg__ToolPaths__Sequence *
snp_msgs__msg__ToolPaths__Sequence__create(size_t size)
{
  snp_msgs__msg__ToolPaths__Sequence * array = (snp_msgs__msg__ToolPaths__Sequence *)malloc(sizeof(snp_msgs__msg__ToolPaths__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__msg__ToolPaths__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
snp_msgs__msg__ToolPaths__Sequence__destroy(snp_msgs__msg__ToolPaths__Sequence * array)
{
  if (array) {
    snp_msgs__msg__ToolPaths__Sequence__fini(array);
  }
  free(array);
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice
#include "snp_msgs/msg/detail/tool_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `segments`
#include "geometry_msgs/msg/detail/pose_array__functions.h"

bool
snp_msgs__msg__ToolPath__init(snp_msgs__msg__ToolPath * msg)
{
  if (!msg) {
    return false;
  }
  // segments
  if (!geometry_msgs__msg__PoseArray__Sequence__init(&msg->segments, 0)) {
    snp_msgs__msg__ToolPath__fini(msg);
    return false;
  }
  return true;
}

void
snp_msgs__msg__ToolPath__fini(snp_msgs__msg__ToolPath * msg)
{
  if (!msg) {
    return;
  }
  // segments
  geometry_msgs__msg__PoseArray__Sequence__fini(&msg->segments);
}

snp_msgs__msg__ToolPath *
snp_msgs__msg__ToolPath__create()
{
  snp_msgs__msg__ToolPath * msg = (snp_msgs__msg__ToolPath *)malloc(sizeof(snp_msgs__msg__ToolPath));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__msg__ToolPath));
  bool success = snp_msgs__msg__ToolPath__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
snp_msgs__msg__ToolPath__destroy(snp_msgs__msg__ToolPath * msg)
{
  if (msg) {
    snp_msgs__msg__ToolPath__fini(msg);
  }
  free(msg);
}


bool
snp_msgs__msg__ToolPath__Sequence__init(snp_msgs__msg__ToolPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  snp_msgs__msg__ToolPath * data = NULL;
  if (size) {
    data = (snp_msgs__msg__ToolPath *)calloc(size, sizeof(snp_msgs__msg__ToolPath));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__msg__ToolPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__msg__ToolPath__fini(&data[i - 1]);
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
snp_msgs__msg__ToolPath__Sequence__fini(snp_msgs__msg__ToolPath__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      snp_msgs__msg__ToolPath__fini(&array->data[i]);
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

snp_msgs__msg__ToolPath__Sequence *
snp_msgs__msg__ToolPath__Sequence__create(size_t size)
{
  snp_msgs__msg__ToolPath__Sequence * array = (snp_msgs__msg__ToolPath__Sequence *)malloc(sizeof(snp_msgs__msg__ToolPath__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__msg__ToolPath__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
snp_msgs__msg__ToolPath__Sequence__destroy(snp_msgs__msg__ToolPath__Sequence * array)
{
  if (array) {
    snp_msgs__msg__ToolPath__Sequence__fini(array);
  }
  free(array);
}

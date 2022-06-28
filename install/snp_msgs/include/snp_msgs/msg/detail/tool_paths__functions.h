// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATHS__FUNCTIONS_H_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATHS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "snp_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "snp_msgs/msg/detail/tool_paths__struct.h"

/// Initialize msg/ToolPaths message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snp_msgs__msg__ToolPaths
 * )) before or use
 * snp_msgs__msg__ToolPaths__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPaths__init(snp_msgs__msg__ToolPaths * msg);

/// Finalize msg/ToolPaths message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPaths__fini(snp_msgs__msg__ToolPaths * msg);

/// Create msg/ToolPaths message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snp_msgs__msg__ToolPaths__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
snp_msgs__msg__ToolPaths *
snp_msgs__msg__ToolPaths__create();

/// Destroy msg/ToolPaths message.
/**
 * It calls
 * snp_msgs__msg__ToolPaths__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPaths__destroy(snp_msgs__msg__ToolPaths * msg);


/// Initialize array of msg/ToolPaths messages.
/**
 * It allocates the memory for the number of elements and calls
 * snp_msgs__msg__ToolPaths__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPaths__Sequence__init(snp_msgs__msg__ToolPaths__Sequence * array, size_t size);

/// Finalize array of msg/ToolPaths messages.
/**
 * It calls
 * snp_msgs__msg__ToolPaths__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPaths__Sequence__fini(snp_msgs__msg__ToolPaths__Sequence * array);

/// Create array of msg/ToolPaths messages.
/**
 * It allocates the memory for the array and calls
 * snp_msgs__msg__ToolPaths__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
snp_msgs__msg__ToolPaths__Sequence *
snp_msgs__msg__ToolPaths__Sequence__create(size_t size);

/// Destroy array of msg/ToolPaths messages.
/**
 * It calls
 * snp_msgs__msg__ToolPaths__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPaths__Sequence__destroy(snp_msgs__msg__ToolPaths__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATHS__FUNCTIONS_H_

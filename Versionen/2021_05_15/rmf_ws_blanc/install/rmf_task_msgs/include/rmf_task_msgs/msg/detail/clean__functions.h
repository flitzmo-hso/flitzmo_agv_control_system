// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_task_msgs:msg/Clean.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__CLEAN__FUNCTIONS_H_
#define RMF_TASK_MSGS__MSG__DETAIL__CLEAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_task_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_task_msgs/msg/detail/clean__struct.h"

/// Initialize msg/Clean message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_task_msgs__msg__Clean
 * )) before or use
 * rmf_task_msgs__msg__Clean__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__Clean__init(rmf_task_msgs__msg__Clean * msg);

/// Finalize msg/Clean message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__Clean__fini(rmf_task_msgs__msg__Clean * msg);

/// Create msg/Clean message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_task_msgs__msg__Clean__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__msg__Clean *
rmf_task_msgs__msg__Clean__create();

/// Destroy msg/Clean message.
/**
 * It calls
 * rmf_task_msgs__msg__Clean__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__Clean__destroy(rmf_task_msgs__msg__Clean * msg);


/// Initialize array of msg/Clean messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_task_msgs__msg__Clean__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__Clean__Sequence__init(rmf_task_msgs__msg__Clean__Sequence * array, size_t size);

/// Finalize array of msg/Clean messages.
/**
 * It calls
 * rmf_task_msgs__msg__Clean__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__Clean__Sequence__fini(rmf_task_msgs__msg__Clean__Sequence * array);

/// Create array of msg/Clean messages.
/**
 * It allocates the memory for the array and calls
 * rmf_task_msgs__msg__Clean__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__msg__Clean__Sequence *
rmf_task_msgs__msg__Clean__Sequence__create(size_t size);

/// Destroy array of msg/Clean messages.
/**
 * It calls
 * rmf_task_msgs__msg__Clean__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__Clean__Sequence__destroy(rmf_task_msgs__msg__Clean__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__CLEAN__FUNCTIONS_H_

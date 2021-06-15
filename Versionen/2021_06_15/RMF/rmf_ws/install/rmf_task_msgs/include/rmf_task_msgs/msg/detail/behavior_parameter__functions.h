// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_task_msgs:msg/BehaviorParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__FUNCTIONS_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_task_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_task_msgs/msg/detail/behavior_parameter__struct.h"

/// Initialize msg/BehaviorParameter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_task_msgs__msg__BehaviorParameter
 * )) before or use
 * rmf_task_msgs__msg__BehaviorParameter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__BehaviorParameter__init(rmf_task_msgs__msg__BehaviorParameter * msg);

/// Finalize msg/BehaviorParameter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__BehaviorParameter__fini(rmf_task_msgs__msg__BehaviorParameter * msg);

/// Create msg/BehaviorParameter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_task_msgs__msg__BehaviorParameter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__msg__BehaviorParameter *
rmf_task_msgs__msg__BehaviorParameter__create();

/// Destroy msg/BehaviorParameter message.
/**
 * It calls
 * rmf_task_msgs__msg__BehaviorParameter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__BehaviorParameter__destroy(rmf_task_msgs__msg__BehaviorParameter * msg);


/// Initialize array of msg/BehaviorParameter messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_task_msgs__msg__BehaviorParameter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__msg__BehaviorParameter__Sequence__init(rmf_task_msgs__msg__BehaviorParameter__Sequence * array, size_t size);

/// Finalize array of msg/BehaviorParameter messages.
/**
 * It calls
 * rmf_task_msgs__msg__BehaviorParameter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__BehaviorParameter__Sequence__fini(rmf_task_msgs__msg__BehaviorParameter__Sequence * array);

/// Create array of msg/BehaviorParameter messages.
/**
 * It allocates the memory for the array and calls
 * rmf_task_msgs__msg__BehaviorParameter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__msg__BehaviorParameter__Sequence *
rmf_task_msgs__msg__BehaviorParameter__Sequence__create(size_t size);

/// Destroy array of msg/BehaviorParameter messages.
/**
 * It calls
 * rmf_task_msgs__msg__BehaviorParameter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__msg__BehaviorParameter__Sequence__destroy(rmf_task_msgs__msg__BehaviorParameter__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__FUNCTIONS_H_

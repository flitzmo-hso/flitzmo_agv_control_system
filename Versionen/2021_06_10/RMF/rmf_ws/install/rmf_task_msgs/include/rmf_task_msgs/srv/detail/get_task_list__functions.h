// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_task_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__FUNCTIONS_H_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_task_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_task_msgs/srv/detail/get_task_list__struct.h"

/// Initialize srv/GetTaskList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_task_msgs__srv__GetTaskList_Request
 * )) before or use
 * rmf_task_msgs__srv__GetTaskList_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__srv__GetTaskList_Request__init(rmf_task_msgs__srv__GetTaskList_Request * msg);

/// Finalize srv/GetTaskList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Request__fini(rmf_task_msgs__srv__GetTaskList_Request * msg);

/// Create srv/GetTaskList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_task_msgs__srv__GetTaskList_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__srv__GetTaskList_Request *
rmf_task_msgs__srv__GetTaskList_Request__create();

/// Destroy srv/GetTaskList message.
/**
 * It calls
 * rmf_task_msgs__srv__GetTaskList_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Request__destroy(rmf_task_msgs__srv__GetTaskList_Request * msg);


/// Initialize array of srv/GetTaskList messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_task_msgs__srv__GetTaskList_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__srv__GetTaskList_Request__Sequence__init(rmf_task_msgs__srv__GetTaskList_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetTaskList messages.
/**
 * It calls
 * rmf_task_msgs__srv__GetTaskList_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Request__Sequence__fini(rmf_task_msgs__srv__GetTaskList_Request__Sequence * array);

/// Create array of srv/GetTaskList messages.
/**
 * It allocates the memory for the array and calls
 * rmf_task_msgs__srv__GetTaskList_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__srv__GetTaskList_Request__Sequence *
rmf_task_msgs__srv__GetTaskList_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetTaskList messages.
/**
 * It calls
 * rmf_task_msgs__srv__GetTaskList_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Request__Sequence__destroy(rmf_task_msgs__srv__GetTaskList_Request__Sequence * array);

/// Initialize srv/GetTaskList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_task_msgs__srv__GetTaskList_Response
 * )) before or use
 * rmf_task_msgs__srv__GetTaskList_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__srv__GetTaskList_Response__init(rmf_task_msgs__srv__GetTaskList_Response * msg);

/// Finalize srv/GetTaskList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Response__fini(rmf_task_msgs__srv__GetTaskList_Response * msg);

/// Create srv/GetTaskList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_task_msgs__srv__GetTaskList_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__srv__GetTaskList_Response *
rmf_task_msgs__srv__GetTaskList_Response__create();

/// Destroy srv/GetTaskList message.
/**
 * It calls
 * rmf_task_msgs__srv__GetTaskList_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Response__destroy(rmf_task_msgs__srv__GetTaskList_Response * msg);


/// Initialize array of srv/GetTaskList messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_task_msgs__srv__GetTaskList_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
bool
rmf_task_msgs__srv__GetTaskList_Response__Sequence__init(rmf_task_msgs__srv__GetTaskList_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetTaskList messages.
/**
 * It calls
 * rmf_task_msgs__srv__GetTaskList_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Response__Sequence__fini(rmf_task_msgs__srv__GetTaskList_Response__Sequence * array);

/// Create array of srv/GetTaskList messages.
/**
 * It allocates the memory for the array and calls
 * rmf_task_msgs__srv__GetTaskList_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
rmf_task_msgs__srv__GetTaskList_Response__Sequence *
rmf_task_msgs__srv__GetTaskList_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetTaskList messages.
/**
 * It calls
 * rmf_task_msgs__srv__GetTaskList_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
void
rmf_task_msgs__srv__GetTaskList_Response__Sequence__destroy(rmf_task_msgs__srv__GetTaskList_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_TASK_LIST__FUNCTIONS_H_

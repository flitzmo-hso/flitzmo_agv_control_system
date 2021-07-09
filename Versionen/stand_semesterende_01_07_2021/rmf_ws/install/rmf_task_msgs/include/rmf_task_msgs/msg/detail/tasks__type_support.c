// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/Tasks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/tasks__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/tasks__functions.h"
#include "rmf_task_msgs/msg/detail/tasks__struct.h"


// Include directives for member types
// Member `tasks`
#include "rmf_task_msgs/msg/task_summary.h"
// Member `tasks`
#include "rmf_task_msgs/msg/detail/task_summary__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Tasks__rosidl_typesupport_introspection_c__Tasks_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__Tasks__init(message_memory);
}

void Tasks__rosidl_typesupport_introspection_c__Tasks_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__Tasks__fini(message_memory);
}

size_t Tasks__rosidl_typesupport_introspection_c__size_function__TaskSummary__tasks(
  const void * untyped_member)
{
  const rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (const rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return member->size;
}

const void * Tasks__rosidl_typesupport_introspection_c__get_const_function__TaskSummary__tasks(
  const void * untyped_member, size_t index)
{
  const rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (const rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Tasks__rosidl_typesupport_introspection_c__get_function__TaskSummary__tasks(
  void * untyped_member, size_t index)
{
  rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Tasks__rosidl_typesupport_introspection_c__resize_function__TaskSummary__tasks(
  void * untyped_member, size_t size)
{
  rmf_task_msgs__msg__TaskSummary__Sequence * member =
    (rmf_task_msgs__msg__TaskSummary__Sequence *)(untyped_member);
  rmf_task_msgs__msg__TaskSummary__Sequence__fini(member);
  return rmf_task_msgs__msg__TaskSummary__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Tasks__rosidl_typesupport_introspection_c__Tasks_message_member_array[1] = {
  {
    "tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Tasks, tasks),  // bytes offset in struct
    NULL,  // default value
    Tasks__rosidl_typesupport_introspection_c__size_function__TaskSummary__tasks,  // size() function pointer
    Tasks__rosidl_typesupport_introspection_c__get_const_function__TaskSummary__tasks,  // get_const(index) function pointer
    Tasks__rosidl_typesupport_introspection_c__get_function__TaskSummary__tasks,  // get(index) function pointer
    Tasks__rosidl_typesupport_introspection_c__resize_function__TaskSummary__tasks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tasks__rosidl_typesupport_introspection_c__Tasks_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "Tasks",  // message name
  1,  // number of fields
  sizeof(rmf_task_msgs__msg__Tasks),
  Tasks__rosidl_typesupport_introspection_c__Tasks_message_member_array,  // message members
  Tasks__rosidl_typesupport_introspection_c__Tasks_init_function,  // function to initialize message memory (memory has to be allocated)
  Tasks__rosidl_typesupport_introspection_c__Tasks_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tasks__rosidl_typesupport_introspection_c__Tasks_message_type_support_handle = {
  0,
  &Tasks__rosidl_typesupport_introspection_c__Tasks_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Tasks)() {
  Tasks__rosidl_typesupport_introspection_c__Tasks_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskSummary)();
  if (!Tasks__rosidl_typesupport_introspection_c__Tasks_message_type_support_handle.typesupport_identifier) {
    Tasks__rosidl_typesupport_introspection_c__Tasks_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tasks__rosidl_typesupport_introspection_c__Tasks_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/Behavior.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/behavior__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/behavior__functions.h"
#include "rmf_task_msgs/msg/detail/behavior__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `parameters`
#include "rmf_task_msgs/msg/behavior_parameter.h"
// Member `parameters`
#include "rmf_task_msgs/msg/detail/behavior_parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Behavior__rosidl_typesupport_introspection_c__Behavior_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__Behavior__init(message_memory);
}

void Behavior__rosidl_typesupport_introspection_c__Behavior_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__Behavior__fini(message_memory);
}

size_t Behavior__rosidl_typesupport_introspection_c__size_function__BehaviorParameter__parameters(
  const void * untyped_member)
{
  const rmf_task_msgs__msg__BehaviorParameter__Sequence * member =
    (const rmf_task_msgs__msg__BehaviorParameter__Sequence *)(untyped_member);
  return member->size;
}

const void * Behavior__rosidl_typesupport_introspection_c__get_const_function__BehaviorParameter__parameters(
  const void * untyped_member, size_t index)
{
  const rmf_task_msgs__msg__BehaviorParameter__Sequence * member =
    (const rmf_task_msgs__msg__BehaviorParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Behavior__rosidl_typesupport_introspection_c__get_function__BehaviorParameter__parameters(
  void * untyped_member, size_t index)
{
  rmf_task_msgs__msg__BehaviorParameter__Sequence * member =
    (rmf_task_msgs__msg__BehaviorParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Behavior__rosidl_typesupport_introspection_c__resize_function__BehaviorParameter__parameters(
  void * untyped_member, size_t size)
{
  rmf_task_msgs__msg__BehaviorParameter__Sequence * member =
    (rmf_task_msgs__msg__BehaviorParameter__Sequence *)(untyped_member);
  rmf_task_msgs__msg__BehaviorParameter__Sequence__fini(member);
  return rmf_task_msgs__msg__BehaviorParameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Behavior__rosidl_typesupport_introspection_c__Behavior_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Behavior, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Behavior, parameters),  // bytes offset in struct
    NULL,  // default value
    Behavior__rosidl_typesupport_introspection_c__size_function__BehaviorParameter__parameters,  // size() function pointer
    Behavior__rosidl_typesupport_introspection_c__get_const_function__BehaviorParameter__parameters,  // get_const(index) function pointer
    Behavior__rosidl_typesupport_introspection_c__get_function__BehaviorParameter__parameters,  // get(index) function pointer
    Behavior__rosidl_typesupport_introspection_c__resize_function__BehaviorParameter__parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Behavior__rosidl_typesupport_introspection_c__Behavior_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "Behavior",  // message name
  2,  // number of fields
  sizeof(rmf_task_msgs__msg__Behavior),
  Behavior__rosidl_typesupport_introspection_c__Behavior_message_member_array,  // message members
  Behavior__rosidl_typesupport_introspection_c__Behavior_init_function,  // function to initialize message memory (memory has to be allocated)
  Behavior__rosidl_typesupport_introspection_c__Behavior_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Behavior__rosidl_typesupport_introspection_c__Behavior_message_type_support_handle = {
  0,
  &Behavior__rosidl_typesupport_introspection_c__Behavior_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Behavior)() {
  Behavior__rosidl_typesupport_introspection_c__Behavior_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, BehaviorParameter)();
  if (!Behavior__rosidl_typesupport_introspection_c__Behavior_message_type_support_handle.typesupport_identifier) {
    Behavior__rosidl_typesupport_introspection_c__Behavior_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Behavior__rosidl_typesupport_introspection_c__Behavior_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/bid_notice__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/bid_notice__functions.h"
#include "rmf_task_msgs/msg/detail/bid_notice__struct.h"


// Include directives for member types
// Member `task_profile`
#include "rmf_task_msgs/msg/task_profile.h"
// Member `task_profile`
#include "rmf_task_msgs/msg/detail/task_profile__rosidl_typesupport_introspection_c.h"
// Member `time_window`
#include "builtin_interfaces/msg/duration.h"
// Member `time_window`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BidNotice__rosidl_typesupport_introspection_c__BidNotice_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__BidNotice__init(message_memory);
}

void BidNotice__rosidl_typesupport_introspection_c__BidNotice_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__BidNotice__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_member_array[2] = {
  {
    "task_profile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__BidNotice, task_profile),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_window",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__BidNotice, time_window),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "BidNotice",  // message name
  2,  // number of fields
  sizeof(rmf_task_msgs__msg__BidNotice),
  BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_member_array,  // message members
  BidNotice__rosidl_typesupport_introspection_c__BidNotice_init_function,  // function to initialize message memory (memory has to be allocated)
  BidNotice__rosidl_typesupport_introspection_c__BidNotice_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_type_support_handle = {
  0,
  &BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, BidNotice)() {
  BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskProfile)();
  BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_type_support_handle.typesupport_identifier) {
    BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BidNotice__rosidl_typesupport_introspection_c__BidNotice_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleWriterItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_writer_item__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_writer_item__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_writer_item__struct.h"


// Include directives for member types
// Member `route`
#include "rmf_traffic_msgs/msg/route.h"
// Member `route`
#include "rmf_traffic_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ScheduleWriterItem__init(message_memory);
}

void ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ScheduleWriterItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleWriterItem, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleWriterItem, route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ScheduleWriterItem",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ScheduleWriterItem),
  ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_member_array,  // message members
  ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_type_support_handle = {
  0,
  &ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleWriterItem)() {
  ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Route)();
  if (!ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_type_support_handle.typesupport_identifier) {
    ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScheduleWriterItem__rosidl_typesupport_introspection_c__ScheduleWriterItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

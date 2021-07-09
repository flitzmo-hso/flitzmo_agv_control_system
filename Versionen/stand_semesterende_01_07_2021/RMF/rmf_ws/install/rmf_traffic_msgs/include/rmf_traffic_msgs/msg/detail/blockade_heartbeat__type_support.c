// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__functions.h"
#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__struct.h"


// Include directives for member types
// Member `statuses`
#include "rmf_traffic_msgs/msg/blockade_status.h"
// Member `statuses`
#include "rmf_traffic_msgs/msg/detail/blockade_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__BlockadeHeartbeat__init(message_memory);
}

void BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__BlockadeHeartbeat__fini(message_memory);
}

size_t BlockadeHeartbeat__rosidl_typesupport_introspection_c__size_function__BlockadeStatus__statuses(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__BlockadeStatus__Sequence * member =
    (const rmf_traffic_msgs__msg__BlockadeStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * BlockadeHeartbeat__rosidl_typesupport_introspection_c__get_const_function__BlockadeStatus__statuses(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__BlockadeStatus__Sequence * member =
    (const rmf_traffic_msgs__msg__BlockadeStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BlockadeHeartbeat__rosidl_typesupport_introspection_c__get_function__BlockadeStatus__statuses(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__BlockadeStatus__Sequence * member =
    (rmf_traffic_msgs__msg__BlockadeStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BlockadeHeartbeat__rosidl_typesupport_introspection_c__resize_function__BlockadeStatus__statuses(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__BlockadeStatus__Sequence * member =
    (rmf_traffic_msgs__msg__BlockadeStatus__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__BlockadeStatus__Sequence__fini(member);
  return rmf_traffic_msgs__msg__BlockadeStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_member_array[2] = {
  {
    "statuses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__BlockadeHeartbeat, statuses),  // bytes offset in struct
    NULL,  // default value
    BlockadeHeartbeat__rosidl_typesupport_introspection_c__size_function__BlockadeStatus__statuses,  // size() function pointer
    BlockadeHeartbeat__rosidl_typesupport_introspection_c__get_const_function__BlockadeStatus__statuses,  // get_const(index) function pointer
    BlockadeHeartbeat__rosidl_typesupport_introspection_c__get_function__BlockadeStatus__statuses,  // get(index) function pointer
    BlockadeHeartbeat__rosidl_typesupport_introspection_c__resize_function__BlockadeStatus__statuses  // resize(index) function pointer
  },
  {
    "has_gridlock",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__BlockadeHeartbeat, has_gridlock),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "BlockadeHeartbeat",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs__msg__BlockadeHeartbeat),
  BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_member_array,  // message members
  BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_init_function,  // function to initialize message memory (memory has to be allocated)
  BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_type_support_handle = {
  0,
  &BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, BlockadeHeartbeat)() {
  BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, BlockadeStatus)();
  if (!BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_type_support_handle.typesupport_identifier) {
    BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BlockadeHeartbeat__rosidl_typesupport_introspection_c__BlockadeHeartbeat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

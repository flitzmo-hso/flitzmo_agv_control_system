// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/BlockadeSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/blockade_set__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/blockade_set__functions.h"
#include "rmf_traffic_msgs/msg/detail/blockade_set__struct.h"


// Include directives for member types
// Member `path`
#include "rmf_traffic_msgs/msg/blockade_checkpoint.h"
// Member `path`
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__BlockadeSet__init(message_memory);
}

void BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__BlockadeSet__fini(message_memory);
}

size_t BlockadeSet__rosidl_typesupport_introspection_c__size_function__BlockadeCheckpoint__path(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * member =
    (const rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *)(untyped_member);
  return member->size;
}

const void * BlockadeSet__rosidl_typesupport_introspection_c__get_const_function__BlockadeCheckpoint__path(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * member =
    (const rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BlockadeSet__rosidl_typesupport_introspection_c__get_function__BlockadeCheckpoint__path(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * member =
    (rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BlockadeSet__rosidl_typesupport_introspection_c__resize_function__BlockadeCheckpoint__path(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * member =
    (rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(member);
  return rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_member_array[4] = {
  {
    "participant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__BlockadeSet, participant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reservation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__BlockadeSet, reservation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__BlockadeSet, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__BlockadeSet, path),  // bytes offset in struct
    NULL,  // default value
    BlockadeSet__rosidl_typesupport_introspection_c__size_function__BlockadeCheckpoint__path,  // size() function pointer
    BlockadeSet__rosidl_typesupport_introspection_c__get_const_function__BlockadeCheckpoint__path,  // get_const(index) function pointer
    BlockadeSet__rosidl_typesupport_introspection_c__get_function__BlockadeCheckpoint__path,  // get(index) function pointer
    BlockadeSet__rosidl_typesupport_introspection_c__resize_function__BlockadeCheckpoint__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "BlockadeSet",  // message name
  4,  // number of fields
  sizeof(rmf_traffic_msgs__msg__BlockadeSet),
  BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_member_array,  // message members
  BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_init_function,  // function to initialize message memory (memory has to be allocated)
  BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_type_support_handle = {
  0,
  &BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, BlockadeSet)() {
  BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, BlockadeCheckpoint)();
  if (!BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_type_support_handle.typesupport_identifier) {
    BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BlockadeSet__rosidl_typesupport_introspection_c__BlockadeSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

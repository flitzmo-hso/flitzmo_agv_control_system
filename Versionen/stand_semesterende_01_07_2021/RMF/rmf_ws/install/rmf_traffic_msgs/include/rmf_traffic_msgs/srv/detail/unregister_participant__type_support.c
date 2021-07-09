// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/srv/detail/unregister_participant__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/srv/detail/unregister_participant__functions.h"
#include "rmf_traffic_msgs/srv/detail/unregister_participant__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__srv__UnregisterParticipant_Request__init(message_memory);
}

void UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_fini_function(void * message_memory)
{
  rmf_traffic_msgs__srv__UnregisterParticipant_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_member_array[1] = {
  {
    "participant_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__UnregisterParticipant_Request, participant_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_members = {
  "rmf_traffic_msgs__srv",  // message namespace
  "UnregisterParticipant_Request",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs__srv__UnregisterParticipant_Request),
  UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_member_array,  // message members
  UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_type_support_handle = {
  0,
  &UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, UnregisterParticipant_Request)() {
  if (!UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_type_support_handle.typesupport_identifier) {
    UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnregisterParticipant_Request__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_traffic_msgs/srv/detail/unregister_participant__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/unregister_participant__functions.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/unregister_participant__struct.h"


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__srv__UnregisterParticipant_Response__init(message_memory);
}

void UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_fini_function(void * message_memory)
{
  rmf_traffic_msgs__srv__UnregisterParticipant_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_member_array[2] = {
  {
    "confirmation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__UnregisterParticipant_Response, confirmation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__srv__UnregisterParticipant_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_members = {
  "rmf_traffic_msgs__srv",  // message namespace
  "UnregisterParticipant_Response",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs__srv__UnregisterParticipant_Response),
  UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_member_array,  // message members
  UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_type_support_handle = {
  0,
  &UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, UnregisterParticipant_Response)() {
  if (!UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_type_support_handle.typesupport_identifier) {
    UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnregisterParticipant_Response__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_traffic_msgs/srv/detail/unregister_participant__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_service_members = {
  "rmf_traffic_msgs__srv",  // service namespace
  "UnregisterParticipant",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_Request_message_type_support_handle,
  NULL  // response message
  // rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_Response_message_type_support_handle
};

static rosidl_service_type_support_t rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_service_type_support_handle = {
  0,
  &rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, UnregisterParticipant_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, UnregisterParticipant_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, UnregisterParticipant)() {
  if (!rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_service_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, UnregisterParticipant_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, srv, UnregisterParticipant_Response)()->data;
  }

  return &rmf_traffic_msgs__srv__detail__unregister_participant__rosidl_typesupport_introspection_c__UnregisterParticipant_service_type_support_handle;
}

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:srv/ReviveTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/srv/detail/revive_task__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/srv/detail/revive_task__functions.h"
#include "rmf_task_msgs/srv/detail/revive_task__struct.h"


// Include directives for member types
// Member `requester`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__srv__ReviveTask_Request__init(message_memory);
}

void ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_fini_function(void * message_memory)
{
  rmf_task_msgs__srv__ReviveTask_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_member_array[2] = {
  {
    "requester",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__ReviveTask_Request, requester),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__ReviveTask_Request, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_members = {
  "rmf_task_msgs__srv",  // message namespace
  "ReviveTask_Request",  // message name
  2,  // number of fields
  sizeof(rmf_task_msgs__srv__ReviveTask_Request),
  ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_member_array,  // message members
  ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_type_support_handle = {
  0,
  &ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, ReviveTask_Request)() {
  if (!ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_type_support_handle.typesupport_identifier) {
    ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ReviveTask_Request__rosidl_typesupport_introspection_c__ReviveTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_task_msgs/srv/detail/revive_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_task_msgs/srv/detail/revive_task__functions.h"
// already included above
// #include "rmf_task_msgs/srv/detail/revive_task__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__srv__ReviveTask_Response__init(message_memory);
}

void ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_fini_function(void * message_memory)
{
  rmf_task_msgs__srv__ReviveTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__ReviveTask_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_members = {
  "rmf_task_msgs__srv",  // message namespace
  "ReviveTask_Response",  // message name
  1,  // number of fields
  sizeof(rmf_task_msgs__srv__ReviveTask_Response),
  ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_member_array,  // message members
  ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_type_support_handle = {
  0,
  &ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, ReviveTask_Response)() {
  if (!ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_type_support_handle.typesupport_identifier) {
    ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ReviveTask_Response__rosidl_typesupport_introspection_c__ReviveTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_task_msgs/srv/detail/revive_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_service_members = {
  "rmf_task_msgs__srv",  // service namespace
  "ReviveTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_Request_message_type_support_handle,
  NULL  // response message
  // rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_service_type_support_handle = {
  0,
  &rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, ReviveTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, ReviveTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, ReviveTask)() {
  if (!rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_service_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, ReviveTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, ReviveTask_Response)()->data;
  }

  return &rmf_task_msgs__srv__detail__revive_task__rosidl_typesupport_introspection_c__ReviveTask_service_type_support_handle;
}

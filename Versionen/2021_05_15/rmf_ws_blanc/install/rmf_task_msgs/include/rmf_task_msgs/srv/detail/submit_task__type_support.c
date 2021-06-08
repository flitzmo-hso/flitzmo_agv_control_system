// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/srv/detail/submit_task__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/srv/detail/submit_task__functions.h"
#include "rmf_task_msgs/srv/detail/submit_task__struct.h"


// Include directives for member types
// Member `requester`
#include "rosidl_runtime_c/string_functions.h"
// Member `description`
#include "rmf_task_msgs/msg/task_description.h"
// Member `description`
#include "rmf_task_msgs/msg/detail/task_description__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__srv__SubmitTask_Request__init(message_memory);
}

void SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_fini_function(void * message_memory)
{
  rmf_task_msgs__srv__SubmitTask_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_member_array[2] = {
  {
    "requester",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__SubmitTask_Request, requester),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__SubmitTask_Request, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_members = {
  "rmf_task_msgs__srv",  // message namespace
  "SubmitTask_Request",  // message name
  2,  // number of fields
  sizeof(rmf_task_msgs__srv__SubmitTask_Request),
  SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_member_array,  // message members
  SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_type_support_handle = {
  0,
  &SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, SubmitTask_Request)() {
  SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskDescription)();
  if (!SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_type_support_handle.typesupport_identifier) {
    SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubmitTask_Request__rosidl_typesupport_introspection_c__SubmitTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rmf_task_msgs/srv/detail/submit_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rmf_task_msgs/srv/detail/submit_task__functions.h"
// already included above
// #include "rmf_task_msgs/srv/detail/submit_task__struct.h"


// Include directives for member types
// Member `task_id`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__srv__SubmitTask_Response__init(message_memory);
}

void SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_fini_function(void * message_memory)
{
  rmf_task_msgs__srv__SubmitTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__SubmitTask_Response, success),  // bytes offset in struct
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
    offsetof(rmf_task_msgs__srv__SubmitTask_Response, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__srv__SubmitTask_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_members = {
  "rmf_task_msgs__srv",  // message namespace
  "SubmitTask_Response",  // message name
  3,  // number of fields
  sizeof(rmf_task_msgs__srv__SubmitTask_Response),
  SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_member_array,  // message members
  SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_type_support_handle = {
  0,
  &SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, SubmitTask_Response)() {
  if (!SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_type_support_handle.typesupport_identifier) {
    SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubmitTask_Response__rosidl_typesupport_introspection_c__SubmitTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rmf_task_msgs/srv/detail/submit_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_service_members = {
  "rmf_task_msgs__srv",  // service namespace
  "SubmitTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_Request_message_type_support_handle,
  NULL  // response message
  // rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_service_type_support_handle = {
  0,
  &rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, SubmitTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, SubmitTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, SubmitTask)() {
  if (!rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_service_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, SubmitTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, srv, SubmitTask_Response)()->data;
  }

  return &rmf_task_msgs__srv__detail__submit_task__rosidl_typesupport_introspection_c__SubmitTask_service_type_support_handle;
}

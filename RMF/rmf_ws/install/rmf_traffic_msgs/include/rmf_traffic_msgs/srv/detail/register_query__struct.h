// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:srv/RegisterQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'query'
#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.h"

// Struct defined in srv/RegisterQuery in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__RegisterQuery_Request
{
  rmf_traffic_msgs__msg__ScheduleQuery query;
} rmf_traffic_msgs__srv__RegisterQuery_Request;

// Struct for a sequence of rmf_traffic_msgs__srv__RegisterQuery_Request.
typedef struct rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence
{
  rmf_traffic_msgs__srv__RegisterQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RegisterQuery in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__RegisterQuery_Response
{
  uint64_t query_id;
  rosidl_runtime_c__String error;
} rmf_traffic_msgs__srv__RegisterQuery_Response;

// Struct for a sequence of rmf_traffic_msgs__srv__RegisterQuery_Response.
typedef struct rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence
{
  rmf_traffic_msgs__srv__RegisterQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__STRUCT_H_

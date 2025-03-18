// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:msg/FirstMessage.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__STRUCT_H_
#define FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'temperatures'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// temperatures
enum
{
  first_interfaces__msg__FirstMessage__temperatures__MAX_SIZE = 10
};

// Struct defined in msg/FirstMessage in the package first_interfaces.
typedef struct first_interfaces__msg__FirstMessage
{
  rosidl_runtime_c__double__Sequence temperatures;
  double variance;
} first_interfaces__msg__FirstMessage;

// Struct for a sequence of first_interfaces__msg__FirstMessage.
typedef struct first_interfaces__msg__FirstMessage__Sequence
{
  first_interfaces__msg__FirstMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__msg__FirstMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__STRUCT_H_

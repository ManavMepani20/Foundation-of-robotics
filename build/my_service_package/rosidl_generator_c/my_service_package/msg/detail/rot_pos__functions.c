// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_service_package:msg/RotPos.idl
// generated code does not contain a copyright notice
#include "my_service_package/msg/detail/rot_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `r`
// Member `o`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
my_service_package__msg__RotPos__init(my_service_package__msg__RotPos * msg)
{
  if (!msg) {
    return false;
  }
  // r
  if (!rosidl_runtime_c__double__Sequence__init(&msg->r, 0)) {
    my_service_package__msg__RotPos__fini(msg);
    return false;
  }
  // o
  if (!rosidl_runtime_c__double__Sequence__init(&msg->o, 0)) {
    my_service_package__msg__RotPos__fini(msg);
    return false;
  }
  return true;
}

void
my_service_package__msg__RotPos__fini(my_service_package__msg__RotPos * msg)
{
  if (!msg) {
    return;
  }
  // r
  rosidl_runtime_c__double__Sequence__fini(&msg->r);
  // o
  rosidl_runtime_c__double__Sequence__fini(&msg->o);
}

bool
my_service_package__msg__RotPos__are_equal(const my_service_package__msg__RotPos * lhs, const my_service_package__msg__RotPos * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // r
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->r), &(rhs->r)))
  {
    return false;
  }
  // o
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->o), &(rhs->o)))
  {
    return false;
  }
  return true;
}

bool
my_service_package__msg__RotPos__copy(
  const my_service_package__msg__RotPos * input,
  my_service_package__msg__RotPos * output)
{
  if (!input || !output) {
    return false;
  }
  // r
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->r), &(output->r)))
  {
    return false;
  }
  // o
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->o), &(output->o)))
  {
    return false;
  }
  return true;
}

my_service_package__msg__RotPos *
my_service_package__msg__RotPos__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_package__msg__RotPos * msg = (my_service_package__msg__RotPos *)allocator.allocate(sizeof(my_service_package__msg__RotPos), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_service_package__msg__RotPos));
  bool success = my_service_package__msg__RotPos__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_service_package__msg__RotPos__destroy(my_service_package__msg__RotPos * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_service_package__msg__RotPos__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_service_package__msg__RotPos__Sequence__init(my_service_package__msg__RotPos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_package__msg__RotPos * data = NULL;

  if (size) {
    data = (my_service_package__msg__RotPos *)allocator.zero_allocate(size, sizeof(my_service_package__msg__RotPos), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_service_package__msg__RotPos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_service_package__msg__RotPos__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_service_package__msg__RotPos__Sequence__fini(my_service_package__msg__RotPos__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_service_package__msg__RotPos__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_service_package__msg__RotPos__Sequence *
my_service_package__msg__RotPos__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_service_package__msg__RotPos__Sequence * array = (my_service_package__msg__RotPos__Sequence *)allocator.allocate(sizeof(my_service_package__msg__RotPos__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_service_package__msg__RotPos__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_service_package__msg__RotPos__Sequence__destroy(my_service_package__msg__RotPos__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_service_package__msg__RotPos__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_service_package__msg__RotPos__Sequence__are_equal(const my_service_package__msg__RotPos__Sequence * lhs, const my_service_package__msg__RotPos__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_service_package__msg__RotPos__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_service_package__msg__RotPos__Sequence__copy(
  const my_service_package__msg__RotPos__Sequence * input,
  my_service_package__msg__RotPos__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_service_package__msg__RotPos);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_service_package__msg__RotPos * data =
      (my_service_package__msg__RotPos *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_service_package__msg__RotPos__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_service_package__msg__RotPos__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_service_package__msg__RotPos__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

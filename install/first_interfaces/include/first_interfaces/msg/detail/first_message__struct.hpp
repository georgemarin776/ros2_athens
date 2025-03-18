// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_interfaces:msg/FirstMessage.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__STRUCT_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__first_interfaces__msg__FirstMessage __attribute__((deprecated))
#else
# define DEPRECATED__first_interfaces__msg__FirstMessage __declspec(deprecated)
#endif

namespace first_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FirstMessage_
{
  using Type = FirstMessage_<ContainerAllocator>;

  explicit FirstMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->variance = 0.0;
    }
  }

  explicit FirstMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->variance = 0.0;
    }
  }

  // field types and members
  using _temperatures_type =
    rosidl_runtime_cpp::BoundedVector<double, 10, typename ContainerAllocator::template rebind<double>::other>;
  _temperatures_type temperatures;
  using _variance_type =
    double;
  _variance_type variance;

  // setters for named parameter idiom
  Type & set__temperatures(
    const rosidl_runtime_cpp::BoundedVector<double, 10, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_interfaces::msg::FirstMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_interfaces::msg::FirstMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::FirstMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::FirstMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_interfaces__msg__FirstMessage
    std::shared_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_interfaces__msg__FirstMessage
    std::shared_ptr<first_interfaces::msg::FirstMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FirstMessage_ & other) const
  {
    if (this->temperatures != other.temperatures) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const FirstMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FirstMessage_

// alias to use template instance with default allocator
using FirstMessage =
  first_interfaces::msg::FirstMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__FIRST_MESSAGE__STRUCT_HPP_

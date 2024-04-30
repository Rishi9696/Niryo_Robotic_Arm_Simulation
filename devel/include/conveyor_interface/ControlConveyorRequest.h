// Generated by gencpp from file conveyor_interface/ControlConveyorRequest.msg
// DO NOT EDIT!


#ifndef CONVEYOR_INTERFACE_MESSAGE_CONTROLCONVEYORREQUEST_H
#define CONVEYOR_INTERFACE_MESSAGE_CONTROLCONVEYORREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace conveyor_interface
{
template <class ContainerAllocator>
struct ControlConveyorRequest_
{
  typedef ControlConveyorRequest_<ContainerAllocator> Type;

  ControlConveyorRequest_()
    : id(0)
    , control_on(false)
    , speed(0)
    , direction(0)  {
    }
  ControlConveyorRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , control_on(false)
    , speed(0)
    , direction(0)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef uint8_t _control_on_type;
  _control_on_type control_on;

   typedef int16_t _speed_type;
  _speed_type speed;

   typedef int8_t _direction_type;
  _direction_type direction;





  typedef boost::shared_ptr< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ControlConveyorRequest_

typedef ::conveyor_interface::ControlConveyorRequest_<std::allocator<void> > ControlConveyorRequest;

typedef boost::shared_ptr< ::conveyor_interface::ControlConveyorRequest > ControlConveyorRequestPtr;
typedef boost::shared_ptr< ::conveyor_interface::ControlConveyorRequest const> ControlConveyorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator1> & lhs, const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.control_on == rhs.control_on &&
    lhs.speed == rhs.speed &&
    lhs.direction == rhs.direction;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator1> & lhs, const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace conveyor_interface

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8fb87fdef4900df86881316e047822d2";
  }

  static const char* value(const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8fb87fdef4900df8ULL;
  static const uint64_t static_value2 = 0x6881316e047822d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "conveyor_interface/ControlConveyorRequest";
  }

  static const char* value(const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"\n"
"bool control_on\n"
"int16 speed\n"
"int8 direction \n"
;
  }

  static const char* value(const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.control_on);
      stream.next(m.speed);
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlConveyorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::conveyor_interface::ControlConveyorRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "control_on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.control_on);
    s << indent << "speed: ";
    Printer<int16_t>::stream(s, indent + "  ", v.speed);
    s << indent << "direction: ";
    Printer<int8_t>::stream(s, indent + "  ", v.direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONVEYOR_INTERFACE_MESSAGE_CONTROLCONVEYORREQUEST_H

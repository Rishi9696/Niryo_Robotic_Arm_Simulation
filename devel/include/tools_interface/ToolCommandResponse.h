// Generated by gencpp from file tools_interface/ToolCommandResponse.msg
// DO NOT EDIT!


#ifndef TOOLS_INTERFACE_MESSAGE_TOOLCOMMANDRESPONSE_H
#define TOOLS_INTERFACE_MESSAGE_TOOLCOMMANDRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tools_interface
{
template <class ContainerAllocator>
struct ToolCommandResponse_
{
  typedef ToolCommandResponse_<ContainerAllocator> Type;

  ToolCommandResponse_()
    : state(0)  {
    }
  ToolCommandResponse_(const ContainerAllocator& _alloc)
    : state(0)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::tools_interface::ToolCommandResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tools_interface::ToolCommandResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ToolCommandResponse_

typedef ::tools_interface::ToolCommandResponse_<std::allocator<void> > ToolCommandResponse;

typedef boost::shared_ptr< ::tools_interface::ToolCommandResponse > ToolCommandResponsePtr;
typedef boost::shared_ptr< ::tools_interface::ToolCommandResponse const> ToolCommandResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tools_interface::ToolCommandResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tools_interface::ToolCommandResponse_<ContainerAllocator1> & lhs, const ::tools_interface::ToolCommandResponse_<ContainerAllocator2> & rhs)
{
  return lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tools_interface::ToolCommandResponse_<ContainerAllocator1> & lhs, const ::tools_interface::ToolCommandResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tools_interface

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tools_interface::ToolCommandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tools_interface::ToolCommandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tools_interface::ToolCommandResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "800f34bc468def1d86e2d42bea5648c0";
  }

  static const char* value(const ::tools_interface::ToolCommandResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x800f34bc468def1dULL;
  static const uint64_t static_value2 = 0x86e2d42bea5648c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tools_interface/ToolCommandResponse";
  }

  static const char* value(const ::tools_interface::ToolCommandResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 state\n"
"\n"
;
  }

  static const char* value(const ::tools_interface::ToolCommandResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ToolCommandResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tools_interface::ToolCommandResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tools_interface::ToolCommandResponse_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOOLS_INTERFACE_MESSAGE_TOOLCOMMANDRESPONSE_H

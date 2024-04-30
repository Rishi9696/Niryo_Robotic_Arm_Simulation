// Generated by gencpp from file niryo_robot_msgs/SetBoolRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_MSGS_MESSAGE_SETBOOLREQUEST_H
#define NIRYO_ROBOT_MSGS_MESSAGE_SETBOOLREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_robot_msgs
{
template <class ContainerAllocator>
struct SetBoolRequest_
{
  typedef SetBoolRequest_<ContainerAllocator> Type;

  SetBoolRequest_()
    : value(false)  {
    }
  SetBoolRequest_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetBoolRequest_

typedef ::niryo_robot_msgs::SetBoolRequest_<std::allocator<void> > SetBoolRequest;

typedef boost::shared_ptr< ::niryo_robot_msgs::SetBoolRequest > SetBoolRequestPtr;
typedef boost::shared_ptr< ::niryo_robot_msgs::SetBoolRequest const> SetBoolRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_robot_msgs/SetBoolRequest";
  }

  static const char* value(const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n"
;
  }

  static const char* value(const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetBoolRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_robot_msgs::SetBoolRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ROBOT_MSGS_MESSAGE_SETBOOLREQUEST_H

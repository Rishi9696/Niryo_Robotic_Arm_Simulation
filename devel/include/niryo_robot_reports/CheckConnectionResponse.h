// Generated by gencpp from file niryo_robot_reports/CheckConnectionResponse.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_REPORTS_MESSAGE_CHECKCONNECTIONRESPONSE_H
#define NIRYO_ROBOT_REPORTS_MESSAGE_CHECKCONNECTIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_robot_reports
{
template <class ContainerAllocator>
struct CheckConnectionResponse_
{
  typedef CheckConnectionResponse_<ContainerAllocator> Type;

  CheckConnectionResponse_()
    : status(0)
    , result(false)  {
    }
  CheckConnectionResponse_(const ContainerAllocator& _alloc)
    : status(0)
    , result(false)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;

   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CheckConnectionResponse_

typedef ::niryo_robot_reports::CheckConnectionResponse_<std::allocator<void> > CheckConnectionResponse;

typedef boost::shared_ptr< ::niryo_robot_reports::CheckConnectionResponse > CheckConnectionResponsePtr;
typedef boost::shared_ptr< ::niryo_robot_reports::CheckConnectionResponse const> CheckConnectionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator1> & lhs, const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator1> & lhs, const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_robot_reports

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f4d58b9ad5eeb6e8cebeafe8940be1d7";
  }

  static const char* value(const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf4d58b9ad5eeb6e8ULL;
  static const uint64_t static_value2 = 0xcebeafe8940be1d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_robot_reports/CheckConnectionResponse";
  }

  static const char* value(const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 status\n"
"bool result\n"
;
  }

  static const char* value(const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckConnectionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_robot_reports::CheckConnectionResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ROBOT_REPORTS_MESSAGE_CHECKCONNECTIONRESPONSE_H
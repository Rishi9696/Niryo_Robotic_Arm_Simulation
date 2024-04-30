// Generated by gencpp from file niryo_robot_metrics/GetMetricRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_METRICS_MESSAGE_GETMETRICREQUEST_H
#define NIRYO_ROBOT_METRICS_MESSAGE_GETMETRICREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_robot_metrics
{
template <class ContainerAllocator>
struct GetMetricRequest_
{
  typedef GetMetricRequest_<ContainerAllocator> Type;

  GetMetricRequest_()
    : name()  {
    }
  GetMetricRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;





  typedef boost::shared_ptr< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMetricRequest_

typedef ::niryo_robot_metrics::GetMetricRequest_<std::allocator<void> > GetMetricRequest;

typedef boost::shared_ptr< ::niryo_robot_metrics::GetMetricRequest > GetMetricRequestPtr;
typedef boost::shared_ptr< ::niryo_robot_metrics::GetMetricRequest const> GetMetricRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_robot_metrics

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1f3d28f1b044c87ULL;
  static const uint64_t static_value2 = 0x1e6eff2e9fc3c667ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_robot_metrics/GetMetricRequest";
  }

  static const char* value(const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
;
  }

  static const char* value(const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMetricRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_robot_metrics::GetMetricRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ROBOT_METRICS_MESSAGE_GETMETRICREQUEST_H

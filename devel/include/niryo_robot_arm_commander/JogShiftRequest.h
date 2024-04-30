// Generated by gencpp from file niryo_robot_arm_commander/JogShiftRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_JOGSHIFTREQUEST_H
#define NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_JOGSHIFTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_robot_arm_commander
{
template <class ContainerAllocator>
struct JogShiftRequest_
{
  typedef JogShiftRequest_<ContainerAllocator> Type;

  JogShiftRequest_()
    : cmd(0)
    , shift_values()  {
    }
  JogShiftRequest_(const ContainerAllocator& _alloc)
    : cmd(0)
    , shift_values(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _cmd_type;
  _cmd_type cmd;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _shift_values_type;
  _shift_values_type shift_values;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(JOINTS_SHIFT)
  #undef JOINTS_SHIFT
#endif
#if defined(_WIN32) && defined(POSE_SHIFT)
  #undef POSE_SHIFT
#endif

  enum {
    JOINTS_SHIFT = 1,
    POSE_SHIFT = 2,
  };


  typedef boost::shared_ptr< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> const> ConstPtr;

}; // struct JogShiftRequest_

typedef ::niryo_robot_arm_commander::JogShiftRequest_<std::allocator<void> > JogShiftRequest;

typedef boost::shared_ptr< ::niryo_robot_arm_commander::JogShiftRequest > JogShiftRequestPtr;
typedef boost::shared_ptr< ::niryo_robot_arm_commander::JogShiftRequest const> JogShiftRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cmd == rhs.cmd &&
    lhs.shift_values == rhs.shift_values;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_robot_arm_commander

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "982e671b205d513ea5a6ebe02f6d0ba8";
  }

  static const char* value(const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x982e671b205d513eULL;
  static const uint64_t static_value2 = 0xa5a6ebe02f6d0ba8ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_robot_arm_commander/JogShiftRequest";
  }

  static const char* value(const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 JOINTS_SHIFT = 1\n"
"int32 POSE_SHIFT = 2\n"
"\n"
"int32 cmd\n"
"\n"
"float32[] shift_values\n"
"\n"
;
  }

  static const char* value(const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.shift_values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JogShiftRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_robot_arm_commander::JogShiftRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "shift_values[]" << std::endl;
    for (size_t i = 0; i < v.shift_values.size(); ++i)
    {
      s << indent << "  shift_values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.shift_values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ROBOT_ARM_COMMANDER_MESSAGE_JOGSHIFTREQUEST_H

// Generated by gencpp from file niryo_robot_database/SetSettingsRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ROBOT_DATABASE_MESSAGE_SETSETTINGSREQUEST_H
#define NIRYO_ROBOT_DATABASE_MESSAGE_SETSETTINGSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_robot_database
{
template <class ContainerAllocator>
struct SetSettingsRequest_
{
  typedef SetSettingsRequest_<ContainerAllocator> Type;

  SetSettingsRequest_()
    : name()
    , value()
    , type()  {
    }
  SetSettingsRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , value(_alloc)
    , type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _value_type;
  _value_type value;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetSettingsRequest_

typedef ::niryo_robot_database::SetSettingsRequest_<std::allocator<void> > SetSettingsRequest;

typedef boost::shared_ptr< ::niryo_robot_database::SetSettingsRequest > SetSettingsRequestPtr;
typedef boost::shared_ptr< ::niryo_robot_database::SetSettingsRequest const> SetSettingsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.value == rhs.value &&
    lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator1> & lhs, const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_robot_database

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4851756ee6b781982d167580edb0773b";
  }

  static const char* value(const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4851756ee6b78198ULL;
  static const uint64_t static_value2 = 0x2d167580edb0773bULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_robot_database/SetSettingsRequest";
  }

  static const char* value(const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"string value\n"
"string type\n"
;
  }

  static const char* value(const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.value);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSettingsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_robot_database::SetSettingsRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.value);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ROBOT_DATABASE_MESSAGE_SETSETTINGSREQUEST_H

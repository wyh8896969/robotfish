// Generated by gencpp from file msg/ImuData.msg
// DO NOT EDIT!


#ifndef MSG_MESSAGE_IMUDATA_H
#define MSG_MESSAGE_IMUDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace msg
{
template <class ContainerAllocator>
struct ImuData_
{
  typedef ImuData_<ContainerAllocator> Type;

  ImuData_()
    : acc()
    , ang()
    , gyro()
    , mag()  {
    }
  ImuData_(const ContainerAllocator& _alloc)
    : acc(_alloc)
    , ang(_alloc)
    , gyro(_alloc)
    , mag(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _acc_type;
  _acc_type acc;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ang_type;
  _ang_type ang;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _gyro_type;
  _gyro_type gyro;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mag_type;
  _mag_type mag;





  typedef boost::shared_ptr< ::msg::ImuData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg::ImuData_<ContainerAllocator> const> ConstPtr;

}; // struct ImuData_

typedef ::msg::ImuData_<std::allocator<void> > ImuData;

typedef boost::shared_ptr< ::msg::ImuData > ImuDataPtr;
typedef boost::shared_ptr< ::msg::ImuData const> ImuDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg::ImuData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg::ImuData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'msg': ['/home/pi/robotfish/src/msg/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msg::ImuData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg::ImuData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg::ImuData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg::ImuData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg::ImuData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg::ImuData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg::ImuData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c17d5a58c7143586f17ab489cda5df38";
  }

  static const char* value(const ::msg::ImuData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc17d5a58c7143586ULL;
  static const uint64_t static_value2 = 0xf17ab489cda5df38ULL;
};

template<class ContainerAllocator>
struct DataType< ::msg::ImuData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg/ImuData";
  }

  static const char* value(const ::msg::ImuData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg::ImuData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string acc\n"
"string ang\n"
"string gyro\n"
"string mag\n"
;
  }

  static const char* value(const ::msg::ImuData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg::ImuData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.acc);
      stream.next(m.ang);
      stream.next(m.gyro);
      stream.next(m.mag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImuData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg::ImuData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg::ImuData_<ContainerAllocator>& v)
  {
    s << indent << "acc: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.acc);
    s << indent << "ang: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ang);
    s << indent << "gyro: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.gyro);
    s << indent << "mag: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_MESSAGE_IMUDATA_H
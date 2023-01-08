// Generated by gencpp from file rm_msgs/CapacityData.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_CAPACITYDATA_H
#define RM_MSGS_MESSAGE_CAPACITYDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rm_msgs
{
template <class ContainerAllocator>
struct CapacityData_
{
  typedef CapacityData_<ContainerAllocator> Type;

  CapacityData_()
    : chassis_power(0)
    , buffer_power(0)
    , limit_power(0)
    , cap_power(0.0)
    , is_online(false)
    , stamp()  {
    }
  CapacityData_(const ContainerAllocator& _alloc)
    : chassis_power(0)
    , buffer_power(0)
    , limit_power(0)
    , cap_power(0.0)
    , is_online(false)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _chassis_power_type;
  _chassis_power_type chassis_power;

   typedef uint8_t _buffer_power_type;
  _buffer_power_type buffer_power;

   typedef uint8_t _limit_power_type;
  _limit_power_type limit_power;

   typedef float _cap_power_type;
  _cap_power_type cap_power;

   typedef uint8_t _is_online_type;
  _is_online_type is_online;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::rm_msgs::CapacityData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::CapacityData_<ContainerAllocator> const> ConstPtr;

}; // struct CapacityData_

typedef ::rm_msgs::CapacityData_<std::allocator<void> > CapacityData;

typedef boost::shared_ptr< ::rm_msgs::CapacityData > CapacityDataPtr;
typedef boost::shared_ptr< ::rm_msgs::CapacityData const> CapacityDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::CapacityData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::CapacityData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::CapacityData_<ContainerAllocator1> & lhs, const ::rm_msgs::CapacityData_<ContainerAllocator2> & rhs)
{
  return lhs.chassis_power == rhs.chassis_power &&
    lhs.buffer_power == rhs.buffer_power &&
    lhs.limit_power == rhs.limit_power &&
    lhs.cap_power == rhs.cap_power &&
    lhs.is_online == rhs.is_online &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::CapacityData_<ContainerAllocator1> & lhs, const ::rm_msgs::CapacityData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::CapacityData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::CapacityData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::CapacityData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::CapacityData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::CapacityData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::CapacityData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c2ee01400115ac8523ac26598ec5c41b";
  }

  static const char* value(const ::rm_msgs::CapacityData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc2ee01400115ac85ULL;
  static const uint64_t static_value2 = 0x23ac26598ec5c41bULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/CapacityData";
  }

  static const char* value(const ::rm_msgs::CapacityData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 chassis_power\n"
"uint8 buffer_power\n"
"uint8 limit_power\n"
"float32 cap_power\n"
"bool is_online\n"
"\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::CapacityData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::CapacityData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.chassis_power);
      stream.next(m.buffer_power);
      stream.next(m.limit_power);
      stream.next(m.cap_power);
      stream.next(m.is_online);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CapacityData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::CapacityData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::CapacityData_<ContainerAllocator>& v)
  {
    s << indent << "chassis_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.chassis_power);
    s << indent << "buffer_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.buffer_power);
    s << indent << "limit_power: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.limit_power);
    s << indent << "cap_power: ";
    Printer<float>::stream(s, indent + "  ", v.cap_power);
    s << indent << "is_online: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_online);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_CAPACITYDATA_H

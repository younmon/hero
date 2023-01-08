// Generated by gencpp from file rm_msgs/DartRemainingTime.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_DARTREMAININGTIME_H
#define RM_MSGS_MESSAGE_DARTREMAININGTIME_H


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
struct DartRemainingTime_
{
  typedef DartRemainingTime_<ContainerAllocator> Type;

  DartRemainingTime_()
    : dart_remaining_time(0)
    , stamp()  {
    }
  DartRemainingTime_(const ContainerAllocator& _alloc)
    : dart_remaining_time(0)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _dart_remaining_time_type;
  _dart_remaining_time_type dart_remaining_time;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::rm_msgs::DartRemainingTime_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::DartRemainingTime_<ContainerAllocator> const> ConstPtr;

}; // struct DartRemainingTime_

typedef ::rm_msgs::DartRemainingTime_<std::allocator<void> > DartRemainingTime;

typedef boost::shared_ptr< ::rm_msgs::DartRemainingTime > DartRemainingTimePtr;
typedef boost::shared_ptr< ::rm_msgs::DartRemainingTime const> DartRemainingTimeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::DartRemainingTime_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::DartRemainingTime_<ContainerAllocator1> & lhs, const ::rm_msgs::DartRemainingTime_<ContainerAllocator2> & rhs)
{
  return lhs.dart_remaining_time == rhs.dart_remaining_time &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::DartRemainingTime_<ContainerAllocator1> & lhs, const ::rm_msgs::DartRemainingTime_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::DartRemainingTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::DartRemainingTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::DartRemainingTime_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a87dddfc4b0db93aa520d66f9e7e8df5";
  }

  static const char* value(const ::rm_msgs::DartRemainingTime_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa87dddfc4b0db93aULL;
  static const uint64_t static_value2 = 0xa520d66f9e7e8df5ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/DartRemainingTime";
  }

  static const char* value(const ::rm_msgs::DartRemainingTime_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 dart_remaining_time\n"
"\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::DartRemainingTime_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dart_remaining_time);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DartRemainingTime_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::DartRemainingTime_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::DartRemainingTime_<ContainerAllocator>& v)
  {
    s << indent << "dart_remaining_time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dart_remaining_time);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_DARTREMAININGTIME_H

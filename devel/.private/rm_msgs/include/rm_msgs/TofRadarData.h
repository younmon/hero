// Generated by gencpp from file rm_msgs/TofRadarData.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_TOFRADARDATA_H
#define RM_MSGS_MESSAGE_TOFRADARDATA_H


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
struct TofRadarData_
{
  typedef TofRadarData_<ContainerAllocator> Type;

  TofRadarData_()
    : distance(0.0)
    , strength(0.0)
    , stamp()  {
    }
  TofRadarData_(const ContainerAllocator& _alloc)
    : distance(0.0)
    , strength(0.0)
    , stamp()  {
  (void)_alloc;
    }



   typedef double _distance_type;
  _distance_type distance;

   typedef double _strength_type;
  _strength_type strength;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::rm_msgs::TofRadarData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::TofRadarData_<ContainerAllocator> const> ConstPtr;

}; // struct TofRadarData_

typedef ::rm_msgs::TofRadarData_<std::allocator<void> > TofRadarData;

typedef boost::shared_ptr< ::rm_msgs::TofRadarData > TofRadarDataPtr;
typedef boost::shared_ptr< ::rm_msgs::TofRadarData const> TofRadarDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::TofRadarData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::TofRadarData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::TofRadarData_<ContainerAllocator1> & lhs, const ::rm_msgs::TofRadarData_<ContainerAllocator2> & rhs)
{
  return lhs.distance == rhs.distance &&
    lhs.strength == rhs.strength &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::TofRadarData_<ContainerAllocator1> & lhs, const ::rm_msgs::TofRadarData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TofRadarData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::TofRadarData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TofRadarData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::TofRadarData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TofRadarData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::TofRadarData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::TofRadarData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "845e04d28c2cbf2fe417f0d2eaed29fe";
  }

  static const char* value(const ::rm_msgs::TofRadarData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x845e04d28c2cbf2fULL;
  static const uint64_t static_value2 = 0xe417f0d2eaed29feULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::TofRadarData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/TofRadarData";
  }

  static const char* value(const ::rm_msgs::TofRadarData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::TofRadarData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 distance\n"
"float64 strength\n"
"time stamp\n"
;
  }

  static const char* value(const ::rm_msgs::TofRadarData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::TofRadarData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
      stream.next(m.strength);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TofRadarData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::TofRadarData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::TofRadarData_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "strength: ";
    Printer<double>::stream(s, indent + "  ", v.strength);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_TOFRADARDATA_H

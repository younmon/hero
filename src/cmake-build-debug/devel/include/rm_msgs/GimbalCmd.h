// Generated by gencpp from file rm_msgs/GimbalCmd.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_GIMBALCMD_H
#define RM_MSGS_MESSAGE_GIMBALCMD_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PointStamped.h>

namespace rm_msgs
{
template <class ContainerAllocator>
struct GimbalCmd_
{
  typedef GimbalCmd_<ContainerAllocator> Type;

  GimbalCmd_()
    : stamp()
    , mode(0)
    , rate_yaw(0.0)
    , rate_pitch(0.0)
    , bullet_speed(0.0)
    , target_pos()  {
    }
  GimbalCmd_(const ContainerAllocator& _alloc)
    : stamp()
    , mode(0)
    , rate_yaw(0.0)
    , rate_pitch(0.0)
    , bullet_speed(0.0)
    , target_pos(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef double _rate_yaw_type;
  _rate_yaw_type rate_yaw;

   typedef double _rate_pitch_type;
  _rate_pitch_type rate_pitch;

   typedef double _bullet_speed_type;
  _bullet_speed_type bullet_speed;

   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _target_pos_type;
  _target_pos_type target_pos;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(RATE)
  #undef RATE
#endif
#if defined(_WIN32) && defined(TRACK)
  #undef TRACK
#endif
#if defined(_WIN32) && defined(DIRECT)
  #undef DIRECT
#endif

  enum {
    RATE = 0u,
    TRACK = 1u,
    DIRECT = 2u,
  };


  typedef boost::shared_ptr< ::rm_msgs::GimbalCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::GimbalCmd_<ContainerAllocator> const> ConstPtr;

}; // struct GimbalCmd_

typedef ::rm_msgs::GimbalCmd_<std::allocator<void> > GimbalCmd;

typedef boost::shared_ptr< ::rm_msgs::GimbalCmd > GimbalCmdPtr;
typedef boost::shared_ptr< ::rm_msgs::GimbalCmd const> GimbalCmdConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::GimbalCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::GimbalCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::GimbalCmd_<ContainerAllocator1> & lhs, const ::rm_msgs::GimbalCmd_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.mode == rhs.mode &&
    lhs.rate_yaw == rhs.rate_yaw &&
    lhs.rate_pitch == rhs.rate_pitch &&
    lhs.bullet_speed == rhs.bullet_speed &&
    lhs.target_pos == rhs.target_pos;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::GimbalCmd_<ContainerAllocator1> & lhs, const ::rm_msgs::GimbalCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::GimbalCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::GimbalCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::GimbalCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8bed4be5d11eafc7b7a7b054096b4208";
  }

  static const char* value(const ::rm_msgs::GimbalCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8bed4be5d11eafc7ULL;
  static const uint64_t static_value2 = 0xb7a7b054096b4208ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/GimbalCmd";
  }

  static const char* value(const ::rm_msgs::GimbalCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 RATE = 0\n"
"uint8 TRACK = 1\n"
"uint8 DIRECT = 2\n"
"\n"
"time stamp\n"
"uint8 mode\n"
"\n"
"# RATE\n"
"float64 rate_yaw\n"
"float64 rate_pitch\n"
"\n"
"# TRACK/DIRECT\n"
"float64 bullet_speed\n"
"geometry_msgs/PointStamped target_pos\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::rm_msgs::GimbalCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.mode);
      stream.next(m.rate_yaw);
      stream.next(m.rate_pitch);
      stream.next(m.bullet_speed);
      stream.next(m.target_pos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GimbalCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::GimbalCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::GimbalCmd_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "rate_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.rate_yaw);
    s << indent << "rate_pitch: ";
    Printer<double>::stream(s, indent + "  ", v.rate_pitch);
    s << indent << "bullet_speed: ";
    Printer<double>::stream(s, indent + "  ", v.bullet_speed);
    s << indent << "target_pos: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.target_pos);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_GIMBALCMD_H

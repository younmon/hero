// Generated by gencpp from file rm_msgs/ContinousDetectorSwitchRequest.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_CONTINOUSDETECTORSWITCHREQUEST_H
#define RM_MSGS_MESSAGE_CONTINOUSDETECTORSWITCHREQUEST_H


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
struct ContinousDetectorSwitchRequest_
{
  typedef ContinousDetectorSwitchRequest_<ContainerAllocator> Type;

  ContinousDetectorSwitchRequest_()
    : detector_switch(false)  {
    }
  ContinousDetectorSwitchRequest_(const ContainerAllocator& _alloc)
    : detector_switch(false)  {
  (void)_alloc;
    }



   typedef uint8_t _detector_switch_type;
  _detector_switch_type detector_switch;





  typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ContinousDetectorSwitchRequest_

typedef ::rm_msgs::ContinousDetectorSwitchRequest_<std::allocator<void> > ContinousDetectorSwitchRequest;

typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchRequest > ContinousDetectorSwitchRequestPtr;
typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchRequest const> ContinousDetectorSwitchRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator1> & lhs, const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator2> & rhs)
{
  return lhs.detector_switch == rhs.detector_switch;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator1> & lhs, const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "44769af043220a0ab56c4e47f2a8fda6";
  }

  static const char* value(const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x44769af043220a0aULL;
  static const uint64_t static_value2 = 0xb56c4e47f2a8fda6ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/ContinousDetectorSwitchRequest";
  }

  static const char* value(const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool detector_switch\n"
;
  }

  static const char* value(const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detector_switch);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContinousDetectorSwitchRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::ContinousDetectorSwitchRequest_<ContainerAllocator>& v)
  {
    s << indent << "detector_switch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.detector_switch);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_CONTINOUSDETECTORSWITCHREQUEST_H

// Generated by gencpp from file rm_msgs/ContinousDetectorSwitchResponse.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_CONTINOUSDETECTORSWITCHRESPONSE_H
#define RM_MSGS_MESSAGE_CONTINOUSDETECTORSWITCHRESPONSE_H


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
struct ContinousDetectorSwitchResponse_
{
  typedef ContinousDetectorSwitchResponse_<ContainerAllocator> Type;

  ContinousDetectorSwitchResponse_()
    : continous_is_success(false)  {
    }
  ContinousDetectorSwitchResponse_(const ContainerAllocator& _alloc)
    : continous_is_success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _continous_is_success_type;
  _continous_is_success_type continous_is_success;





  typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ContinousDetectorSwitchResponse_

typedef ::rm_msgs::ContinousDetectorSwitchResponse_<std::allocator<void> > ContinousDetectorSwitchResponse;

typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchResponse > ContinousDetectorSwitchResponsePtr;
typedef boost::shared_ptr< ::rm_msgs::ContinousDetectorSwitchResponse const> ContinousDetectorSwitchResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator1> & lhs, const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator2> & rhs)
{
  return lhs.continous_is_success == rhs.continous_is_success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator1> & lhs, const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1c6f82f10f321f14f93ae1c9cc5286d6";
  }

  static const char* value(const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1c6f82f10f321f14ULL;
  static const uint64_t static_value2 = 0xf93ae1c9cc5286d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/ContinousDetectorSwitchResponse";
  }

  static const char* value(const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool continous_is_success\n"
"\n"
;
  }

  static const char* value(const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.continous_is_success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContinousDetectorSwitchResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::ContinousDetectorSwitchResponse_<ContainerAllocator>& v)
  {
    s << indent << "continous_is_success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.continous_is_success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_CONTINOUSDETECTORSWITCHRESPONSE_H

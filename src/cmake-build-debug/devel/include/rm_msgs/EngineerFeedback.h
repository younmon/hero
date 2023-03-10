// Generated by gencpp from file rm_msgs/EngineerFeedback.msg
// DO NOT EDIT!


#ifndef RM_MSGS_MESSAGE_ENGINEERFEEDBACK_H
#define RM_MSGS_MESSAGE_ENGINEERFEEDBACK_H


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
struct EngineerFeedback_
{
  typedef EngineerFeedback_<ContainerAllocator> Type;

  EngineerFeedback_()
    : total_steps(0)
    , finished_step(0)
    , current_step()  {
    }
  EngineerFeedback_(const ContainerAllocator& _alloc)
    : total_steps(0)
    , finished_step(0)
    , current_step(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _total_steps_type;
  _total_steps_type total_steps;

   typedef uint8_t _finished_step_type;
  _finished_step_type finished_step;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _current_step_type;
  _current_step_type current_step;





  typedef boost::shared_ptr< ::rm_msgs::EngineerFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rm_msgs::EngineerFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct EngineerFeedback_

typedef ::rm_msgs::EngineerFeedback_<std::allocator<void> > EngineerFeedback;

typedef boost::shared_ptr< ::rm_msgs::EngineerFeedback > EngineerFeedbackPtr;
typedef boost::shared_ptr< ::rm_msgs::EngineerFeedback const> EngineerFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rm_msgs::EngineerFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rm_msgs::EngineerFeedback_<ContainerAllocator1> & lhs, const ::rm_msgs::EngineerFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.total_steps == rhs.total_steps &&
    lhs.finished_step == rhs.finished_step &&
    lhs.current_step == rhs.current_step;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rm_msgs::EngineerFeedback_<ContainerAllocator1> & lhs, const ::rm_msgs::EngineerFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rm_msgs::EngineerFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rm_msgs::EngineerFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rm_msgs::EngineerFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "87397c03e34e8b8835ff0de452ee02e3";
  }

  static const char* value(const ::rm_msgs::EngineerFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x87397c03e34e8b88ULL;
  static const uint64_t static_value2 = 0x35ff0de452ee02e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rm_msgs/EngineerFeedback";
  }

  static const char* value(const ::rm_msgs::EngineerFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# feedback\n"
"uint8 total_steps\n"
"uint8 finished_step\n"
"string current_step\n"
"\n"
;
  }

  static const char* value(const ::rm_msgs::EngineerFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.total_steps);
      stream.next(m.finished_step);
      stream.next(m.current_step);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EngineerFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rm_msgs::EngineerFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rm_msgs::EngineerFeedback_<ContainerAllocator>& v)
  {
    s << indent << "total_steps: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.total_steps);
    s << indent << "finished_step: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.finished_step);
    s << indent << "current_step: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.current_step);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RM_MSGS_MESSAGE_ENGINEERFEEDBACK_H

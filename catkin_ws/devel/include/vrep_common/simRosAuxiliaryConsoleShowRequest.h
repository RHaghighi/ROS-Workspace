// Generated by gencpp from file vrep_common/simRosAuxiliaryConsoleShowRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLESHOWREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLESHOWREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosAuxiliaryConsoleShowRequest_
{
  typedef simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> Type;

  simRosAuxiliaryConsoleShowRequest_()
    : consoleHandle(0)
    , showState(0)  {
    }
  simRosAuxiliaryConsoleShowRequest_(const ContainerAllocator& _alloc)
    : consoleHandle(0)
    , showState(0)  {
    }



   typedef int32_t _consoleHandle_type;
  _consoleHandle_type consoleHandle;

   typedef uint8_t _showState_type;
  _showState_type showState;




  typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosAuxiliaryConsoleShowRequest_

typedef ::vrep_common::simRosAuxiliaryConsoleShowRequest_<std::allocator<void> > simRosAuxiliaryConsoleShowRequest;

typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleShowRequest > simRosAuxiliaryConsoleShowRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleShowRequest const> simRosAuxiliaryConsoleShowRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/reza/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "33c6dd3e6b401d1a7bd21ef7d25dc9e5";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x33c6dd3e6b401d1aULL;
  static const uint64_t static_value2 = 0x7bd21ef7d25dc9e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosAuxiliaryConsoleShowRequest";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 consoleHandle\n\
uint8 showState\n\
";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.consoleHandle);
      stream.next(m.showState);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosAuxiliaryConsoleShowRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosAuxiliaryConsoleShowRequest_<ContainerAllocator>& v)
  {
    s << indent << "consoleHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.consoleHandle);
    s << indent << "showState: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.showState);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLESHOWREQUEST_H

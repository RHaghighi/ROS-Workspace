// Generated by gencpp from file vrep_common/simRosClearIntegerSignal.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSCLEARINTEGERSIGNAL_H
#define VREP_COMMON_MESSAGE_SIMROSCLEARINTEGERSIGNAL_H

#include <ros/service_traits.h>


#include <vrep_common/simRosClearIntegerSignalRequest.h>
#include <vrep_common/simRosClearIntegerSignalResponse.h>


namespace vrep_common
{

struct simRosClearIntegerSignal
{

typedef simRosClearIntegerSignalRequest Request;
typedef simRosClearIntegerSignalResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosClearIntegerSignal
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosClearIntegerSignal > {
  static const char* value()
  {
    return "78c7f457aa3ca9421b43a9c08cf8400a";
  }

  static const char* value(const ::vrep_common::simRosClearIntegerSignal&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosClearIntegerSignal > {
  static const char* value()
  {
    return "vrep_common/simRosClearIntegerSignal";
  }

  static const char* value(const ::vrep_common::simRosClearIntegerSignal&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosClearIntegerSignalRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosClearIntegerSignal > 
template<>
struct MD5Sum< ::vrep_common::simRosClearIntegerSignalRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosClearIntegerSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosClearIntegerSignalRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosClearIntegerSignalRequest> should match 
// service_traits::DataType< ::vrep_common::simRosClearIntegerSignal > 
template<>
struct DataType< ::vrep_common::simRosClearIntegerSignalRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosClearIntegerSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosClearIntegerSignalRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosClearIntegerSignalResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosClearIntegerSignal > 
template<>
struct MD5Sum< ::vrep_common::simRosClearIntegerSignalResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosClearIntegerSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosClearIntegerSignalResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosClearIntegerSignalResponse> should match 
// service_traits::DataType< ::vrep_common::simRosClearIntegerSignal > 
template<>
struct DataType< ::vrep_common::simRosClearIntegerSignalResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosClearIntegerSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosClearIntegerSignalResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSCLEARINTEGERSIGNAL_H

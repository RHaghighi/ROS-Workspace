// Generated by gencpp from file vrep_common/simRosSetJointPosition.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETJOINTPOSITION_H
#define VREP_COMMON_MESSAGE_SIMROSSETJOINTPOSITION_H

#include <ros/service_traits.h>


#include <vrep_common/simRosSetJointPositionRequest.h>
#include <vrep_common/simRosSetJointPositionResponse.h>


namespace vrep_common
{

struct simRosSetJointPosition
{

typedef simRosSetJointPositionRequest Request;
typedef simRosSetJointPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosSetJointPosition
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosSetJointPosition > {
  static const char* value()
  {
    return "126349edc9c2951f8756d658f1fbb6a6";
  }

  static const char* value(const ::vrep_common::simRosSetJointPosition&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosSetJointPosition > {
  static const char* value()
  {
    return "vrep_common/simRosSetJointPosition";
  }

  static const char* value(const ::vrep_common::simRosSetJointPosition&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosSetJointPositionRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetJointPosition > 
template<>
struct MD5Sum< ::vrep_common::simRosSetJointPositionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetJointPosition >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointPositionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetJointPositionRequest> should match 
// service_traits::DataType< ::vrep_common::simRosSetJointPosition > 
template<>
struct DataType< ::vrep_common::simRosSetJointPositionRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetJointPosition >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointPositionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosSetJointPositionResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetJointPosition > 
template<>
struct MD5Sum< ::vrep_common::simRosSetJointPositionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetJointPosition >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointPositionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetJointPositionResponse> should match 
// service_traits::DataType< ::vrep_common::simRosSetJointPosition > 
template<>
struct DataType< ::vrep_common::simRosSetJointPositionResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetJointPosition >::value();
  }
  static const char* value(const ::vrep_common::simRosSetJointPositionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETJOINTPOSITION_H

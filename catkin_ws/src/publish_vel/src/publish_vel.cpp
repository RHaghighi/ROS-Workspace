#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>
#include <math.h>       
#include <sstream>
#include <std_msgs/Float32.h>
#include "geometry_msgs/Twist.h"


geometry_msgs::Twist velocity;


float e = .05;
float R = 0.015;


void Callback_velocity(const geometry_msgs::Twist::ConstPtr& vel)
{

/* velocity.data=0;
if (vel->linear.x>0.1)
     velocity.data=150;
*/

  velocity.linear.x = 100*(vel->linear.x + e * vel->angular.z)/R;
  velocity.linear.y = 100*(vel->linear.x - e * vel->angular.z)/R;

  if (velocity.linear.x>250)
     velocity.linear.x = 160;

  if (velocity.linear.x>50 and velocity.linear.x<200)
     velocity.linear.x = 150;

  if (velocity.linear.x>-200 and velocity.linear.x<-50)
     velocity.linear.x = -150;

  if (velocity.linear.y>50 and velocity.linear.y<200)
     velocity.linear.y = 150;

  if (velocity.linear.y>-200 and velocity.linear.y<-50)
     velocity.linear.y = -150;

  if (velocity.linear.y>250)
     velocity.linear.y = 160;

  if (velocity.linear.x<-250)
     velocity.linear.x = -160;

  if (velocity.linear.y<-250)
     velocity.linear.y = -160;

  if (velocity.linear.x>-50 and velocity.linear.y<50)
     velocity.linear.y = 0;

  if (velocity.linear.y>-50 and velocity.linear.y<50)
     velocity.linear.y = 0;

  ROS_INFO("velocity x = %f \n",velocity.linear.x);
  ROS_INFO("velocity y = %f \n",velocity.linear.y);

/*
  if (velocity.linear.x>-100 and velocity.linear.x<100)
     velocity.linear.x = (10-abs(velocity.linear.x)/20)*velocity.linear.x;


  if (velocity;.linear.x>-100 and velocity.linear.x<100)
     velocity.linear.x = (10-abs(velocity.linear.x)/20)*velocity.linear.x;
*/


/*
  else if (a==80)  //DOWN
  { 
     velocity.linear.x = -250;
     velocity.linear.y = -250;
  }
*/


}



int main(int argc, char** argv)
{
    ros::init(argc, argv, "publish_vel"); 

    ros::NodeHandle n;
/*
    ros::Subscriber velocity_subscriber = n.subscribe<geometry_msgs::Twist>("/navigation_velocity_smoother/raw_cmd_vel", 1000, Callback_velocity);

    ros::Publisher pub=n.advertise<std_msgs::Float32>("velocity", .1);
*/

    ros::Subscriber velocity_subscriber = n.subscribe<geometry_msgs::Twist>("/navigation_velocity_smoother/raw_cmd_vel", 1000, Callback_velocity);

    ros::Publisher pub=n.advertise<geometry_msgs::Twist>("velocity", .1);

     
    ros::Rate loop_rate(1);

      while (ros::ok())
      {

      pub.publish(velocity);
      ros::spinOnce();
      loop_rate.sleep();

        
      }

     return 0; 

}

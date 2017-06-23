#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>
#include <math.h>       
#include <sstream>
#include <sensor_msgs/LaserScan.h>
#include <std_msgs/Float32.h>

std_msgs::Float32 mindist;

void Callback_laser(const sensor_msgs::LaserScan::ConstPtr& scan)
{

float minval = scan->ranges[0];
    for(int i=0;i<scan->ranges.size();i++)
    {
        if(scan->ranges[i]<minval or minval!=minval)
           minval=scan->ranges[i];
    }

       ROS_INFO("min_range[%f] \n",minval);

       mindist.data=minval;

}



int main(int argc, char** argv)
{
    ros::init(argc, argv, "subscribing"); 

    ros::NodeHandle n;

    ros::Subscriber laser_subscriber = n.subscribe<sensor_msgs::LaserScan>("scan", 1000, Callback_laser);

    ros::Publisher pub=n.advertise<std_msgs::Float32>("mindist", .1);
     
    ros::Rate loop_rate(1);

      while (ros::ok())
      {

         pub.publish(mindist);
         ros::spinOnce();
         loop_rate.sleep();
      }

     return 0; 

}

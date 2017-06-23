#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>
#include <math.h>       
#include <sstream>
#include <std_msgs/Float32.h>
#include "geometry_msgs/Twist.h"

#include <termios.h>  

int getch()
{
  static struct termios oldt, newt;
  tcgetattr( STDIN_FILENO, &oldt);           // save old settings
  newt = oldt;
  newt.c_lflag &= ~(ICANON);                 // disable buffering      
  tcsetattr( STDIN_FILENO, TCSANOW, &newt);  // apply new settings

  int c = getchar();  // read character (non-blocking)

  tcsetattr( STDIN_FILENO, TCSANOW, &oldt);  // restore old settings
  return c;
}


geometry_msgs::Twist velocity;



int main(int argc, char** argv)
{
    ros::init(argc, argv, "keyboard_teleop"); 

    ros::NodeHandle n;

    ros::Publisher pub=n.advertise<geometry_msgs::Twist>("velocity", .1);
     
    ros::Rate loop_rate(1);

      while (ros::ok())
      {

      int c = getch();
      if (c == 65)   // UP
      {
        velocity.linear.x = 255;
        velocity.linear.y = 255;
      }

      if (c == 66)   // DOWN
      {
        velocity.linear.x = -255;
        velocity.linear.y = -255;
      }

      if (c == 67)   // RIGHT
      {
        velocity.linear.x = 255;
        velocity.linear.y =  -255;
      }

      if (c == 68)   // LEFT
      {
        velocity.linear.x =   -255;
        velocity.linear.y =  255;
      }

      if (c == 's')   // LEFT
      {
        velocity.linear.x = 0;
        velocity.linear.y = 0;
      }


      ROS_INFO("velocity x = %f \n",velocity.linear.x);
      ROS_INFO("velocity y = %f \n",velocity.linear.y);

      pub.publish(velocity);
      ros::spinOnce();
      loop_rate.sleep();

        
      }

     return 0; 

}

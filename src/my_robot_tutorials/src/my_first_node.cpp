#include <ros/ros.h>

int main(int argc, char** argv)
{
    ros::init(argc,argv, "my_cpp_node");
    ros::NodeHandle nh;
    ROS_INFO("My node started");
    ros::Duration(1.0).sleep();
    ROS_INFO("Exit now");
    ros::Rate rate(10);
    while(ros::ok()){
        ROS_INFO("HELLO");
        rate.sleep();
        
    }
}
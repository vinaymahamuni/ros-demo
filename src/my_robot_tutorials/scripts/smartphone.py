#!/usr/bin/env python3
import rospy
from std_msgs.msg import String 
def callback_receive_data(msg):
    rospy.loginfo("Message"+str(msg.data))

if __name__ == '__main__':
    rospy.init_node('smartphone')
    rospy.loginfo('Node has been started')
    pub = rospy.Subscriber("/robot_news_radio",String,callback_receive_data)
    rospy.spin()

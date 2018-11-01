#include <ros/ros.h>
#include <awesome_library/awesomeness.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "fantastic");
  awesome_library::Awesomeness a;
  ROS_INFO("Fantastic %f", a.pose.x);
  ros::spin();
  return 0;
}

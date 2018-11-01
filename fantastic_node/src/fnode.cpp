#include "rclcpp/rclcpp.hpp"
#include <awesome_library/awesomeness.h>

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  awesome_library::Awesomeness a;
  RCLCPP_INFO(rclcpp::get_logger("FantasticNode"), "Fantastic %f", a.pose.x);
  ros::spin();
  return 0;
}

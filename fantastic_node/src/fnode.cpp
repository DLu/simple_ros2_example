#include "rclcpp/rclcpp.hpp"
#include <awesome_library/awesomeness.h>

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("fantastic");
  awesome_library::Awesomeness a;
  RCLCPP_INFO(rclcpp::get_logger("FantasticNode"), "Fantastic %f", a.pose.x);
  rclcpp::spin(node);
  return 0;
}

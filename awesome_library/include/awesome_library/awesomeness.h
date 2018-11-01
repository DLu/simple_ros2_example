#ifndef AWESOME_LIBRARY_AWESOMENESS_H
#define AWESOME_LIBRARY_AWESOMENESS_H

#include <geometry_msgs/msg/pose2_d.hpp>

namespace awesome_library
{
class Awesomeness
{
public:
  Awesomeness();
  geometry_msgs::msg::Pose2D pose;
};
}  // namespace awesome_library

#endif  // AWESOME_LIBRARY_AWESOMENESS_H

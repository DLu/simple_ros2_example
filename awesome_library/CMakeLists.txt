cmake_minimum_required(VERSION 3.5)
project(awesome_library)
find_package(ament_cmake_ros REQUIRED)
find_package(ament_cmake_auto REQUIRED)

set(include_dirs
  include
)
set(catkin_LIBRARIES
  "geometry_msgs"
)

ament_auto_find_build_dependencies(REQUIRED ${catkin_LIBRARIES})

ament_export_include_directories(${include_dirs})

ament_auto_add_library(awesomeness
  src/awesomeness.cpp
)
ament_target_dependencies(awesomeness ${catkin_LIBRARIES})

ament_auto_package()

cmake_minimum_required(VERSION 3.5)
project(fantastic_node)
find_package(ament_cmake_ros REQUIRED)
find_package(ament_cmake_auto REQUIRED)

set(include_dirs
  ${awesome_library_INCLUDE_DIRS}
)
set(catkin_LIBRARIES
  "rclcpp"
  "awesome"
)
ament_auto_find_build_dependencies(REQUIRED ${catkin_LIBRARIRES})      
ament_export_include_directories(${include_dirs})


include_directories(${include_dirs})

ament_auto_add_executable(${PROJECT_NAME}_node src/fnode.cpp)
ament_target_dependencies(fantastic_node_node ${catkin_LIBRARIES})

install(
  TARGETS fantastic_node_node
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

ament_auto_package()

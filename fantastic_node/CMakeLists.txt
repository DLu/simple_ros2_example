cmake_minimum_required(VERSION 3.5)
project(fantastic_node)
find_package(ament_cmake REQUIRED)
find_package(awesome_library REQUIRED)
find_package(rclcpp REQUIRED)

include_directories(${awesome_library_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}_node src/fnode.cpp)

ament_target_dependencies(fantastic_node_node "awesome_library")
ament_export_dependencies(awesome_library roscpp)
ament_package()
install(TARGETS fantastic_node_node
        RUNTIME DESTINATION bin
)
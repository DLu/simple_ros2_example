cmake_minimum_required(VERSION 3.5)
project(fantastic_node)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_auto REQUIRED)
find_package(awesome_library REQUIRED)
find_package(rclcpp REQUIRED)
set(package_deps "rclcpp" "awesome_library")
set(include_dirs
        ${awesome_library_INCLUDE_DIRS}
)

ament_export_include_directories(${include_dirs})
include_directories(${include_dirs})

ament_auto_add_executable(${PROJECT_NAME}_node src/fnode.cpp)
ament_target_dependencies(fantastic_node_node ${package_deps})

ament_auto_package()

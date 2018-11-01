cmake_minimum_required(VERSION 3.5)
project(fantastic_node)
find_package(ament_cmake REQUIRED)
find_package(awesome_library REQUIRED)
find_package(rclcpp REQUIRED)
set(include_dirs
        ${awesome_library_INCLUDE_DIRS}
)
set(catkin_LIBRARIES
        ${rclcpp_LIBRARIES} ${awesome_library_LIBRARIES}
)
ament_export_include_directories(${include_dirs})



ament_package()

include_directories(${include_dirs})

add_executable(${PROJECT_NAME}_node src/fnode.cpp)

target_link_libraries(fantastic_node_node ${catkin_LIBRARIES})
install(TARGETS fantastic_node_node
        RUNTIME DESTINATION lib/${PROJECT_NAME}
)

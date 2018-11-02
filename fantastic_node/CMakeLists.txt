cmake_minimum_required(VERSION 3.5)
project(fantastic_node)
find_package(ament_cmake REQUIRED)
find_package(awesome_library REQUIRED)
find_package(rclcpp REQUIRED)

include_directories(${awesome_library_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} src/fnode.cpp)
target_link_libraries(fantastic_node ${rclcpp_LIBRARIES} ${awesome_library_LIBRARIES})
install(TARGETS fantastic_node
        RUNTIME DESTINATION lib/${PROJECT_NAME}
)
ament_package()


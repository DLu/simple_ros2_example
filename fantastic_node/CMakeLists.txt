cmake_minimum_required(VERSION 2.8.3)
project(fantastic_node)

find_package(catkin REQUIRED COMPONENTS awesome_library roscpp)

catkin_package(
    CATKIN_DEPENDS awesome_library roscpp
)

include_directories(${catkin_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}_node src/fnode.cpp)

target_link_libraries(fantastic_node_node ${catkin_LIBRARIES})
install(TARGETS fantastic_node_node
        RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
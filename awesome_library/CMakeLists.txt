cmake_minimum_required(VERSION 2.8.3)
project(awesome_library)

find_package(catkin REQUIRED COMPONENTS geometry_msgs)

catkin_package(
    CATKIN_DEPENDS geometry_msgs
    INCLUDE_DIRS include
    LIBRARIES awesomeness
)

add_library(awesomeness src/awesomeness.cpp)
target_link_libraries(awesomeness ${catkin_LIBRARIES})

include_directories(include ${catkin_INCLUDE_DIRS})
install(DIRECTORY include/${PROJECT_NAME}/
        DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)
install(TARGETS awesomeness
        ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
        LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
        RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)
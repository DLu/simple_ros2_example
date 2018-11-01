cmake_minimum_required(VERSION 3.5)
project(awesome_library)
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
set(include_dirs
        include
        ${geometry_msgs_INCLUDE_DIRS}
)
set(catkin_LIBRARIES
        ${geometry_msgs_LIBRARIES}
)
ament_export_include_directories(${include_dirs})



ament_package()

add_library(awesomeness src/awesomeness.cpp)
target_link_libraries(awesomeness ${catkin_LIBRARIES})

include_directories(${include_dirs})
install(DIRECTORY include/${PROJECT_NAME}/
        DESTINATION include/${PROJECT_NAME}
)
install(TARGETS awesomeness
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
        RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)
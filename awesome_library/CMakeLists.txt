cmake_minimum_required(VERSION 3.5)
project(awesome_library)
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)

include_directories(include ${geometry_msgs_INCLUDE_DIRS})

add_library(awesomeness src/awesomeness.cpp)
ament_target_dependencies(awesomeness "geometry_msgs")
ament_export_include_directories(include)
ament_export_libraries(awesomeness)
ament_export_dependencies(geometry_msgs)
ament_package()
install(DIRECTORY include/${PROJECT_NAME}/
        DESTINATION include/${PROJECT_NAME}
)
install(TARGETS awesomeness
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
)
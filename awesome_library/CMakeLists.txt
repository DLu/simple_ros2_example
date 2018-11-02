cmake_minimum_required(VERSION 3.5)
project(awesome_library)
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)

include_directories(include)

add_library(awesome_library src/awesomeness.cpp)
ament_target_dependencies(awesome_library "geometry_msgs")
ament_export_include_directories(${include_dirs})
ament_export_libraries(${PROJECT_NAME})
ament_export_dependencies(geometry_msgs)
ament_package()

install(DIRECTORY include/
        DESTINATION include/${PROJECT_NAME}
)
install(TARGETS awesome_library
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
)


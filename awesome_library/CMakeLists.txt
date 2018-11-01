cmake_minimum_required(VERSION 3.5)
project(awesome_library)
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_auto REQUIRED)
find_package(geometry_msgs REQUIRED)
set(package_deps "geometry_msgs")

set(include_dirs
        include
        ${geometry_msgs_INCLUDE_DIRS}
)
ament_auto_find_build_dependencies(REQUIRED ${package_deps})

ament_export_include_directories(${include_dirs})
include_directories(${include_dirs})

ament_auto_add_library(awesomeness src/awesomeness.cpp)
ament_target_dependencies(awesomeness ${package_deps})

ament_auto_package()

install(DIRECTORY include/${PROJECT_NAME}/
        DESTINATION include/${PROJECT_NAME}
)
install(TARGETS awesomeness
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION lib/${PROJECT_NAME}
)

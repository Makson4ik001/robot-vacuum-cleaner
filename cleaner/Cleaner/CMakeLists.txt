cmake_minimum_required(VERSION 3.20)

project(VACUUM_CLEANER_CORE)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories("./Vector2/")

set_property(GLOBAL PROPERTY SOURCES)
set_property(GLOBAL PROPERTY HEADERS)

add_subdirectory(Render)
add_subdirectory(Graph)
add_subdirectory(Geometry)
add_subdirectory(Controller)
add_subdirectory(Vector2)

get_property(tSources GLOBAL PROPERTY SOURCES)
get_property(tHeaders GLOBAL PROPERTY HEADERS)
set(tSources "${tSources}Main.cpp;")
message("${tSources}")
message("${tHeaders}")
message("${PROJECT_SOURCE_DIR}")

add_executable(vacuum_cleaner ${tSources})
target_link_libraries(vacuum_cleaner PUBLIC Vector2)
target_include_directories(vacuum_cleaner PUBLIC BEFORE 
                        "${PROJECT_SOURCE_DIR}/Vector2")

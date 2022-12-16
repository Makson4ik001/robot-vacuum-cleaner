CMAKE_MINIMUM_REQUIRED(VERSION 3.20)

add_subdirectory(GraphGenerator)
add_subdirectory(GridGenerator)

get_property(tHEADERS GLOBAL PROPERTY HEADERS)
set(tHEADERS "${tHEADERS}${CMAKE_CURRENT_SOURCE_DIR}/Controller.h;")
set_property(GLOBAL PROPERTY HEADERS "${tHEADERS}")

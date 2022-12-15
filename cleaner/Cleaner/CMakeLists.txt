CMAKE_MINIMUM_REQUIRED(3.20)

project_add_subdirectory(Render)
project_add_subdirectory(Graph)
project_add_subdirectory(Geometry)
project_add_subdirectory(Controller)

add_executable(vacuum_cleaner)

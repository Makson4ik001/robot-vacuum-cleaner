get_property(tSOURCES GLOBAL PROPERTY SOURCES)
get_property(tHEADERS GLOBAL PROPERTY HEADERS)

set(cur "${CMAKE_CURRENT_SOURCE_DIR}")
set(tSOURCES "${tSOURCES}${cur}/Geometry.cpp;")
set(tHEADERS "${tHEADERS}${cur}/Geometry.h;")

set_property(GLOBAL PROPERTY SOURCES "${tSOURCES}")
set_property(GLOBAL PROPERTY HEADERS "${tHEADERS}")

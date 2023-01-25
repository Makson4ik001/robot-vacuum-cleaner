get_property(tSOURCES GLOBAL PROPERTY SOURCES)
get_property(tHEADERS GLOBAL PROPERTY HEADERS)

set(cur "${CMAKE_CURRENT_SOURCE_DIR}")
set(tSOURCES "${tSOURCES}${cur}/SimplePathBuilder.cpp;${cur}/magicPathBuilder.cpp;")
set(tHEADERS "${tHEADERS}${cur}/PathBuilder.h;${cur}/SimplePathBuilder.h;${cur}/magic.h")

set_property(GLOBAL PROPERTY SOURCES "${tSOURCES}")
set_property(GLOBAL PROPERTY HEADERS "${tHEADERS}")

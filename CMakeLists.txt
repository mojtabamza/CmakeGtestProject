cmake_minimum_required(VERSION 3.8)
project(CMAKEPROJECTSTYLE)

#generate lib and bin directories
set(ROOT ${PROJECT_SOURCE_DIR})
set(EXECUTABLE_OUTPUT_PATH ${ROOT}/bin)
set(LIBRARY_OUTPUT_PATH ${ROOT}/lib)

enable_testing()
add_subdirectory(googletest)


include_directories(src)

add_subdirectory(src)
add_subdirectory(test)



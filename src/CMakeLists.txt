cmake_minimum_required(VERSION 3.8)
project(CMAKEPROJECTSTYLE)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O3")

add_library(tools mylib/lib.cpp)

add_executable(CMAKEPROJECTSTYLE main.cpp)
target_link_libraries(CMAKEPROJECTSTYLE tools)



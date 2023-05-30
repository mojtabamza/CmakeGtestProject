cmake_minimum_required(VERSION 3.8)

project(mytest)

#add_subdirectory(googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(mytest test.cpp)

target_link_libraries(mytest gtest gtest_main)
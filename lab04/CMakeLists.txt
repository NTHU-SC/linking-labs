cmake_minimum_required(VERSION 2.6)

include_directories(${CMAKE_SOURCE_DIR})

project(main.out)

add_executable(main.out main.cpp)
add_library(print print.cpp)

TARGET_LINK_LIBRARIES(main.out print)



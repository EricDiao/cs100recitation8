cmake_minimum_required(VERSION 3.5)
project(recitation8)

set(CMAKE_CXX_STANDARD 14)

add_library(map map.cpp)
add_executable(recitation8 main.cpp)
target_link_libraries(recitation8 map)

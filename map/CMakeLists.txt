cmake_minimum_required(VERSION 3.5)
project(map)

set(CMAKE_CXX_STANDARD 11)

set(map_SRCS map.cpp)
add_library(map ${map_SRCS})
set(map_test_SRCS main.cpp)
add_executable(map_test ${map_test_SRCS})
target_link_libraries(map_test map)

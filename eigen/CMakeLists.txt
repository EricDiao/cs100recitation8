cmake_minimum_required(VERSION 3.5)
project(eigen_test)

set(CMAKE_CXX_STANDARD 11)

find_package(Eigen3 3.3 REQUIRED)

set(eigen_test_SRCS main.cpp)
add_executable(eigen_test ${eigen_test_SRCS})
target_link_libraries(eigen_test Eigen3::Eigen)

cmake_minimum_required(VERSION 3.6)
project(hw_5_example)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Movie.cpp Movie.hpp)
add_executable(hw_5_example ${SOURCE_FILES})
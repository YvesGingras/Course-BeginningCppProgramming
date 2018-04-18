cmake_minimum_required(VERSION 3.10)
project(Section6)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_subdirectory(InitializingVariables)


add_executable(
        Section6 main.cpp
        InitializingVariables main.cpp)
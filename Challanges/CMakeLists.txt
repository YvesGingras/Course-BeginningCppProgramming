cmake_minimum_required(VERSION 3.10)
project(Challanges)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(12-PointersAndReferences)
add_subdirectory(06-VariablesAndConstants)

add_executable(Challanges main.cpp
                12-PointersAndReferences main.cpp
                06-VariablesAndConstants main.cpp
        )
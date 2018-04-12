cmake_minimum_required(VERSION 3.10)
project(Section4)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_subdirectory(FirstProgram)
add_subdirectory(CompilerErrors)
add_subdirectory(CompilerWarnings)
add_subdirectory(LinkerError)
add_subdirectory(Challenge)

add_executable(Section4 main.cpp
        FirstProgram main.cpp
        CompilerErrors main.cpp
        CompilerWarnings main.cpp
        LinkerError main.cpp
        Challenge main.cpp
        )
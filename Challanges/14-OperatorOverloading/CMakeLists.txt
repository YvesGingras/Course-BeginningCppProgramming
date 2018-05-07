cmake_minimum_required(VERSION 3.10)
project(14_OperatorOverloading)

set(CMAKE_CXX_STANDARD 14)

add_executable(14_OperatorOverloading main.cpp GlobalFunctions/MyString.cpp GlobalFunctions/MyString.h)
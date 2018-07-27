cmake_minimum_required(VERSION 3.10)
project(20_STL)

set(CMAKE_CXX_STANDARD 14)

add_executable( 20_STL main.cpp
                Source/Item.h
                Source/MyPair.h
                Source/MyArray.h
                Source/Person.h Challenge3Functions.h)
cmake_minimum_required(VERSION 3.10)
project(Challanges)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(06-VariablesAndConstants)
add_subdirectory(07-ArraysAndVectors)
add_subdirectory(08-StatementsAndOperators)
add_subdirectory(09-ControllingProgramFlow)
add_subdirectory(10-CharactersAndStrings)
add_subdirectory(11-Functions)
add_subdirectory(12-PointersAndReferences)
add_subdirectory(13-ClassesAndobjects)
add_subdirectory(14-OperatorOverloading)
add_subdirectory(15-Inheritance)
add_subdirectory(16-Polymorphism)
add_subdirectory(17-SmartPointers)




add_executable(Challanges main.cpp
                06-VariablesAndConstants main.cpp
                07-ArraysAndVectors main.cpp
                08-StatementsAndOperators main.cpp
                09-ControllingProgramFlow
                10-CharactersAndStrings main.cpp
                11-Functions main.cpp
                12-PointersAndReferences main.cpp
                13-ClassesAndobjects main.cpp
                14-OperatorOverloading main.cpp
                15-Inheritance main.cpp
                16-Polymorphism main.cpp
                17-SmartPointers main.cpp
                )
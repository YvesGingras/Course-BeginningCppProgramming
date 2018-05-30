cmake_minimum_required(VERSION 3.10)
project(18_ExceptionHandling)

set(CMAKE_CXX_STANDARD 14)

add_executable(18_ExceptionHandling main.cpp
                AccountsClasses/Account.h
                AccountsClasses/Account.cpp
                AccountsClasses/Savings_Account.h
                AccountsClasses/Savings_Account.cpp
                )



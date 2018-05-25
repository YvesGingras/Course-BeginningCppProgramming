cmake_minimum_required(VERSION 3.10)
project(18_ExceptionHandling)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        18_ExceptionHandling main.cpp
        Account.h Account.cpp
        Savings_Account.h Savings_Account.cpp
#        CheckingAccount.h CheckingAccount.cpp
        InsufficientFundsException.h InsufficientFundsException.h)

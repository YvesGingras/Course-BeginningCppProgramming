cmake_minimum_required(VERSION 3.10)
project(17_SmartPointers)

set(CMAKE_CXX_STANDARD 14)
#include_directories("AccountClasses")

add_executable(17_SmartPointers main.cpp
        Account.cpp Account.h
        CheckingAccount.cpp CheckingAccount.h
        Savings_Account.cpp Savings_Account.h
        TrustAccount.cpp TrustAccount.h
        IPrintable.h)
#add_executable( Account.cpp Account.h CheckingAccount.cpp CheckingAccount.h IPrintable.h)


cmake_minimum_required(VERSION 3.10)
project(15_Inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(15_Inheritance main.cpp Account.cpp Account.h
                Savings_Account.cpp Savings_Account.h
                Account_Util.cpp Account_Util.h CheckingAccount.cpp CheckingAccount.h TrustAccount.cpp TrustAccount.h)
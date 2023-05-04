cmake_minimum_required(VERSION 3.24)
project(Shopper)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Shopper
        main.cpp
        class/Product.cpp
        class/Product.h
        class/Customer.cpp
        class/Customer.h)

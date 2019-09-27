cmake_minimum_required(VERSION 3.11)
project(myLib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3")

set(SOURCE_FILES myLib.h myLib.cpp)

add_library(myLib SHARED STATIC ${SOURCE_FILES})

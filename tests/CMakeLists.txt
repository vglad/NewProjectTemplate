cmake_minimum_required (VERSION 3.11)
project(AllTests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3")

set(SOURCE_FILES testMain.cpp ../include/catch.hpp
                 Tests.cpp)

add_executable (AllTests ${SOURCE_FILES})

target_include_directories(AllTests PRIVATE ../include ../src)

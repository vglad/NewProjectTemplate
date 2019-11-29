cmake_minimum_required(VERSION 3.5)
project(Lib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(SOURCE_FILES ../../include/lib/lib.hpp lib.cpp)

add_library(lib STATIC ${SOURCE_FILES})
target_include_directories(lib PRIVATE
                           ../../include/detail
                           ../../include/lib)

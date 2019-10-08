cmake_minimum_required (VERSION 3.11)
project(MainApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

add_subdirectory(myLib)
set(SOURCE_FILES main.cpp)

add_executable(MainApp ${SOURCE_FILES})
target_link_libraries(MainApp myLib)
target_include_directories(MainApp PRIVATE ../include myLib)

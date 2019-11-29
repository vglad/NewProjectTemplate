cmake_minimum_required (VERSION 3.5)
project(NewProjectTemplate)

add_subdirectory(thirdparty/catch2)
add_subdirectory(src/lib)
add_subdirectory(src)
add_subdirectory(tests)
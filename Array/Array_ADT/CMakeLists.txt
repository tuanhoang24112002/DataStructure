cmake_minimum_required(VERSION 3.10)
project(array_project)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_NAME array_program)
set(LIBRARY_NAME library)

add_subdirectory(Library)
add_subdirectory(Source)
cmake_minimum_required(VERSION 3.10)
project(String)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_NAME string_program)
set(LIBRARY_NAME string_library)

add_subdirectory(Source)
add_subdirectory(Library)
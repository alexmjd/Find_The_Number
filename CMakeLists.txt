cmake_minimum_required(VERSION 3.17)
project(Find_The_Number)

set(CMAKE_CXX_STANDARD 17)

# Adding headers directory
include_directories(include)

# Adding code source directory
aux_source_directory(src/ SRC)

add_executable(${PROJECT_NAME} ${SRC} main.cpp)

cmake_minimum_required(VERSION 3.17)
project(Find_The_Number)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(${PROJECT_NAME} main.cpp src/utils.cpp src/game.cpp)

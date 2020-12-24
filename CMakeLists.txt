cmake_minimum_required(VERSION 3.17)
project(Find_The_Number)

set(CMAKE_CXX_STANDARD 17)

# Adding headers directory
include_directories(include)

# SET SFML UP TO YOUR PROJECT
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIR})

# Adding code source directory
aux_source_directory(src/ SRC)

add_executable(${PROJECT_NAME} ${SRC} main.cpp)

target_link_libraries (${PROJECT_NAME} sfml-graphics sfml-window sfml-system sfml-network sfml-audio)
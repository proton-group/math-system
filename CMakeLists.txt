cmake_minimum_required(VERSION 3.1.0)

project(mathsystem VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(math_gui)

add_executable(mathsystem
    mathsystem.cpp
)

add_subdirectory(math_gui)

target_link_libraries(mathsystem math_gui)
cmake_minimum_required(VERSION 3.5)

project(stringTests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

get_filename_component(PARENT_DIR ../ ABSOLUTE)
include_directories(${PARENT_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}../)
get_filename_component(VAR_PARENT ${CMAKE_CURRENT_SOURCE_DIR}/.. ABSOLUTE)
add_executable(stringTests
        main.cpp
        ../strings.h

        tests.h)

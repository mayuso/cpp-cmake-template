cmake_minimum_required(VERSION 3.16)

project(cpp-cmake-template VERSION 0.0.1 LANGUAGES CXX)

include(CTest)

add_subdirectory(libs)
add_subdirectory(app)
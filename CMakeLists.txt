project(cmake_training)
get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)
cmake_minimum_required(VERSION 2.6)
set(CMAKE_CX_STANDARD 20)
set(SOURCES main.cpp add.h add.cpp sub.h sub.cpp)
add_executable(cmake_training ${SOURCES})






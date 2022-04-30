project(cmake_training)
get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)
cmake_minimum_required(VERSION 2.6)
set(CMAKE_CX_STANDARD 20)
set(SOURCES main.cpp)
add_library(mysub STATIC sub.cpp)
add_library(myadd STATIC add.cpp)
add_executable(cmake_training ${SOURCES})
target_link_libraries(cmake_training mysub myadd)







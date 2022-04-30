project(cmake_training)
message("Start")
get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)
cmake_minimum_required(VERSION 2.6)
set(CMAKE_CX_STANDARD 20)
set(SOURCES main.cpp)
message(WARNING "in the middle")
add_library(mysub SHARED sub.cpp)
add_library(myadd SHARED add.cpp)
add_executable(cmake_training ${SOURCES})
target_link_libraries(cmake_training mysub myadd)
message("Finish")







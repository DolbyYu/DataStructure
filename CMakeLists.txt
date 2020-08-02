cmake_minimum_required( VERSION 3.14 )
project( DataStructure )

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME} main.cpp merge.h)

target_link_libraries(${PROJECT_NAME})
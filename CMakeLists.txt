cmake_minimum_required(VERSION 3.6)
project(simple-logging)

set(CMAKE_CXX_STANDARD 14)

###################

add_library(${PROJECT_NAME} INTERFACE)

TARGET_LINK_LIBRARIES(${PROJECT_NAME} INTERFACE)


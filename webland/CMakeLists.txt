cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(webland VERSION 0.1)

FILE(GLOB CXX_SRCS src/*.cc)

add_executable(webland ${CXX_SRCS})
target_link_libraries(webland PRIVATE renderspider)

target_include_directories(webland PRIVATE include)
target_include_directories(webland PRIVATE ../shared)
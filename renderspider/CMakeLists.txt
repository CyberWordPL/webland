cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(renderspider VERSION 0.1)

FILE(GLOB CXX_SRCS src/*.cc)

add_library(renderspider ${CXX_SRCS})
target_link_libraries(renderspider PUBLIC uicore)

target_include_directories(renderspider PUBLIC include)
target_include_directories(renderspider PRIVATE ../shared)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(browsecore VERSION 0.1)

FILE(GLOB CXX_SRCS src/*.cc)

add_library(browsecore ${CXX_SRCS})

target_include_directories(browsecore PUBLIC include)
target_include_directories(browsecore PRIVATE ../shared)
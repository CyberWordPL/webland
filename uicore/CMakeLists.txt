cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(uicore VERSION 0.1)

FILE(GLOB CXX_SRCS src/*.cc)

add_library(uicore ${CXX_SRCS})

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)

target_link_libraries(uicore glfw)
target_link_libraries(uicore OpenGL::GL)

target_include_directories(uicore PUBLIC include)
target_include_directories(uicore PRIVATE ../shared)
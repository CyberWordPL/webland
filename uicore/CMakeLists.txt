cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(uicore VERSION 0.1)

FILE(GLOB CXX_SRCS src/*.cc)

add_library(uicore ${CXX_SRCS})

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

target_link_libraries(uicore PRIVATE PkgConfig::GTK4)

target_include_directories(uicore PUBLIC include)
target_include_directories(uicore PRIVATE ../shared)
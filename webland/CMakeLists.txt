cmake_minimum_required(VERSION 3.10)

project(webland)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

FILE(GLOB CXX_SRCS src/*.cc)

add_executable(webland ${CXX_SRCS})
target_link_libraries(webland PRIVATE renderspider)
target_link_libraries(webland PRIVATE uicore)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

target_link_libraries(webland PRIVATE PkgConfig::GTK4)

target_include_directories(webland PRIVATE include;../shared)


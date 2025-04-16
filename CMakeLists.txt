cmake_minimum_required(VERSION 3.22..3.24)
project(try_googletest VERSION 0.0.1
  DESCRIPTION "Try googletest"
  LANGUAGES CXX)

# Set CMAKE_BUILD_TYPE if user did not provide it.
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE INTERNAL "Build type")
endif()

message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

include(cmake/CPM.cmake)
include(cmake/cxx_setup.cmake)

add_subdirectory(external)
add_subdirectory(sophus_example)

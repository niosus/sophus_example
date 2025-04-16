cmake_minimum_required(VERSION 3.16..3.24)
project(try_googletest VERSION 0.0.1
                       DESCRIPTION "Try googletest"
                       LANGUAGES CXX)

include(cmake/CPM.cmake)
include(cmake/cxx_setup.cmake)

add_subdirectory(external)
add_subdirectory(sophus_example)

cmake_minimum_required(VERSION 3.10)

project("Project 5"
  VERSION 0.0.0
  DESCRIPTION "CS 1521 Project 5"
  LANGUAGES CXX)

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC")
  add_compile_options(-Wall)
elseif ("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONs OFF)

add_executable(main
  project5.cpp
  Track.h
  Disc.h
  DiscList.h
  LinkedList.h
  ListInterface.h
  Node.h
  PrecondViolatedExcep.h)
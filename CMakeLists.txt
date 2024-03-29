
cmake_minimum_required( VERSION 3.5)

project (homework1 LANGUAGES CXX)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-Wall")  # uncomment this line to turn on compiler warnings

# for CSC 746 Fall 2021 Homework#1, the simplest way to specify either -O3 or -O0 compiler
# optimization is via the command line, thus:
#
# for -O3 optimization:
# % cmake ../   # no arguments to cmake will result in -O3 optimization
# for -\O0 optimization:
# % cmake ../ -DCMAKE_CXX_FLAGS_RELEASE="-O0"
#
# the stuff below here remains for reference
# uncomment the set(CMAKE_CXX_FLAGS ... ) line for either -O3 or -O0
#
# -O3 is full optimization in gcc/g++
#set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
# -O0 is no optimization in gcc/g++
#set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O0")
 
add_executable (part1 part1.cpp)
add_executable (part2 part2.cpp)
add_executable (part3 part3.cpp)


add_executable (part1_100K part1_hc.cpp)
target_compile_definitions(part1_100K PUBLIC PROBLEM_SIZE=100000)
add_executable (part1_500K part1_hc.cpp)
target_compile_definitions(part1_500K PUBLIC PROBLEM_SIZE=500000)
add_executable (part1_1M part1_hc.cpp)
target_compile_definitions(part1_1M PUBLIC PROBLEM_SIZE=1000000)
add_executable (part1_5M part1_hc.cpp)
target_compile_definitions(part1_5M PUBLIC PROBLEM_SIZE=5000000)
add_executable (part1_10M part1_hc.cpp)
target_compile_definitions(part1_10M PUBLIC PROBLEM_SIZE=10000000)
add_executable (part1_50M part1_hc.cpp)
target_compile_definitions(part1_50M PUBLIC PROBLEM_SIZE=50000000)
add_executable (part1_100M part1_hc.cpp)
target_compile_definitions(part1_100M PUBLIC PROBLEM_SIZE=100000000)
add_executable (part1_500M part1_hc.cpp)
target_compile_definitions(part1_500M PUBLIC PROBLEM_SIZE=500000000)

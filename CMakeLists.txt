cmake_minimum_required(VERSION 3.24)
project(c_one C)

set(CMAKE_C_STANDARD 11)

add_executable(c_one main.c test.c pointer/two.c)

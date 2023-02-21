cmake_minimum_required(VERSION 3.24)
project(c_one C)

set(CMAKE_C_STANDARD 11)

add_executable(c_one main.c test.c  pointer/three.c pointer/one.c pointer/four.c pointer/five.c pointer/six.c pointer/seven.c pointer/eight.c pointer/eight.c)

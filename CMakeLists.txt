cmake_minimum_required(VERSION 3.29)
project(lab10 C)

set(CMAKE_C_STANDARD 23)

add_executable(lab10 main.c
        funcs.c
        funcs.h
        struct.h)

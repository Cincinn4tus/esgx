cmake_minimum_required(VERSION 3.27)
project(esgx C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(esgx
        include/esgx.h
        src/errors.c
        src/main.c
        src/os.c
        src/window.c
        src/errors.c)

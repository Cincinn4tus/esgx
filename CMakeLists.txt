cmake_minimum_required(VERSION 3.27)
project(esgx C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(esgx
        include/esgx.h
        errors.c
        main.c
        os.c
        window.c)

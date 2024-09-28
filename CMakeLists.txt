cmake_minimum_required(VERSION 3.29)
project(cProject C)

set(CMAKE_C_STANDARD 11)

add_executable(cProject main.c
        School_Test/c2/hello.c
        School_Test/c2/c2-1-4.c
)

add_executable(main main.c)
add_executable(hello School_Test/c2/hello.c)
add_executable(c2-1-1 School_Test/c2/c2-1-1.c
        School_Test/c2/c2-1-1.c
        School_Test/c2/c2-1-7.c
        School_Test/c2/c2-1-13.c)
add_executable(c2-1-4 School_Test/c2/c2-1-4.c)
add_executable(c2-1-7 School_Test/c2/c2-1-7.c)
add_executable(c2-1-13 School_Test/c2/c2-1-13.c)
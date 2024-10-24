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
        School_Test/c2/c2-1-13.c
        School_Test/c3/c3-1-1.c
        School_Test/c3/c3-1-2.c
        School_Test/c3/c3-1-3.c
        School_Test/c3/c3-1-4.c
        School_Test/c3/c3-1-5.c
        School_Test/c3/c3-1-6.c
        School_Test/c3/c3-1-7.c
        School_Test/c3/c3-1-8.c
        School_Test/c3/c3-1-9.c
        School_Test/c3/c3-2-1.c
        School_Test/c3/c3-2-2.c
        School_Test/c3/c3-2-3.c
        School_Test/c3/c3-2-4.c
        School_Test/c3/c3-2-5.c
        School_Test/c3/c3-2-6.c
        School_Test/c3/c3-3-1.c
        School_Test/c3/c3-3-2.c
        School_Test/c4/c4-1-1.c
        School_Test/c4/c4-1-2.c
        School_Test/c4/c4-1-3.c
        School_Test/c4/c4-1-4.c
        School_Test/c4/c4-2-1.c
        School_Test/c4/c4-2-2.c
        School_Test/c4/c4-2-3.c
        School_Test/c4/c4-2-4.c
        School_Test/c4/c4-2-5.c
        School_Test/c4/c4-2-5-1.c
        School_Test/c4/c4-2-6.c
        School_Test/c4/c4-2-7.c
        School_Test/c4/c4-2-8.c
        School_Test/c4/c4-3-1.c
        School_Test/c4/c4-3-2.c
        School_Test/c4/test.c
        School_Test/c5/c5-1-1.c
        School_Test/c5/c5-1-2.c
        School_Test/c5/c5-2-1.c
        School_Test/c5/c5-2-2.c
        School_Test/c5/c5-2-3.c
        School_Test/c5/c5-2-4.c
        School_Test/c5/c5-2-5.c
        School_Test/c5/c5-2-6.c
        School_Test/c5/c5-2-7.c
        School_Test/c5/c5-2-8.c
        School_Test/c5/c5-2-9.c
        School_Test/c5/c5-2-10.c
        Self-Learn/chapter02/03_IntTest.c
        Self-Learn/chapter02/04_FloatDoubleTest.c
        Self-Learn/chapter02/07_valueConvert.c
        Self-Learn/chapter02/24_gotoTest.c
        School_Test/c5/c5-2-11.c)
add_executable(c2-1-4 School_Test/c2/c2-1-4.c)
add_executable(c2-1-7 School_Test/c2/c2-1-7.c)
add_executable(c2-1-13 School_Test/c2/c2-1-13.c)
add_executable(c3-1-1 School_Test/c3/c3-1-1.c)
add_executable(c3-1-2 School_Test/c3/c3-1-2.c)
add_executable(c3-1-3 School_Test/c3/c3-1-3.c)
add_executable(c3-1-4 School_Test/c3/c3-1-4.c)
add_executable(c3-1-5 School_Test/c3/c3-1-5.c)
add_executable(c3-1-6 School_Test/c3/c3-1-6.c)
add_executable(c3-1-7 School_Test/c3/c3-1-7.c)
add_executable(c3-1-8 School_Test/c3/c3-1-8.c)
add_executable(c3-1-9 School_Test/c3/c3-1-9.c)
add_executable(c3-2-1 School_Test/c3/c3-2-1.c)
add_executable(c3-2-2 School_Test/c3/c3-2-2.c)
add_executable(c3-2-3 School_Test/c3/c3-2-3.c)
add_executable(c3-2-4 School_Test/c3/c3-2-4.c)
add_executable(c3-2-5 School_Test/c3/c3-2-5.c)
add_executable(c3-2-6 School_Test/c3/c3-2-6.c)
add_executable(c3-3-1 School_Test/c3/c3-3-1.c)
add_executable(c3-3-2 School_Test/c3/c3-3-2.c)
add_executable(c4-1-1 School_Test/c4/c4-1-1.c)
add_executable(c4-1-2 School_Test/c4/c4-1-2.c)
add_executable(c4-1-3 School_Test/c4/c4-1-3.c)
add_executable(c4-1-4 School_Test/c4/c4-1-4.c)
add_executable(c4-2-1 School_Test/c4/c4-2-1.c)
add_executable(c4-2-2 School_Test/c4/c4-2-2.c)
add_executable(c4-2-3 School_Test/c4/c4-2-3.c)
add_executable(c4-2-4 School_Test/c4/c4-2-4.c)
add_executable(c4-2-5 School_Test/c4/c4-2-5.c)
add_executable(c4-2-5-1 School_Test/c4/c4-2-5-1.c)
add_executable(c4-2-6 School_Test/c4/c4-2-6.c)
add_executable(c4-2-7 School_Test/c4/c4-2-7.c)
add_executable(c4-2-8 School_Test/c4/c4-2-8.c)
add_executable(c4-3-1 School_Test/c4/c4-3-1.c)
add_executable(c4-3-2 School_Test/c4/c4-3-2.c)
add_executable(test School_Test/c4/test.c)
add_executable(c5-1-1 School_Test/c5/c5-1-1.c)
add_executable(c5-1-2 School_Test/c5/c5-1-2.c)
add_executable(c5-2-1 School_Test/c5/c5-2-1.c)
add_executable(c5-2-2 School_Test/c5/c5-2-2.c)
add_executable(c5-2-3 School_Test/c5/c5-2-3.c)
add_executable(c5-2-4 School_Test/c5/c5-2-4.c)
add_executable(c5-2-5 School_Test/c5/c5-2-5.c)
add_executable(c5-2-6 School_Test/c5/c5-2-6.c)
add_executable(c5-2-7 School_Test/c5/c5-2-7.c)
add_executable(c5-2-8 School_Test/c5/c5-2-8.c)
add_executable(c5-2-9 School_Test/c5/c5-2-9.c)
add_executable(c5-2-10 School_Test/c5/c5-2-10.c)
add_executable(07_valueConvert Self-Learn/chapter02/07_valueConvert.c
        Self-Learn/chapter02/08_ConstantTest.c)
add_executable(24_gotoTest Self-Learn/chapter02/24_gotoTest.c)
add_executable(c5-2-11 School_Test/c5/c5-2-11.c)
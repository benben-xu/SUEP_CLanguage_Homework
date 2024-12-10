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
        School_Test/c5/c5-2-11.c
        School_Test/c5/c5-3-1.c
        School_Test/c5/c5-3-2.c
        Self-Learn/chapter02/25_PointerFunctionTest.c)
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
        Self-Learn/chapter02/08_ConstantTest.c
        School_Test/c6/c6-1-1.c
        School_Test/c6/c6-1-2.c
        School_Test/c6/c6-1-3.c
        School_Test/c6/c6-1-4.c
        School_Test/c6/c6-2-1.c
        School_Test/c6/c6-2-2.c
        School_Test/c6/c6-2-5.c
        School_Test/c6/c6-2-6.c
        School_Test/c6/c6-2-7.c
        School_Test/c6/c6-2-8.c
        School_Test/c6/c6-2-9.c
        School_Test/c6/c6-2-10.c
        School_Test/c6/c6-2-11.c
        School_Test/c6/c6-3-1.c
        School_Test/c6/c6-3-2.c
        School_Test/c10/c10-1-1.c
        School_Test/c10/c10-1-2.c
        School_Test/c10/c10-1-3.c
        School_Test/c10/c10-1-4.c
        School_Test/c10/c10-1-5.c
        School_Test/c10/c10-1-6.c
        School_Test/c10/c10-2-1.c
        School_Test/c10/c10-2-2.c
        School_Test/c10/c10-2-3.c
        School_Test/c10/c10-2-4.c
        School_Test/c10/c10-2-5.c
        "School_Test/c10/c10-2-6.c"
        School_Test/c10/c10-2-7.c
        School_Test/c10/c10-2-8.c
        School_Test/c7/c7-1-1.c
        School_Test/c7/c7-1-2.c
        School_Test/c7/c7-2-1.c
        School_Test/c7/c7-2-2.c
        School_Test/c7/c7-2-3.c
        School_Test/c7/c7-2-4.c
        School_Test/c7/c7-2-5.c
        School_Test/c7/c7-2-6.c
        School_Test/c7/c7-2-7.c
        School_Test/c7/c7-2-8.c
        School_Test/c7/c7-2-9.c
        School_Test/c7/c7-2-10.c
        School_Test/c7/c7-2-11.c
        School_Test/c7/c7-3.c
        School_Test/c8/c8-1-1.c
        School_Test/c8/c8-1-2.c
        School_Test/c8/c8-2-1.c
        School_Test/c8/c8-2-2.c
        School_Test/c8/c8-2-3.c
        School_Test/c8/c8-2-4.c
        School_Test/c8/c8-2-5.c
        School_Test/c8/c8-2-6.c
        School_Test/c8/c8-2-7.c
        School_Test/c8/c8-3.c
        School_Test/c9/c9-1-1.c
        School_Test/c9/c9-1-2.c
        "School_Test/c9/c9-1-3.c"
        School_Test/c9/c9-1-4.c
        School_Test/c9/c9-2-1.c
        School_Test/c9/c9-2-2.c
        School_Test/c9/c9-2-3.c
        School_Test/c9/c9-2-4.c
        "School_Test/c9/ c9-2-5.c"
        School_Test/c9/c9-2-6.c
        School_Test/c9/c9-2-7.c
        School_Test/c9/c9-2-8.c
        School_Test/c9/c9-3-1.c
        School_Test/c9/c9-3-2.c
        School_Test/c10/c10-2-9.c
        School_Test/c10/c10-2-10.c
        "School_Test/c10/c10-2-11.c"
        School_Test/c10/c10-2-12.c
        School_Test/c10/c10-2-13.c
        School_Test/c10/c10-3-1.c
        School_Test/c10/c10-3-2.c
        School_Test/c11/c11-1-1.c
        School_Test/c11/c11-1-2.c
        "School_Test/c11/ c11-1-3.c")
add_executable(24_gotoTest Self-Learn/chapter02/24_gotoTest.c)
add_executable(c5-2-11 School_Test/c5/c5-2-11.c)
add_executable(c5-3-1 School_Test/c5/c5-3-1.c)
add_executable(c5-3-2 School_Test/c5/c5-3-2.c)
add_executable(c6-1-1 School_Test/c6/c6-1-1.c)
add_executable(c6-1-3 School_Test/c6/c6-1-3.c)
add_executable(c6-1-2 School_Test/c6/c6-1-2.c)
add_executable(c6-1-4 School_Test/c6/c6-1-4.c)
add_executable(c6-2-2 School_Test/c6/c6-2-2.c)
add_executable(c6-2-1 School_Test/c6/c6-2-1.c)
add_executable(c6-2-5 School_Test/c6/c6-2-5.c)
add_executable(c6-2-6 School_Test/c6/c6-2-6.c)
add_executable(c6-2-7 School_Test/c6/c6-2-7.c)
add_executable(c6-2-8 School_Test/c6/c6-2-8.c)
add_executable(c6-2-9 School_Test/c6/c6-2-9.c)
add_executable(c6-2-10 School_Test/c6/c6-2-10.c)
add_executable(c6-2-11 School_Test/c6/c6-2-11.c)
add_executable(c6-3-1 School_Test/c6/c6-3-1.c)
add_executable(c6-3-2 School_Test/c6/c6-3-2.c)
add_executable(c10-1-1 School_Test/c10/c10-1-1.c)
add_executable(c10-1-2 School_Test/c10/c10-1-2.c)
add_executable(c10-1-3 School_Test/c10/c10-1-3.c)
add_executable(c10-1-4 School_Test/c10/c10-1-4.c)
add_executable(c10-1-5 School_Test/c10/c10-1-5.c)
add_executable(c10-1-6 School_Test/c10/c10-1-6.c)
add_executable(c10-2-1 School_Test/c10/c10-2-1.c)
add_executable(c10-2-2 School_Test/c10/c10-2-2.c)
add_executable(c10-2-3 School_Test/c10/c10-2-3.c)
add_executable(c10-2-4 School_Test/c10/c10-2-4.c)
add_executable(c10-2-5 School_Test/c10/c10-2-5.c)
add_executable(c10-2-6.c  "School_Test/c10/c10-2-6.c")
add_executable(c10-2-7 School_Test/c10/c10-2-7.c)
add_executable(c10-2-8 School_Test/c10/c10-2-8.c)
add_executable(c7-1-1 School_Test/c7/c7-1-1.c)
add_executable(c7-1-2 School_Test/c7/c7-1-2.c)
add_executable(c7-2-1 School_Test/c7/c7-2-1.c)
add_executable(c7-2-2 School_Test/c7/c7-2-2.c)
add_executable(c7-2-3 School_Test/c7/c7-2-3.c)
add_executable(c7-2-4 School_Test/c7/c7-2-4.c)
add_executable(c7-2-5 School_Test/c7/c7-2-5.c)
add_executable(c7-2-6 School_Test/c7/c7-2-6.c)
add_executable(c7-2-7 School_Test/c7/c7-2-7.c)
add_executable(c7-2-8 School_Test/c7/c7-2-8.c)
add_executable(c7-2-9 School_Test/c7/c7-2-9.c)
add_executable(c7-2-10 School_Test/c7/c7-2-10.c)
add_executable(c7-2-11 School_Test/c7/c7-2-11.c)
add_executable(c7-3 School_Test/c7/c7-3.c)
add_executable(c8-1-1 School_Test/c8/c8-1-1.c)
add_executable(c8-1-2 School_Test/c8/c8-1-2.c)
add_executable(c8-2-1 School_Test/c8/c8-2-1.c)
add_executable(c8-2-2 School_Test/c8/c8-2-2.c)
add_executable(c8-2-3 School_Test/c8/c8-2-3.c)
add_executable(c8-2-4 School_Test/c8/c8-2-4.c)
add_executable(c8-2-5 School_Test/c8/c8-2-5.c)
add_executable(c8-2-6 School_Test/c8/c8-2-6.c)
add_executable(c8-2-7 School_Test/c8/c8-2-7.c)
add_executable(c8-3 School_Test/c8/c8-3.c)
add_executable(c9-1-1 School_Test/c9/c9-1-1.c)
add_executable(c9-1-2 School_Test/c9/c9-1-2.c)
add_executable(c9-1-3.c  "School_Test/c9/c9-1-3.c")
add_executable(c9-1-4 School_Test/c9/c9-1-4.c)
add_executable(c9-2-1 School_Test/c9/c9-2-1.c)
add_executable(c9-2-2 School_Test/c9/c9-2-2.c)
add_executable(c9-2-3 School_Test/c9/c9-2-3.c)
add_executable(c9-2-4 School_Test/c9/c9-2-4.c)
add_executable( c9-2-5 "School_Test/c9/ c9-2-5.c")
add_executable(c9-2-6 School_Test/c9/c9-2-6.c)
add_executable(c9-2-7 School_Test/c9/c9-2-7.c)
add_executable(c9-2-8 School_Test/c9/c9-2-8.c)
add_executable(c9-3-2 School_Test/c9/c9-3-2.c)
add_executable(c9-3-1 School_Test/c9/c9-3-1.c)
add_executable(c10-2-9 School_Test/c10/c10-2-9.c)
add_executable(c10-2-10 School_Test/c10/c10-2-10.c)
add_executable( c10-2-11 "School_Test/c10/c10-2-11.c")
add_executable(c10-2-12 School_Test/c10/c10-2-12.c)
add_executable(c10-2-13 School_Test/c10/c10-2-13.c)
add_executable(c10-3-1 School_Test/c10/c10-3-1.c)
add_executable(c10-3-2 School_Test/c10/c10-3-2.c)
add_executable(25_PointerFunctionTest Self-Learn/chapter02/25_PointerFunctionTest.c)
add_executable(c11-1-1 School_Test/c11/c11-1-1.c)
add_executable(c11-1-2 School_Test/c11/c11-1-2.c)
add_executable( c11-1-3 "School_Test/c11/ c11-1-3.c")
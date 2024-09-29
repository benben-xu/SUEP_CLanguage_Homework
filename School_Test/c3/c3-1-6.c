//
// Created by ben on 2024/9/29.
//
#include <stdio.h>
int main()
{
    int a,b;
    unsigned c ,d;
    a = 4294967295;b = -4294967295;
    c = a;
    d = b; //将一个负整数赋给一个无符号的变量
    printf("a=%d, b=%d\n", a, b);
    printf("a=%u, b=%u\n", a, b); //按无符号格式输出 a,b
    printf("c=%u, d=%u\n", c, d);
    return 0;
}
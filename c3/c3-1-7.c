//
// Created by ben on 2024/9/29.
//
#include "stdio.h"
int main( )
{
    int a,b;
    a=2;
    b=1%a;
    printf("%d\n",1/a);
    printf("b=%d\n",b);
    printf("%f %f\n",(float)(1/a), (float)1/a);
    return 0;
}
//第一个printf 语句的输出结果为什么是 0？
//第三个printf 语句中 2个输出项的输出结果为什么不同?
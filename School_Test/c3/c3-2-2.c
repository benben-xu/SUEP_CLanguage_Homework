//
// Created by ben on 2024/9/29.
//
#include <stdio.h>
int main( )
{
    int a,b,t;
    printf("请输入变量 a、b 的值:\n");
    /**************found************/
    scanf("%d%d",&a,&b); //此处填写通过scanf()从键盘输入数据给变量 a、b 的语句;
    /**************found************/
    printf("交换前：a=%d b=%d",a,b);//此处填写输出交换前变量a、b 的值的语句;
    t=a;
    a=b;
    b=t;
    /**************found************/
    printf("交换后：a=%d b=%d",a,b);//此处填写输出交换后变量a、b 的值的语句;
    return 0;
}
//
// Created by ben on 2024/9/29.
//
#include <stdio.h>
int main( )
{
    /**************found************/
    int a = 7; //此处填写对变量a 的定义和赋值语句
    /**************found************/
    double x = 2.5;double y = 4.7;double z;//此处填写对变量x，y，z 的定义和赋值语句
    z= x + a % 3 * (int) (x + y) % 2 / 4;
    printf("z=%f\n",z);
    return 0;
    }


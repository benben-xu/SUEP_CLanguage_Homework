//
// Created by ben on 2024/10/18.
//
#include <stdio.h>
int main()
{
    int x, sum1, sum2;
    /**************found************/
    sum1 = 0;sum2 = 0;
    printf("请输入一些整数(输入0 时结束输入)：\n");
    scanf("%d", &x);
    while ( x != 0 )
    {
        /**************found************/
        if ( x >= 0 )
        sum1 = sum1+x;
        else
            sum2 =sum2+ x;
        scanf("%d", &x);
    }
    printf("大于 0 的整数之和为： %d\n", sum1);
    printf("小于 0 的整数之和为： %d\n", sum2);
    return 0;
}
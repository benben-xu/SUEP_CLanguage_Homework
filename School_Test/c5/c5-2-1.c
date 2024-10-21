//
// Created by ben on 2024/10/18.
//
#include <stdio.h>
#define M 100
int main()
{
    int a,b,i;
    a=0; b=0;
    /**************found************/
    for(i=1;i<=M;i+=2)
    {
        a=a+i;
        /**************found************/
        b=b+i+1;
    }
    printf("偶数之和是： %d\n",b);
    printf("奇数之和是： %d\n",a);
    return 0;
}
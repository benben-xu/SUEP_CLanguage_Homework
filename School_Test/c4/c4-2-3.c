//
// Created by ben on 2024/10/11.
//
#include <stdio.h>
int main( )
{
    float x,y;
    printf("请输入 x 的值：");
    scanf("%f",&x);
    /**************found************/
    if(x>=0)
    y=x+1;
    /**************found************/
    if(x<0)
    y=x-1;
    printf("y=%.3f\n",y);
    return 0;
}

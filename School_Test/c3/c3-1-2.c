//
// Created by ben on 2024/9/29.
//
#include <stdio.h>
int main()
{
    float r;
    double area;
    area=3.14159*r*r;//将计算面积的语句提前到输入数据之前
    printf("请输入圆的半径:");
    scanf("%f",&r);
    printf("计算结果如下:\n");
    printf("r=%5.2f, area=%lf\n",r,area);
    return 0;
}
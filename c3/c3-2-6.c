//
// Created by ben on 2024/9/29.
//
/*
编写程序c3-2-6.c，程序所实现的功能是：设圆半径 r=1.5，圆柱高h=3，求对应的圆
周长、圆面积、圆柱体积。要求使用scanf函数输入半径和高，输出计算结果。输出时要有
文字说明，输出结果取小数点后两位数字。
*/
#include <stdio.h>
#define PI 3.141592653589793
int main()
{
    float r,h,c,s,v;
    printf("请输入圆的半径 r 和圆柱的高 h：\n");
    scanf("%f %f", &r, &h);
    c = 2 * PI * r;//圆周长
    s = PI * r * r;//圆面积
    v = s * h;
    printf("圆的周长为: %.2f\n", c);
    printf("圆的面积为: %.2f\n", s);
    printf("圆柱体积为: %.2f\n", v);
    return 0;


}
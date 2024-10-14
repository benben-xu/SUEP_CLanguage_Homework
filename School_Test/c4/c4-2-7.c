//
// Created by ben on 2024/10/11.
//
#include <math.h>
#include <stdio.h>
int main()
{
    double a,b,c;
    double s,temp;
    printf("请输入三角形的三边长（a b c）：");
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("可以组成三角形\n");
        if (a==b && b==c)
        {
            printf("这是等边三角形\n");
        }else if (a==b || a==c || b==c)
        {
            printf("这是等腰三角形\n");
        }else if (a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
        {
            printf("这是直角三角形\n");
        }else
        {
            printf("这是一般三角形\n");
        }
        temp=a+b+c;
        temp/=2;
        s=sqrt(temp*(temp-a)*(temp-b)*(temp-c));
        printf("三角形的面积是：%.2f\n", s);

    }else
    {
        printf("不能组成三角形！\n");
    }
    return 0;
}
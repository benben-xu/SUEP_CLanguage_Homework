//
// Created by ben on 2024/9/29.
//
#include <stdio.h>
int main( )
{
    int n=100;
    float f;
    double d;
    f=n+2.5;
    printf("f=%f\n",f);
    n=f/2;
    printf("n=%d\n",n);
    n=(1/2)*f;
    printf("n=%d\n",n);
    d=f*2;
    printf("d=%lf\n",d);
    return 0;
}
// ① 在某台电脑上编译此程序时，出现如图3-5 所示的警告信息，为什么?
// ② 观察并分析程序运行结果。

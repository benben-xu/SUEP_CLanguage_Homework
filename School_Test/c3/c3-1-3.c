//
// Created by ben on 2024/9/29.
//
#include <stdio.h>
int main()
{
    float fa,fb,fc,fsum;
    double d;
    fa=3141.592678;
    fb=6.026e-27;
    fsum=fa+fb ;
    d=31415926.78;
    printf("float 类型数据的打印结果：\n");
    printf("fa=%f\t fb=%f\t fsum=%7.2f\n",fa,fb,fsum);//用格式符%f 输出 float 类型变量
    printf("fa=%e\t fb=%e\t fsum=%e\n",fa,fb,fsum); //用格式符%e 输出 float 类型变量
    printf("double 类型数据的打印结果：\n ");
    printf("d=%lf, d=%e\n",d,d);
    return 0;
}
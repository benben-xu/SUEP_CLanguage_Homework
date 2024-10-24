//
// Created by benben on 2024/10/22.
//


#include <stdio.h>

int main(){

    //规则一：隐式类型转换（或自动类型转换）

    short s1 = 10;
    int i1 = s1;
    long l1  = s1;
    double d1 = l1;
    float f1 = 123.4f;
    double d2=f1;
    char c1 ='A';

    //如果是char类型、short类型之间做运算，运算的结果是int类型
//    short s2 = c1 +s1;//会导致编译器警告
    int i2 = c1 +s1;

    //情况二：宽类型赋值给窄类型
    float f12 = 12.3;
    double d3 = 12.3;
    int i4 = d3;//将double类型的值转换为int类型，会警告

    //为了避免以上的警告，我们需要使用强制类型转换
    //规则2：强制类型转换：显式的将宽类型转换为窄类型。需要使用强转符：()

    double d11 = 12.3;
    int i11 = (int)d11;//没有警告
    printf("i11=%d\n",i11);

    //注意：强制类型转换会导致精度损失。
    int i = 40000;
    short s = (short)i;
    printf("%d\n",s);


    return 0;
}



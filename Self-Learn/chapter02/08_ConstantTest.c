//
// Created by benben on 2024/10/22.
//
//关于常量的测试

#include <stdio.h>
#define ZERO 0

int main(){
    //1. 字面常量
    3.14;//字面常量
    1000;//字面常量

    //2. #define
    printf("zero= %d\n",ZERO);

//    ZERO = 1;//不可以重新赋值

    //3. C99中新的声明方式，使用const限定
    const int num = 10;
//    num = 20;

    //4. 定义枚举常量

}
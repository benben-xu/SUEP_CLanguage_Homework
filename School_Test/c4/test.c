//
// Created by ben on 2024/10/14.
//
#include <stdio.h>
#include "time.h"
#include <stdlib.h>

int main()
{
    int size = 100;
    float student[size];
    int i;

    srand(time(0));
    for (i = 0; i < size; i++)
        student[i] = 0 + 1.0 * rand() / RAND_MAX * (1 - 0); //区别在这一行,RAND_MAX虽然可以取得很好的随机效果，但是很难取到闭区间的值，可通过四舍五入函数解决以适应需求
    printf("结果为:");
    for (i = 0; i < size; i++)
    {
        printf("%.5f ", student[i]);
        printf("---");
        printf("%.f", student[i]);
    }


    return 0;
}

//
// Created by JiaMing Xu on 24-11-23.
//
#include <stdio.h>
int main() {
    int i, j, k, a[5][5];
    k = 2;
    for (i = 0; i < 5; i++)     /* 行循环 */
        for (j = 0; j < 5; j++) /* 列循环 */
            /************found************/
            if (i >= j)
                a[i][j] = 1; /* 产生矩阵的下三角元素 */
            else
                a[i][j] = k++; /* 产生矩阵的上三角元素 */
    printf("array a:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%4d", a[i][j]);
        /************found************/
printf("\n");/* 每输出一行后换行 */
}
return 0;
}
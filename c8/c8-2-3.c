//
// Created by JiaMing Xu on 24-11-23.
//
#include <stdio.h>
int main() {
    int a[3][3] = {1, 2, 3, 4, 5, 6, 9, 8, 7}, min[3], i, j;
    for (i = 0; i <= 2; i++) {
        /************found************/
        min[i] = a[i][0];
        for (j = 1; j <= 2; j++)
            /************found************/
            if (min[i] > a[i][j])
                min[i] = a[i][j];
    }
    printf("矩阵 a:\n");
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    printf("每行最小值:\n");
    /************found************/
    for (i = 0; i <= 2; i++)
        printf("%5d", min[i]);
    printf("\n");
 return 0;
}

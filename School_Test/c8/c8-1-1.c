//
// Created by JiaMing Xu on 24-11-23.
//
#include <stdio.h>
#define M 3
#define N 5
int main() {
    char a[M][N] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    int i, j;
    printf("下列循环输出每个数组元素的值:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("%5c", a[i][j]);
        printf("\n");
    }
    printf("\n 下列循环以十六进制输出每个数组元素的地址:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("%10x", &a[i][j]);
        printf("\n");
    }
    printf("\n 下列语句输出数组 a 占的存储空间大小:\n");
 printf("%5d",sizeof(a));
printf("\n");
return 0;
}
//
// Created by JiaMing Xu on 24-11-24.
//
#include <stdio.h>
int main() {
    int matrix[100][100];
    int n, i, j;
    int isSym = 1;
    printf("请输入方阵的阶数 N (N <= 100): ");
    scanf("%d", &n);
    if (n <= 0||n>100) {
        printf("阶数不合法。\n");
        return 1;
    }
    printf("请输入 %d 阶方阵的元素:\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSym = 0;
                break;
            }
        }
        if (!isSym) {break;}
    }
    if (isSym) {printf("该方阵是对称的。\n");} else {printf("该方阵不是对称的。\n");}
    return 0;
}

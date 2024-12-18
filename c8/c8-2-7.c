//
// Created by JiaMing Xu on 24-11-24.
//
#include <stdio.h>
int main() {
    int A[100][100], B[100][100], C[100][100];
    int m, n, p; // A为m×n矩阵，B为n×p矩阵,结果矩阵的尺寸为m×p
    int i, j, k;
    printf("请输入矩阵 A 的行数和列数 (m n): ");
    scanf("%d %d", &m, &n);
    printf("请输入矩阵 B 的行数和列数 (n p): ");
    scanf("%d %d", &n, &p);
    if (m > 100 || n > 100 || p > 100 || m <= 0 || n <= 0 || p <= 0) {printf("矩阵维度超出范围或不合法。\n");return 1;}
    printf("请输入矩阵 A 的元素 (按行输入):\n");
    for (i = 0; i < m; i++) {for (j = 0; j < n; j++) {scanf("%d", &A[i][j]);}}
    printf("请输入矩阵 B 的元素 (按行输入):\n");
    for (i = 0; i < n; i++) {for (j = 0; j < p; j++) {scanf("%d", &B[i][j]);}}
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("矩阵 A × B 的结果为:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//
// Created by JiaMing Xu on 24-12-3.
//
#include <stdio.h>
void transposition(int n,int x[n][n]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = x[i][j];
            x[i][j] = x[j][i];
            x[j][i] = temp;
        }
    }
}
int main() {
    int n;
    printf("请输入数组的大小: ");
    scanf("%d",&n);
    int x[n][n];
    printf("请输入 %d×%d 的二维数组元素:\n", n, n);
    for (int i = 0; i < n; i++) {for (int j = 0; j < n; j++) {scanf("%d", &x[i][j]);}}
    printf("原始数组为:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {printf("%d ", x[i][j]);}printf("\n");
    }
    transposition(n,x);
    printf("转置后的数组为:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {printf("%d ", x[i][j]);}printf("\n");}
    return 0;
}

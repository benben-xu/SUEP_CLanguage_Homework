//
// Created by JiaMing Xu on 24-11-24.
//
#include <stdio.h>
int main() {
    int a[10][10];
    for (int i = 0; i < 10; i++) {
        a[i][i] = 1;
        a[i][0] = 1;
    }
    for (int i = 2; i < 10; i++) {
        for (int j = 1; j <i; j++) {
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <=i; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
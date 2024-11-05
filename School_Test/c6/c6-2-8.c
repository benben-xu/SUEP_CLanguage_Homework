//
// Created by JiaMing Xu on 24-11-5.
//  2/1  3/2  5/3   8/5  13/8  21/13……的前 20 项之和。
#include <stdio.h>

int main() {
    int f1 = 1, f2 = 1;
    double sum =0;
    int a[21];
    a[0] = f1;
    a[1] = f2;
    for (int i = 2; i <= 20; i++) {
        a[i] = a[i - 1] + a[i - 2];     // F_n = F_(n-1) + F_(n-2)
    }
    for (int i = 0; i < 20; i++) {
        double term = (double)a[i + 1] / a[i];  // F_(n+1) / F_n
        sum += term;  // 累加比值
    }
    printf("前20项的和为:%lf\n", sum);

    return 0;
}

//
// Created by JiaMing Xu on 24-11-5.
//
#include <stdio.h>
double f(double x) {
    return x * x * x - x * x - 1;
}

int main() {
    double low = 0.0, high = 3.0,epsilon = 1e-6,mid;
    for (int i = 0; i < 999; i++) {
        mid = (low + high) / 2;

        if (f(mid) * f(low) < 0) {
            high = mid;  // 根在 [low, mid] 区间
        } else {
            low = mid;  // 根在 [mid, high] 区间
        }
        if ((high - low) < epsilon) {
            break;
        }
    }
    printf("函数的根为: %.6f\n", mid);
}
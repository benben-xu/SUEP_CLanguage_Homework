//
// Created by ben on 2024/10/18.
//
#include <math.h>
#include <stdio.h>
int main() {
    double pi = 2.0;
    double item = 1.0;
    int i = 1;

    while (fabs(1 + (1.0 / (i * (i + 2)))) > 1.0e-6) {
        item = 1.0 / (i * (i + 2));
        pi *= (1.0 + item);
        i += 2;
    }

    printf("π的近似值为：%.4f\n", pi);

    return 0;
}
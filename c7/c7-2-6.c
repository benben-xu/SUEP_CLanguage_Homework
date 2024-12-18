//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>

int main() {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    int i;
    for (i = 0; i < 10; i += 2) {
        sum += a[i];
    }
    printf("The sum is: %d\n", sum);

    return 0;
}

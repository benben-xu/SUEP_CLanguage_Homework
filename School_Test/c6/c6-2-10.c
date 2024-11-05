//
// Created by JiaMing Xu on 24-11-5.
//
#include <stdio.h>

int main() {
    int i;
    for (i = 0; ; i += 7) {
        if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5) {
            break;
        }
    }
    printf("阶梯的总阶数是: %d\n", i);

    return 0;
}
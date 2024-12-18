//
// Created by ben on 2024/10/18.
//
//编写程序c5-2-9.c，实现的功能是：求 1！+2！+3！+……+20! 的值。
#include <stdio.h>

int main() {
    long sum = 0;
    long p = 0;

    for (int i = 1; i <= 20; i++) {
        p = 1;

        for (int j = 1; j <= i; j++) {
            p *= j;
        }
        sum += p;
    }

    printf("1! + 2! + ... + 20! = %ld\n", sum);

    return 0;
}

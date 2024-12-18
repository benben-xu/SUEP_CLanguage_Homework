//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>

int main() {
    int prime[25];
    int count=0;
    for (int i = 2; i <=100; i++) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                isPrime=0;
                break;
            }
        }
        if (isPrime) {
            prime[count++] = i;
        }
    }

    for (int i =0; i < count; i++) {
        printf("%d ", prime[i]);
    }
}
//
// Created by ben on 2024/10/14.
//
#include <stdio.h>

int fib(int n) {
    if (n==1||n==2) {
        return 1;
    }else {
        return fib(n-1) + fib(n-2);
    }

}
int main() {
    printf("%d\n", fib(10));

    return 0;
}
//
// Created by JiaMing Xu on 24-11-5.
//
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 100; i < 999; i++) {
        c=i%10;
        b=(i/10)%10;
        a=i/100;
        if(i==a*a*a + b*b*b + c*c*c) {
            printf("%d\n",i);
        }
    }
}
//
// Created by JiaMing Xu on 24-11-5.
//
#include <stdio.h>
int main() {
    float sum = 0;int t = 0;
    t=1;
    for (int i = 1; i <= 20; i++) {

        for (int j = 1; j <= i; j++) {
            t*=j;
        }
        sum=sum+(1.0/t);
    }
    printf("%f",sum);

}
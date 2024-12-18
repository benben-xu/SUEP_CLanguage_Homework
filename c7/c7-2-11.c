//
// Created by JiaMing Xu on 24-11-23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int aa[6]={0};
    for (int i = 1; i <= 6000; i++) {
        int a = rand() % 6 +1;
        aa[a-1]+=1;
    }
    for (int i = 0; i <6; i++) {
        printf("面 %d: 出现次数 =%d, 概率 = %.2f%%\n", i+1,aa[i],(aa[i] / 6000.0) * 100);
    }
}
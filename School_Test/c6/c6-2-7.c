//
// Created by JiaMing Xu on 24-11-5.
//
#include <stdio.h>
int main() {
    int m,rev=0;
    printf("请输入一个正整数: ");
    scanf("%d",&m);
    for (int i = 1; i <= 999; i++) {
        rev=rev*10+m%10;
        m=m/10;
        if(m==0) {
            break;
        }
    }
    printf("%d",rev);
}
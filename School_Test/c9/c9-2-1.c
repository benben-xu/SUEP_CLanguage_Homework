//
// Created by JiaMing Xu on 24-11-26.
//
#include <stdio.h>
int main() {
    char s[10];
    int i;
    int n = 0;
    printf("请输入数字字符串:");
    gets(s);
    /**************found************/
    for (i = 0; s[i] != '\0'; i++) {
        /**************found************/
        if (s[i] < '0' || s[i] > '9') {
            printf("输入非法字符\n");
            return 1;
        } else
            /**************found************/
            n = n * 10 + (s[i] - '0');
    }
    printf("n=%ld\n",n);
 return 0;
}
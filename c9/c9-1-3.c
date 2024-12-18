//
// Created by JiaMing Xu on 24-11-26.
//
#include "stdio.h"
#include <string.h>
int main() {
    char ch[] = {"computer"};
    int i;
    for (i = 0; ch[i] !='\0'; i++)
        printf("%s", ch);
    printf("\n");
    printf("数组 ch 的大小为：%d\n", sizeof(ch) / sizeof(char));
    printf("字符串 ch 的长度为%d\n",strlen(ch));
return 0;
}
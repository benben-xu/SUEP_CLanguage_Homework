//
// Created by JiaMing Xu on 24-11-26.
//
#include <stdio.h>
#include <stdio.h>
int main() {
    char a[100]={0},ch;
    int i,j=0,flag=0;
    int b[100];
    printf("请输入一个字符串: ");
    gets(a);
    printf("你输入的字符串是: %s\n", a);
    printf("请输入要查找的字符: ");
    scanf("%c", &ch);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == ch) {
            b[j++] = i;
            flag = 1;
        }
    }
    if (flag == 1) {
        printf("字符 '%c' 在字符串中出现的次数为: %d\n", ch, j);
        printf("字符 '%c' 出现的位置分别为: ", ch);
        for (i = 0; i < j; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }else {
        printf("字符串中没有包含字符 '%c'\n", ch);
    }
}
//
// Created by JiaMing Xu on 24-12-3.
//
#include <stdio.h>
void fun(char str1[], char str2[]);

int main() {
    char str1[100];
    char str2[100];
    printf("请输入一个字符串: ");
    gets(str1);
    fun(str1, str2);
    printf("新的字符串是: %s\n", str2);
    return 0;
}
void fun(char str1[], char str2[]) {
    int j = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (i % 2 == 0) {
            str2[j++] = str1[i];
        }
    }
    str2[j] = '\0';
}

//
// Created by JiaMing Xu on 24-11-26.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[80];
    int upper = 0, lower = 0, digit = 0, space = 0, other = 0;
    printf("请输入一行文字（不超过 80 个字符）：");
    gets(str);
    for (int i = 0;i < strlen(str); i++) {
        if (isupper(str[i])) {
            upper++;
        } else if (islower(str[i])) {
            lower++;
        } else if (isdigit(str[i])) {
            digit++;
        } else if (str[i] == ' ') {
            space++;
        } else {
            other++;
        }
    }
    printf("大写字母个数: %d\n", upper);
    printf("小写字母个数: %d\n", lower);
    printf("数字个数: %d\n", digit);
    printf("空格个数: %d\n", space);
    printf("其他字符个数: %d\n", other);
    return 0;
}

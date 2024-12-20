//
// Created by JiaMing Xu on 24-12-20.
//
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    char *p;
    int up_count = 0, low_count = 0, digit_count = 0, other_count = 0;

    printf("请输入一个字符串：");
    gets(str);
    for (p = str; *p != '\0'; p++) {
        if (isupper(*p)) {
            up_count++;
        } else if (islower(*p)) {
            low_count++;
        } else if (isdigit(*p)) {
            digit_count++;
        } else {
            other_count++;
        }
    }
    printf("大写字母的个数: %d\n", up_count);
    printf("小写字母的个数: %d\n", low_count);
    printf("数字的个数: %d\n", digit_count);
    printf("其他字符的个数: %d\n", other_count);

    return 0;
}

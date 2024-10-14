#include <stdio.h>

int main() {
    int n;
    int digits[5];
    int digit_count = 0;

    printf("请输入一个不多于5位的正整数: ");
    scanf("%d", &n);

    if (n <= 0 || n > 99999) {
        printf("输入错误！请输入一个不多于5位的正整数。\n");
        return 1;
    }


    int temp = n;
    for (int i = 0;temp>0; i++)
    {
        digits[i] = temp % 10;
        temp /= 10;
        digit_count++;
    }

    printf("该数是 %d 位数。\n", digit_count);

    printf("各位数字为: ");
    for (int i = digit_count-1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    printf("逆序打印数字: ");
    for (int i = 0; i < digit_count; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}

//
// Created by JiaMing Xu on 24-12-3.
//
#include <stdio.h>
// int convert(int m, int binary[]);
int convert_to_hex(int m, char hex[]);

int main() {
    int m;
    int binary[32];
    char hex[100];
    printf("请输入一个十进制整数：");
    scanf("%d", &m);
    int length = convert_to_hex(m, hex);

    // printf("十进制数 %d 转换成二进制为：", m);for (int i = length - 1; i >= 0; i--) {printf("%d", binary[i]);}
    printf("十进制数 %d 转换成十六进制为：", m);for (int i = length - 1; i >= 0; i--) {printf("%c", hex[i]);}
    printf("\n");
    return 0;
}

// int convert(int m, int binary[]) {int index = 0;do {binary[index++] = m % 2;m /= 2;} while (m > 0);return index;}
int convert_to_hex(int m, char hex[]) {
    int index = 0;
    do {
        int remainder = m % 16;
        hex[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A'); // 转换为字符
        m /= 16;
    } while (m > 0);
    return index;
}

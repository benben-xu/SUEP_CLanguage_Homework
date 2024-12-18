//
// Created by JiaMing Xu on 24-11-23.
//
#include <stdio.h>
#include <string.h>
#define MAX_DIGITS 200
void inputNum(int num[], const char *prompt) {
    char input[MAX_DIGITS + 1];
    printf("%s", prompt);
    scanf("%s", input);
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        num[i] = input[len - 1 - i] - '0';
    }
    for (int i = len; i < MAX_DIGITS; i++) {
        num[i] = 0;
    }
}
void printNum(int num[]) {
    int start = MAX_DIGITS - 1;
    while (start > 0 && num[start] == 0) {
        start--;
    }
    for (int i = start; i >= 0; i--) {
        printf("%d", num[i]);
    }
    printf("\n");
}
void addMethod(int A[], int B[], int C[]) {
    int carry = 0;
    for (int i = 0; i < MAX_DIGITS; i++) {
        int sum = A[i] + B[i] + carry;
        C[i] = sum % 10;
        carry = sum / 10;
    }
}

int main() {
    int A[MAX_DIGITS] = {0},B[MAX_DIGITS] = {0},C[MAX_DIGITS] = {0};
    inputNum(A, "请输入第一个大整数：");
    inputNum(B, "请输入第二个大整数：");
    addMethod(A, B, C);
    printf("两个大整数相加的结果是：\n");
    printNum(C);
    return 0;
}

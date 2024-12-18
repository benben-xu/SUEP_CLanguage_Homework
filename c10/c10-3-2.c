//
// Created by JiaMing Xu on 24-12-6.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input(int bigint[]);
void output(int bigint[]);
void add(int bigint1[], int bigint2[], int bigint3[]);
int cmp_bigint(int bigint1[], int bigint2[]);
void sub(int bigint1[], int bigint2[], int bigint3[]);
void multiply(int bigint1[], int bigint2[], int bigint3[]);
void menu();
int main() {menu();return 0;}
void input(int bigint[]) {
    char buffer[200 + 1];printf("请输入一个大整数（最多 %d 位）：", 200);scanf("%s", buffer);
    int len = strlen(buffer);
    if (len > 200) {printf("错误：输入的数字超过最大位数限制！\n");exit(1);}
    for (int i = 0; i < len; i++) {if (buffer[i] < '0' || buffer[i] > '9') {printf("错误：输入包含非法字符！\n");exit(1);}}
    for (int i = 0; i < len; i++) {bigint[len - 1 - i] = buffer[i] - '0';}}
void output(int bigint[]) {
    int start = 0;
    for (int i = 200 - 1; i >= 0; i--) {if (bigint[i] != 0) {printf("%d", bigint[i]);start = 1;}}
    if (!start) {printf("0");}printf("\n");}
void add(int bigint1[], int bigint2[], int bigint3[]) {
    int carry = 0;
    for (int i = 0; i < 200; i++) {int sum = bigint1[i] + bigint2[i] + carry;bigint3[i] = sum % 10;carry = sum / 10;}
    if (carry) {printf("错误：加法结果溢出！\n");exit(1);}}
int cmp_bigint(int bigint1[], int bigint2[]) {
    for (int i = 200 - 1; i >= 0; i--) {if (bigint1[i] > bigint2[i]) {return 1;} else if (bigint1[i] < bigint2[i]) {return -1;}}return 0;}
void sub(int bigint1[], int bigint2[], int bigint3[]) {
    if (cmp_bigint(bigint1, bigint2) < 0) {printf("错误：被减数小于减数，结果为负数！\n");exit(1);}int borrow = 0;
    for (int i = 0; i < 200; i++) {int diff = bigint1[i] - bigint2[i] - borrow;if (diff < 0) {diff += 10;borrow = 1;} else {borrow = 0;}
        bigint3[i] = diff;}}
void multiply(int bigint1[], int bigint2[], int bigint3[]) {
    for (int i = 0; i < 400; i++) {bigint3[i] = 0;}
    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            bigint3[i + j] += bigint1[i] * bigint2[j];if (bigint3[i + j] >= 10) {bigint3[i + j + 1] += bigint3[i + j] / 10; bigint3[i + j] %= 10; }}}
}
void menu() {
    int bigint1[200]={0}, bigint2[200]={0}, bigint3[400]={0};int choice;
    while (1) {
        printf("\n===== 大数运算菜单 =====\n");printf("1. 输入第一个大整数\n");
        printf("2. 输入第二个大整数\n");printf("3. 输出第一个大整数\n");printf("4. 输出第二个大整数\n");
        printf("5. 大整数加法\n");printf("6. 大整数减法\n");printf("7. 大整数乘法\n");printf("8. 比较两个大整数\n");
        printf("0. 退出程序\n");printf("请选择操作：");scanf("%d", &choice);
        switch (choice) {case 1:input(bigint1);break;
            case 2:input(bigint2);break;
            case 3:printf("第一个大整数：");output(bigint1);break;
            case 4:printf("第二个大整数：");output(bigint2);break;
            case 5:add(bigint1, bigint2, bigint3);printf("加法结果：");output(bigint3);break;
            case 6:sub(bigint1, bigint2, bigint3);printf("减法结果：");output(bigint3);break;
            case 7:multiply(bigint1, bigint2, bigint3);printf("乘法结果：");output(bigint3);break;
            case 8:
                {int cmp_result = cmp_bigint(bigint1, bigint2);
                    if (cmp_result > 0) {printf("第一个大整数大于第二个大整数。\n");
                    } else if (cmp_result == 0) {printf("两个大整数相等。\n");
                    } else {printf("第一个大整数小于第二个大整数。\n");}}break;
            case 0:printf("退出程序。\n");return;
            default:printf("无效的选择，请重新输入。\n");
        }
    }
}

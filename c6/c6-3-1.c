//
// Created by JiaMing Xu on 24-11-5.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int a, b, user_answer, correct_answer;int correct_count, question_count;char continue_training;srand(time(NULL));
    do{
        printf("\n开始新的一轮运算训练！\n");
        correct_count = 0;  // 记录正确答题数量
        question_count = 0;  // 当前轮的题目数
        for (int i = 0;i < 10;i++) {
            a = rand() % 100 + 1;b = rand() % 100 + 1;char op =rand() % 4;// 0: 加法, 1: 减法, 2: 乘法, 3: 除法
            switch (op) {
                case 0:
                    correct_answer = a + b;
                printf("%d + %d = ? ", a, b);
                break;
                case 1:
                    if (a < b) {
                        int temp = a;
                        a = b;
                        b = temp;
                    }
                correct_answer = a - b;
                printf("%d - %d = ? ", a, b);
                break;
                case 2:
                    correct_answer = a * b;
                printf("%d × %d = ? ", a, b);
                break;
                case 3:
                    while (b == 0 || a % b != 0) {  // 确保除法能整除
                        b = rand() % 100 + 1;
                    }correct_answer = a / b;printf("%d ÷ %d = ? ", a, b);break;
            }scanf("%d", &user_answer);
            if (user_answer == correct_answer) {printf("回答正确！\n");correct_count++;
            } else {printf("回答错误！正确答案是 %d。\n", correct_answer);}
            question_count++;
        }
        printf("\n本轮训练结束！\n");printf("您一共答对了 %d 道题。\n", correct_count);printf("是否进行下一轮训练？(y/n): ");
        getchar();
        scanf("%c", &continue_training);
    }while (continue_training == 'y' || continue_training == 'Y');
    printf("\n感谢您的参与！\n");
    return 0;
}
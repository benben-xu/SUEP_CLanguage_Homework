//
// Created by ben on 2024/10/11.
//
#include <stdio.h>

int main()
{
    int score;
    printf("Please enter your score: ");
    scanf("%d", &score);
    if (score > 100 || score < 0)
    {
        printf("Please enter a number between 0 and 100");
    }

    switch (score / 10)
    {
    case 10:
    case 9:
        printf("成绩等级：A\n");
        break;
    case 8:
        printf("成绩等级：B\n");
        break;
    case 7:
        printf("成绩等级：C\n");
        break;
    case 6:
        printf("成绩等级：D\n");
        break;
    default:
        printf("成绩等级：E\n");
        break;
    }
}


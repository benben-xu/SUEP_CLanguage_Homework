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
    else if (score >= 90)
    {
        printf("A");
    }
    else if (score >= 80)
    {
        printf("B");
    }
    else if (score >= 70)
    {
        printf("C");
    }
    else if (score > 60)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
}
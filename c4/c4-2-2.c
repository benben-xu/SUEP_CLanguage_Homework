//
// Created by ben on 2024/10/11.
//
#include <stdio.h>

int main()
{
    int year, leap;
    printf("Please enter a year:");
    scanf("%d", &year);
    /*************found**************/
    if (year % 4 != 0) leap = 0;
    else if (year % 100 != 0) leap = 1;
    else if (year % 400 != 0) leap = 0;
    else leap = 1;
    /*************found**************/
    if (leap == 1)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}

//
// Created by JiaMing Xu on 24-12-17.
//
#include <stdio.h>
#include <stdlib.h>
struct date {
    int year;
    int month;
    int day;
};
int days(int year, int month, int day);
int check(int year, int month, int day);
int main() {
    struct date dt;
    printf("Please input Y,M,D\n");
    // scanf("%d%d%d", &dt);
    scanf("%d%d%d", &dt.year, &dt.month, &dt.day);//进行了修改

    // if (check(year, month, day) == 0) {
    if (check(dt.year, dt.month, dt.day) == 0){//进行了修改
        printf("日期输入有误 !\n");
        exit(0);
    }
    // printf("\n%d %d %d is: %d days\n", dt.year, dt.month, dt.day, days(dt));
    printf("%d %d %d is: %d days\n", dt.year, dt.month, dt.day, days(dt.year, dt.month, dt.day));//进行了修改
}
/*check 函数判别输入的日期是否合法，合法返回 1，不合法返回 0*/
int check(int year, int month, int day) {
    if (year < 0 || month < 1 || month > 12 || day < 1) return 0;
    if ((month % 2 == 1 && month <= 7) || (month % 2 == 0 && month >= 8)) {
        if (day > 31) return 0;
        else
            return 1;
    } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
        if (day > 30) return 0;
        else
            return 1;
    } else if (month == 2) {
        if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))//闰年
        {
            if (day > 29) return 0;
            else
                return 1;
        } else if (day > 28)
            return 0;
        else
            return 1;
    }
}
int days(int year, int month, int day) {
    int i, day_sum = 0, leap;
    int day_tab[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        leap = 1;
    else
        leap = 0;
    for (i = 0; i < month; i++)
        day_sum = day_sum + day_tab[i];
    day_sum = day_sum + day;
    // if (leap==0 && month>=3)
    if (leap==1 && month>=3)//进行了修改
 day_sum= day_sum+1;
 return day_sum;
}

//
// Created by ben on 2024/10/11.
//
# include <stdio.h>
int main()
{
    double w,h,t;
    printf("请输入体重（kg）和身高（m）：");
    scanf("%lf %lf", &w, &h);
    t = w/(h*h);
    printf("体指数为：%.2f\n", t);
    if (t < 18) {
        printf("低体重。\n");
    } else if (t >= 18 && t < 25) {
        printf("正常体重。\n");
    } else if (t >= 25 && t < 27) {
        printf("超重。\n");
    } else if (t >= 27) {
        printf("肥胖。\n");
    }
    return 0;
}
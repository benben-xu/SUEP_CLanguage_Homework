#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("3Input x and y:\n");
    scanf("%d,%d", &x, &y); // 输入格式有变
    sum = x + y;
    printf("x+y=%d", sum);
    return 0;
}
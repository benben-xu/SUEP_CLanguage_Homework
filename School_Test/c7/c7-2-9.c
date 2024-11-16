//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>

int main()
{
    int a[10] = {6, 9, 12, 9, 8, 20, 9, 6, 15, 5};
    int n = 10;
    int x, i, j;
    printf("输入想删除的数: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            for (j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }
    printf("Updated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

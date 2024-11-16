//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>

int main()
{
    int a[20] = {6, 9, 12, 15, 19, 23, 45, 67, 89, 98};
    int n = 10;int x, i, j, flag = 0;
    printf("输入想删除的数: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x){flag = 1;break;}
    }
    if (flag)
    {
        for (j = i; j < n-1; j++)
        {
            a[j] = a[j + 1];
        }
        printf("The number %d was deleted. ", x);
        for (i = 0; i < n-1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else
    {
        printf("The number %d is not in the array.\n", x);
    }
    return 0;
}

//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>

int main()
{
    int a[20] = {6, 9, 12, 15, 19, 23, 45, 67, 89, 98};
    int x;
    printf("输入一个正数: ");
    scanf("%d", &x);
    int i;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > x)
            break;
    }
    for (int j=10;j>i;j--) {
        a[j]=a[j-1];
    }
    a[i]=x;
    printf("打印新数组：");
    for(int k=0;k<11;k++) {
        printf("%d ", a[k]);
    }
    printf("\n");
    return 0;
}

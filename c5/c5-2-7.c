//
// Created by ben on 2024/10/18.
//
/*
 * 编写程序 c5-2-7.c，程序实现的功能是：求两个正整数[m,n]之间所有既不能被 3 整除也不能被7整除的整数之和。
 */
#include <stdio.h>

int main()
{
    int m,n,t;
    int s=0;
    printf("Enter the number of m and n: ");

    scanf("%d %d",&m,&n);
    if(m>n)
    {
        t=m;
        m=n;
        n=t;
    }
    for(int i=m;i<=n;i++)
    {
        if(i%3!=0&&i%7!=0)
        {
            s=s+i;
        }
    }
    printf("Sum is %d",s);
    return 0;
}
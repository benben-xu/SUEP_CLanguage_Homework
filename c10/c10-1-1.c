//
// Created by JiaMing Xu on 24-11-15.
//
#include<stdio.h>
int main()
{
int m,n,t;
printf("please input m and n:");
scanf("%d%d",&m,&n);
t=m;m=n;n=t;
printf("m=%d,n=%d\n",m,n);
return 0;
}
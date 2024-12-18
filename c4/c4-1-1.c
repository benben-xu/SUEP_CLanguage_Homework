//
// Created by ben on 2024/10/11.
//
#include <stdio.h>
int main( )
{
    int a ,b,t;
    printf("请输入 a 和b 的值：");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>
int main( )
{ 
int a[5]={10,20,30,40,50};
 int i;
printf("下列循环输出每个数组元素的值:\n");
for(i=0;i<5;i++)
 printf("%5d",a[i]);
printf("\n 下列循环以十六进制输出每个数组元素的地址:\n");
for(i=0;i<5;i++)
 printf("%10x",&a[i]);
printf("\n 下列语句输出数组 a 占的存储空间大小:\n");
 printf("%5d",sizeof(a));
printf("\n");
return 0;
}
//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>
#define N 10
int main( )
{ 
int a[N]={10,20,30,40,50,60,70,80,90,100};
 int low,high,mid,x;
printf("请输入待查找的元素值:");
scanf("%d",&x);
low=0;
/************found************/
high=N-1;
/************found************/
while(low<=high)
 {
mid=(low+high)/2;
if(x==a[mid] )
{
printf("元素%d 的位置为%d\n",x,mid);
return 1;
}
else 
/************found************/
if (x<a[mid] )high=mid-1;
 else low=mid+1;
}
printf("元素%d 没找到\n",x);
return 0;
}
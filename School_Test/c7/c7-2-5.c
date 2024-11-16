//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>
int main( )
{ 
int a[10]={ 1, 5, 2, 5, 6, 8, 7, 4, 3, 0 };
 int i,k, x,f=0;
printf("please input x:");
 scanf("%d",&x); 
 for(i=0;i<10;i++)
 if(a[i]== x ) 
 { 
f=1;
/************found************/ 
 k=i;
 }
/************found************/
 if( f==1)
 printf("last %d is No. %d\n", x,k); 
 else 
printf(" %d not found !\n", x); 
 return 0; 
}

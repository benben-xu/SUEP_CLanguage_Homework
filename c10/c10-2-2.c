//
// Created by JiaMing Xu on 24-11-15.
//
#include <math.h>
#include <stdio.h>
/************found************/
int prime(int m);
int main()
{ 
int m=2,n=20,i,s;
 s = 0;
 for ( i=m; i<=n; i++)
 /************found************/
 if(!prime(i)) s += i;
 printf("Sum is: %d\n",s);
 return 0;
}
/************found************/
int prime(int m)
{
int k,j;
 k=sqrt(m);
 for (j=2;j <= k; j++)
if (m % j == 0) break;
 if( j<=k )
return 0;
 else
return 1 ;
}

#include <stdio.h>
/************found************/
long func(long m)
{ 
long k=1;
 do
{ 
k=k*(m%10);
/************found************/
     m = m / 10;
/************found************/
}while(m>0);
 return(k);
}
int main( )
{ 
 long n;
printf("请输入整数 n：");
 scanf("%ld",&n);
 printf("整数%ld 的各位之积为:%ld\n",n,func(n));
}

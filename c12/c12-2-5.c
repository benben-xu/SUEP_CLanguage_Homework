//
// Created by JiaMing Xu on 24-12-20.
//
# include <stdio.h>
int amax(int *a,int n);
int main()
{
int a[10];
 int *p;
printf("please input array a:\n");
for (p=a;p<a+10;p++)
 scanf ("%d",p);
 printf ("MAX=%d\n",amax(a,10));
 return 0;
}
int amax(int *a,int n)
{ 
int max;
 int *p;
max=*a;
 for (p=a+1;p<a+n;p++)
 if (*p > max)max=*p;
return max;
}
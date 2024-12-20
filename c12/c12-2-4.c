//
// Created by JiaMing Xu on 24-12-20.
//
# include <stdio.h>
int amax(int *a,int n);
int main()
{
int a[10],i;
printf("please input array a:\n");
for (i=0;i<10;i++)
 scanf ("%d",a+i);
 printf ("MAX=%d\n",amax(a,10));
 return 0;
}
/*下列函数中不能出现诸如 a[i]之类的下标变量*/
int amax(int *a,int n)
{ 
int max,i;
max=*a;
 for (i=1;i<n;i++)
 if (max<*(a+i)) max=*(a+i);
return max;
}

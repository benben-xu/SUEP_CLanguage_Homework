//
// Created by JiaMing Xu on 24-11-26.
//
#include <stdio.h>
#include<string.h>
int main( )
{
 char str1[80]="This Is a ",str2[80]="c Program";
printf("String1 is: %s\n",str1);
printf("String2 is: %s\n",str2);
/**************found************/
 printf("The length of str1 is: %d\n",strlen(str1)); /*使用 strlen 函数实现*/
printf("The length of str2 is: %d\n", strlen(str2));
/**************found************/
 if(strcmp(str1, str2)>0) /*使用 strcmp 函数实现比较字符串大小*/
 printf("The max is:%s\n",str1);
else
 printf("The max is:%s\n",str2);
 /**************found************/
strcat(str1, str2); /*使用 strcat 函数实现字符串连接*/
printf("Result is: %s\n",str1);
return 0;
}
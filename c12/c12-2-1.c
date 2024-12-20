//
// Created by JiaMing Xu on 24-12-20.
//
# include <stdio.h>
int main()
{
char s[20];
 int i;
printf("please input string:\n");
 gets(s);
 for(i=0;s[i] != '\0';i++)
if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+'a'-'A';
 puts(s);
 return 0;
}
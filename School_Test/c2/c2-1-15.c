#include <stdio.h>
int main()
{
char c1,c2;
 printf("Input c1 and c2:\n");
 scanf("%c%c",&c1,&c2); //从键盘输入变量 c1、c2 的值
 printf("c1=%c;c2=%c",c1,c2); //输出字符型变量 c1 和 c2 的值
return 0;
}
/*
分别分析这两种输入得到的不同的输出结果。
a)输入的 2 个字符之间没有空格，
Input c1 and c2:
AC
c1=A;c2=C

b)输入的字符之间有空格，
Input c1 and c2:
A C
c1=A;c2=                                                                                  

分析：读取字符时，可能会遇到输入问题。
因为在输入两个字符时，前一个字符后面会有一个换行符或空格，这可能导致第二个字符的读取不如预期。
*/
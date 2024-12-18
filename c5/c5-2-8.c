//
// Created by ben on 2024/10/18.
//
/*编写程序 c5-2-8.c，实现的功能是：从键盘输入一行字符，分别统计这行字符中的英文
字母、空格、数字和其它字符的个数。
要求：
① 画出程序流程图。
② 完成程序代码的编写、调试，最终得到正确的运行结果。
编程提示：
 先定义一个字符型的变量（如ch），再定义4 个整型变量作为计数器，注意：作为计数
器的变量要先赋初值 0。
 在循环中每次从键盘上读入一个字符，在循环体中对读入的字符进行判断，相应的计数
器加 1，当读入的字符为‘\n’时表示读入结束。
 */

#include <stdio.h>
int main()
{
    int letters = 0,spaces = 0,digits = 0,others = 0;
    char ch;
    ch=getchar();
    while( ch!='\n')
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letters++;
        }
        else if(ch == ' ')
        {
            spaces++;
        }else if(ch >= '0' && ch <= '9')
        {
            digits++;
        }else
        {
            others++;
        }
        ch=getchar();
    }
    printf("字母: %d\n", letters);
    printf("空格: %d\n", spaces);
    printf("数字: %d\n", digits);
    printf("其他字符: %d\n", others);
    return 0;
}
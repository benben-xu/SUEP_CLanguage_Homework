//
// Created by ben on 2024/9/29.
//
// 编写程序 c3-2-5.c，程序所实现的功能是：两次调用 getchar()函数读入两个字符分别
// 赋给c1 和c2，再分别用putchar( )函数和printf( )函数输出这两个字符。
// 提示：程序框架如下，注意输入两个字符时必须是连续的，中间不能有空格。
/* c3-2-5.c */
#include <stdio.h>
int main( )
{
    //定义需要的变量（注意类型）;
    char c1,c2;
    //用getchar 函数从键盘读入c1;
    c1 = getchar();
    //用getchar 函数从键盘读入c2;
    c2 = getchar();
    //用putchar 函数输出变量c1,c2;
    printf("用putchar函数输出变量c1, c2\n");
    putchar(c1);
    putchar(c2);
    putchar('\n');
    //用printf 函数输出变量c1,c2;
    printf("用printf 函数输出变量c1,c2\n");
    printf("%c",c1);
    printf("%c",c2);

    return 0;
}
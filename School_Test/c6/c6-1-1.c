//
// Created by ben on 2024/10/25.
//
#include <stdio.h>

int main() {
    int i, j;
    i = 9;//i 赋初值1
    for (j = 1; j <= i; j++) printf("%2d *%2d =%2d    ", i, j, i * j);
    return 0;

}
//修改程序中给i赋值的语句，分别改为i=3、i=5和i=9,观察程序的运行结果
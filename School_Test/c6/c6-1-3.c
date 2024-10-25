//
// Created by ben on 2024/10/25.
//
#include <stdio.h>
int main( )
{
    int i, j;
    for(i=1;i<=9;i++)
    {
        for ( j=1; j<=i; j++)
        { //增加了 {
            printf("%2d *%2d =%2d ", i, j, i*j );
            printf("\n");
        } //增加了 }
    }
    return 0;
}
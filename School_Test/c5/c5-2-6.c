//
// Created by ben on 2024/10/18.
//
#include <math.h>
#include <stdio.h>
int main( )
{
    int n, m, t ;
    printf("Please enter two numbers:");
    scanf("%d,%d", &n, &m);
    if(n < m)
    {
        t = n;
        n = m;
        m = t;
    }
    t = n%m;
    /************found************/
    while( t!=0 )
    {
        n = m;
        m = t;
        /************found************/
        t = n % m;
    }
    /************found************/
    printf("The greatest common divisor is : %d\n", m );
    return 0;
    }
//
// Created by ben on 2024/10/18.
//
#include <stdio.h>
int main( )
{
    float x,amax,amin;
    printf("请输入成绩（输入0 时结束）:\n");
    scanf("%f",&x);
    /***********found***********/
    amax=0;amin=100;
    /***********found***********/
    for ( ; x!=0&&x>0; )
    {
        if (x>amax) amax=x;
        /***********found***********/
        if ( x<amin) amin=x;
        scanf("%f",&x);
    }
    printf("\namax=%f\namin=%f\n",amax,amin);
    return 0;
    }
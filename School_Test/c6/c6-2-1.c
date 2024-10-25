//
// Created by ben on 2024/10/25.
//
#include <stdio.h>

int main() {
    // int i,j,k;
    // /************found************/
    // for(i=0;i<=3;i++)
    // {
    //     for( j=0; j<=10-i ;j++ ) printf(" ");
    //     /************found************/
    //     for( k=0; k< 2 * i + 1;k++ ) printf("*");
    //     printf("\n");
    //
    // }

    // int i, j;
    // for (i = 0; i < 4; i++) {
    //     for (j = 0; j < i; j++) printf(" ");
    //     for (j = 0; j < 6; j++) printf("*");
    //     printf("\n");
    // }
// 7 5 3 1
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for( j=0; j<=10-i ;j++ ) printf(" ");
        for( k=7; k>=i;k-=1 ) printf("*");
        printf("\n");

    }
    return 0;
}
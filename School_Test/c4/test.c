//
// Created by ben on 2024/10/14.
//
#include "time.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[3];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    int a=sizeof(str);
    printf("%d\n", len);
    printf("%d\n", a);

    return 0;
}




//
// Created by JiaMing Xu on 24-11-26.
//
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("请输入一个字符串：");
    gets(str);
    printf("原字符串%s：",str);
    for (int x=0,y=strlen(str)-1;x<y;x++,y--) {
        char temp=str[x];
        str[x]=str[y];
        str[y]=temp;
    }
    printf("逆序输出的字符串是：");
    printf("%s",str);
    return 0;
}

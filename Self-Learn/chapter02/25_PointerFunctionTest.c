//
// Created by JiaMing Xu on 24-12-9.
// 测试指针函数的使用
#include <stdio.h>
#include <string.h>

//获取两个字符串中较长的那个字符串
char* getMaxLength(char* str1,char* str2) {
    printf("str1的长度是%d，str2的长度是%d\n",strlen(str1),strlen(str2));
    if (strlen(str1) > strlen(str2)) {
        return str1;
    }else {
        return str2;
    }
}
int main() {
    char str1[100],str2[100];
    printf("请输入第1个字符串：");
    gets(str1);
    printf("请输入第2个字符串：");
    gets(str2);
    char* maxStr;
    maxStr = getMaxLength(str1,str2);
    printf("max length is:%s\n",maxStr);
}

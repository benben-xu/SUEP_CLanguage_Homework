//
// Created by JiaMing Xu on 24-12-10.
//
#include <stdio.h>
struct data {
    int i;
    float a;
    char c[4];
};
int main() {
    struct data u;
    printf("变量 u 所占的存储空间大小为：%d \n", sizeof(u));
    printf("请输入数据：\n");
    scanf("%d", &u.i);
    printf("i=%d, a=%f, c[0]=%c, c[1]=%c c[2]=%c c[3]=%c\n",
           u.i, u.a, u.c[0],u.c[1],u.c[2],u.c[3]);
 return 0;
}

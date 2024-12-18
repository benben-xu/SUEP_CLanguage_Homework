/* c2-1-12.c */
#include <stdio.h>
int main()
{
    float fa, fb;
    printf("Input x and y:\n");
    scanf("%d%d", &fa, &fb); // 变量 fa、fb 对应的格式符错误
    printf("float 类型数据的打印结果：\n");
    printf("fa=%10.3f\t fb=%.3f\n", fa, fb);
    return 0;
}
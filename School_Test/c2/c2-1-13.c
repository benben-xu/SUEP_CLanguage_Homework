#include <stdio.h>

int main()
{
    float fa, fb;
    printf("Input x and y:\n");
    scanf("%f%f", &fa, &fb);
    printf("float 类型数据的打印结果001：\n");
    printf("fa=%d\t fb=%d\n", fa, fb); //变量 fa、fb 对应的格式符错误
    return 0;
}

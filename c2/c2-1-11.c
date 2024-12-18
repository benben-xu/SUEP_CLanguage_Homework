#include <stdio.h>
int main()
{
    float fa, fb;
    printf("Input x and y:\n");
    scanf("%f%f", &fa, &fb); // 从键盘输入 fa、fb 的值
    printf("float 类型数据的打印结果：\n");
    printf("fa=%10.3f\t fb=%.3f\n", fa, fb);
    return 0;
}
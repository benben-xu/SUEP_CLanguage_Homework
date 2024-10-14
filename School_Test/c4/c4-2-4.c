//
// Created by ben on 2024/10/11.
//
# include <stdio.h>

int main()
{
    float d1, d2;
    char op;
    printf("输入d1 op d2： ");
    scanf("%f%c%f", &d1, &op, &d2);
    /**************found************/
    switch (op)
    {
        float temp;
        /**************found * ***********/
    case '+': temp = d1 + d2;
        break;
        printf("%.2f %c %.2f=%.2f", d1, op, d2, temp);
        break;
    case '-': temp = d1 - d2;
        printf("%.2f %c %.2f=%.2f", d1, op, d2, temp);
        break;
    /************found************/
    case '*': temp = d1 * d2;
        printf("%.2f %c %.2f=%.2f", d1, op, d2, temp);
        break;
    case '/': temp = d1 / d2;
        printf("%.2f %c %.2f=%.2f", d1, op, d2, temp);
        break;
    /************found************/
    default:
        printf(" 错误！\n" );
    }
    return 0;
}

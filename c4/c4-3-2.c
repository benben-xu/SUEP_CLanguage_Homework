//
// Created by ben on 2024/10/11.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
int main()
{
    float a,b,result,correct_result;
    int t1;
    char op;
    srand(time(0));
    a = 1.0 + 1.0 * rand() / RAND_MAX * ( 100.0 - 1.0 );
    b = 1.0 + 1.0 * rand() / RAND_MAX * ( 100.0 - 1.0 );
    printf("随机的a：%f\n",a);
    printf("随机的b：%f\n",b);


    a = round(a * 100) / 100;
    b = round(b * 100) / 100;
    printf("四舍五入的a：%.2f\n",a);
    printf("四舍五入的b：%.2f\n",b);

    // char str1[20],str2[20];
    // char result1[20],result2[20];
    // int len1, i1,len2, i2;
    //
    // // 将浮点数转换为字符串形式，保留两位小数
    // sprintf(str1, "%.2f", a);
    // sprintf(str2, "%.2f", b);
    //
    // // 获取字符串的长度
    // len1 = strlen(str1);
    // len2 = strlen(str2);
    //
    // // 只将字符串的前半部分复制到 result 数组（可以认为前半部分为不包括小数点的部分）
    // for (i1 = 0; i1 < len1; i1++) {
    //     result1[i1] = str1[i1];
    // }
    // result1[i1] = '\0';
    //
    // for (i2 = 0; i2 < len2; i2++)
    // {
    //     result2[i2] = str2[i2];
    // }
    // result2[i2] = '\0';
    //
    // printf("保留两位a: %s\n", result1);
    // printf("保留两位b: %s\n", result2);
    //
    // sscanf(result1, "%f", &a);
    // sscanf(result2, "%f", &b);
    // // 输出转换后的浮点数
    // printf("Converted float: %f\n", a);
    // printf("Converted float: %f\n", b);




    if (rand() % 2 == 0) {
        op = '+';
        correct_result = a + b;
        correct_result = round(correct_result*100)/100;
        printf("正确答案：%f\n",correct_result);
    } else {
        op = '-';
        // 确保减法时不会出现负数
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        correct_result = a - b; // 正确答案是减法结果
        correct_result = round(correct_result*100)/100;
        printf("正确答案：%f\n",correct_result);
    }
    printf("请计算：%.2f %c %.2f = ", a, op, b);
    scanf("%f", &result);
    printf("result:%f", &result);

    if (result == correct_result) {
        printf("恭喜你，答案正确！\n");
    } else {
        printf("很遗憾，答案错误。正确答案是 %.2f。\n", correct_result);

    }
    return 0;
}

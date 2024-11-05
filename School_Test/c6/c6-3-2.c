//
// Created by JiaMing Xu on 24-11-5.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, inside_circle = 0;
    double x, y, pi;
    srand(time(NULL));
    printf("请输入要生成的随机点的数量: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        // 生成 [0, 1] 范围内的随机数
        x = (rand() / (double)RAND_MAX);
        y = (rand() / (double)RAND_MAX);
        if (x * x + y * y <= 1) {
            inside_circle++;
        }
    }
    pi = 4.0 * inside_circle / n;

    // 输出结果
    printf("用蒙特卡洛方法估算圆周率的值为: %.6f\n", pi);

    return 0;
}

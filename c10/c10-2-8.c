//
// Created by JiaMing Xu on 24-11-19.
//
#include <stdio.h>
int GCD(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int LCM(int m, int n) {
    return (m * n) / GCD(m, n);
}

int main() {
    int m, n;
    printf("请输入两个整数（以空格分隔）：");
    scanf("%d %d", &m, &n);
    int gcd = GCD(m, n);
    int lcm = LCM(m, n);
    printf("最大公约数：%d\n", gcd);
    printf("最小公倍数：%d\n", lcm);
    return 0;
}

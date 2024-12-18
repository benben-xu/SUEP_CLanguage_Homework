//
// Created by JiaMing Xu on 24-12-17.
//
#include <stdio.h>
#define N 5
struct man {
    char name[20];
    int age;
};//没有加分号，导致了错误
int main() {
    //没有给出正确的结构体类型
    struct man person[] = {{"Li", 20}, {"Yang", 21}, {"Sun", 18}, {"zhao", 23}, {"lin", 17}};
    int i, kmin;
    kmin = 0;
    for (i = 1; i < N; i++) {
        if (person[i].age < person[kmin].age) kmin = i;
    }
    // printf("年龄最小者为：%s ,其年龄为 %d\n", person[i].name, person[i].age );
    //应该使用kmin作为索引
    printf("年龄最小者为：%s ,其年龄为 %d\n", person[kmin].name, person[kmin].age);
return 0;
}

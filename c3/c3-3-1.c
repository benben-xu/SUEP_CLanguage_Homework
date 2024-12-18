//
// Created by ben on 2024/9/29.
//
#include <stdio.h>

int main()
{
    int id;
    float math, english, c_language, average;
    FILE* fp = NULL;
    printf("请输入学号及高数、英语、C语言三门课的成绩: \n");
    scanf("%d %f %f %f", &id, &math, &english, &c_language);
    average = (math + english + c_language) / 3;
    fp = fopen("/Users/ben/CLionProjects/cProject/School_Test/c3/score_avg.txt", "w");
    fprintf(fp, "学号\t高数\t英语\tC语言\t平均分\n");
    fprintf(fp, "%d\t%2.f\t%2.f\t%2.f\t%.2f\n", id, math, english, c_language, average);
    fclose(fp);
    printf("数据已成功写入文件score_avg.txt\n");
    return 0;
}

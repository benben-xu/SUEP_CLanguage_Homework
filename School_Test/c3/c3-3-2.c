//
// Created by ben on 2024/9/29.
//
#include <stdio.h>

int main()
{
    int id;
    float math, english, c_language, average;
    FILE* fp = NULL;
    fp = fopen("/Users/ben/CLionProjects/cProject/School_Test/c3/score.txt", "r");
    fscanf(fp,"%d %f %f %f", &id, &math, &english, &c_language);
    average = (math + english + c_language) / 3.0;
    fclose(fp);
    FILE* file_out = NULL;
    file_out = fopen("/Users/ben/CLionProjects/cProject/School_Test/c3/score_avg.txt", "w");
    fprintf(file_out, "学号\t高数\t英语\tC语言\t平均分\n");
    fprintf(file_out, "%d\t%2.f\t%2.f\t%2.f\t%.2f\n", id, math, english, c_language, average);
    fclose(file_out);
    printf("数据已成功写入文件score_avg.txt\n");
    return 0;
}

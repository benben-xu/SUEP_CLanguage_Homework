//
// Created by ben on 2024/10/25.
//
#include <stdio.h>

int main() {
    FILE *fp_in, *fp_out;
    int num, math, english, c_language;
    double avg;

    fp_in = fopen("/Users/ben/CLionProjects/cProject/School_Test/c5/score.txt", "r");
    if (fp_in == NULL) {
        printf("无法打开文件 score.txt\n");
        return 1;
    }

    fp_out = fopen("/Users/ben/CLionProjects/cProject/School_Test/c5/score_avg.txt", "w");
    if (fp_out == NULL) {
        printf("无法打开文件 score_avg.txt\n");
        fclose(fp_in);
        return 1;
    }
    fprintf(fp_out, "学号\t高数\t英语\tC语言\t平均分\n");
    while (!feof(fp_in)) {
        fscanf(fp_in, "%d%d%d%d", &num, &math, &english, &c_language);
        avg = (math + english + c_language) / 3.0;
        printf("学号: %d 高数: %d 英语: %d C语言: %d 平均分: %.2lf\n", num, math, english, c_language, avg);
        fprintf(fp_out, "%d %d %d %d %.2lf\n", num, math, english, c_language, avg);
    }
    fclose(fp_in);
    fclose(fp_out);
    printf("计算完成，结果已写入 score_avg.txt\n");
    return 0;
}
//
// Created by JiaMing Xu on 24-11-29.
//
#include <string.h>
#include <stdio.h>
int main() {
    FILE *fp;int ids[3];char names[3][50];;int math[3], english[3], c_language[3];float avg[3];int studentCount = 0;
    fp = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c9/score.txt", "r");
    while (fscanf(fp, "%d %s %d %d %d", &ids[studentCount], names[studentCount],
                      &math[studentCount], &english[studentCount], &c_language[studentCount]) == 5) {
        printf("读取数据：%d %s %d %d %d\n", ids[studentCount], names[studentCount], math[studentCount], english[studentCount], c_language[studentCount]);
        avg[studentCount] = (math[studentCount] + english[studentCount] + c_language[studentCount]) / 3.0;
        studentCount++;
                      }
    fclose(fp);
    printf("总共读取了 %d 个学生的成绩\n", studentCount);
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                int tempId = ids[j];ids[j] = ids[j + 1];ids[j + 1] = tempId;
                char tempName[50];strcpy(tempName, names[j]);strcpy(names[j], names[j + 1]);strcpy(names[j + 1], tempName);
                int tempScore = math[j];math[j] = math[j + 1];math[j + 1] = tempScore;
                tempScore = english[j];english[j] = english[j + 1];english[j + 1] = tempScore;
                tempScore = c_language[j];c_language[j] = c_language[j + 1];c_language[j + 1] = tempScore;
                float tempAvg = avg[j];avg[j] = avg[j + 1];avg[j + 1] = tempAvg;}}}
    fp = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c9/score_avg.txt", "w");
    fprintf(fp, "学号 姓名 高数 英语 C语言 平均分\n");
    printf("学号 姓名 高数 英语 C语言 平均分\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d %s %d %d %d %.2f\n", ids[i], names[i], math[i], english[i], c_language[i], avg[i]);
        fprintf(fp, "%d %s %d %d %d %.2f\n", ids[i], names[i], math[i], english[i], c_language[i], avg[i]);
    }fclose(fp);
    return 0;
}
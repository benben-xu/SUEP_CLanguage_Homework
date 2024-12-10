//
// Created by JiaMing Xu on 24-12-6.
//
#include <stdio.h>
#include <stdlib.h>
void read_scores(char *filename, int ids[], int scores[][3]);
void calculate_average(int scores[][3], double averages[]);
void sort_by_average(int ids[], int scores[][3], double averages[]);
void output_results(char *filename, int ids[], int scores[][3], double averages[]);
int main() {
    int ids[3];int scores[3][3];double averages[3];
    read_scores("/Users/jiamingxu/CLionProjects/cProject/School_Test/c10/score.txt", ids, scores);
    calculate_average(scores, averages);
    sort_by_average(ids, scores, averages);
    output_results("/Users/jiamingxu/CLionProjects/cProject/School_Test/c10/score_avg.txt", ids, scores, averages);
    return 0;}
void read_scores(char *filename, int ids[], int scores[][3]) {FILE *fp = fopen(filename, "r");
    for (int i = 0; i < 3; i++) {fscanf(fp, "%d%d%d%d", &ids[i], &scores[i][0], &scores[i][1], &scores[i][2]);}
    fclose(fp);}
void calculate_average(int scores[][3], double averages[]) {
    for (int i = 0; i < 3; i++) {averages[i] = (scores[i][0] + scores[i][1] + scores[i][2]) / 3.0;}}
void sort_by_average(int ids[], int scores[][3], double averages[]) {
    for (int i = 0; i < 3 - 1; i++) {for (int j = 0; j < 3 - 1 - i; j++) {if (averages[j] < averages[j + 1]) {
            double temp_avg = averages[j];averages[j] = averages[j + 1];averages[j + 1] = temp_avg;
            int temp_id = ids[j];ids[j] = ids[j + 1];ids[j + 1] = temp_id;for (int k = 0; k < 3; k++) {
            int temp_score = scores[j][k];scores[j][k] = scores[j + 1][k];scores[j + 1][k] = temp_score;
        }}}}}
void output_results(char *filename, int ids[], int scores[][3], double averages[]) {
    FILE *fp = fopen(filename, "w");printf("学号 高数 英语 C语言 平均分\n");fprintf(fp, "学号 高数 英语 C语言 平均分\n");
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d %d %.2lf\n", ids[i], scores[i][0], scores[i][1], scores[i][2], averages[i]);
        fprintf(fp, "%d %d %d %d %.2lf\n", ids[i], scores[i][0], scores[i][1], scores[i][2], averages[i]);}fclose(fp);}

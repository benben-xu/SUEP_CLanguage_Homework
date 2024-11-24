//
// Created by JiaMing Xu on 24-11-24.
//
#include <stdio.h>
int main() {
    int i,j;int ids[5];double scores[5][5],averageScores[5];FILE *fp;
    fp = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c8/score.txt", "r");
    for (i = 0; i < 5; i++) {fscanf(fp, "%d", &ids[i]);for (j = 0; j < 5; j++) {fscanf(fp, "%lf", &scores[i][j]);}}
    fclose(fp);
    for (i = 0; i < 5; i++) {
        double max=scores[i][0],min=scores[i][0],sum=0;
        for (j = 0; j < 5; j++) {if (scores[i][j] > max) {max = scores[i][j];}if (scores[i][j] < min) {min = scores[i][j];}}
        for (j = 0; j < 5; j++) {sum += scores[i][j];}averageScores[i] = (sum-max-min)/3.0;}
    for (i=0; i < 5; i++) {
        for (j=0; j < 5-i-1; j++) {
            if (averageScores[j] < averageScores[j+1]) {
                double temp = averageScores[j];
                averageScores[j] = averageScores[j+1];
                averageScores[j+1] = temp;
                int tempId = ids[j];
                ids[j] = ids[j+1];
                ids[j+1] = tempId;
                for (int k=0; k < 5; k++) {
                    double tempScores = scores[j][k];
                    scores[j][k] = scores[j+1][k];scores[j+1][k] = tempScores;}}}}
    fp = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c8/score.txt", "a");
    fprintf(fp, "\n选手得分名次表：\n");
    printf("选手得分名次表：\n");
    for (i = 0; i < 5; i++) {
        fprintf(fp, "编号: %d 平均分: %.2lf\n", ids[i], averageScores[i]);printf("编号: %d 平均分: %.2lf\n", ids[i], averageScores[i]);}
    fclose(fp);
    return 0;
}
//
// Created by JiaMing Xu on 24-12-17.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int id;
    char name[20];
    int math;
    int english;int c_language;float avg;} Student;
void read(const char *filename, Student students[]);
void calculate_avg(Student students[]);
int main() {
    Student students[3];Student temp;
    read("/Users/jiamingxu/CLionProjects/cProject/School_Test/c11/score.txt", students);
    calculate_avg(students);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (students[j].avg < students[j + 1].avg) {temp = students[j];students[j] = students[j + 1];students[j + 1] = temp;}}
    }FILE *f_out = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c11/score_avg.txt", "w");
    fprintf(f_out, "学号 姓名 高数 英语 C语言 平均分\n");printf("学号 姓名 高数 英语 C语言 平均分\n");
    for (int i = 0; i < 3; i++) {
        printf("%d %s %d %d %d %.2f\n", students[i].id, students[i].name,
               students[i].math, students[i].english, students[i].c_language, students[i].avg);
        fprintf(f_out,"%d %s %d %d %d %.2f\n", students[i].id, students[i].name,
               students[i].math, students[i].english, students[i].c_language, students[i].avg);}return 0;}
void read(const char *filename, Student students[]) {FILE *file = fopen(filename, "r");
    for (int i = 0; i < 3; i++) {
        fscanf(file, "%d %s %d %d %d", &students[i].id, students[i].name,
               &students[i].math, &students[i].english, &students[i].c_language);}fclose(file);}
void calculate_avg(Student students[]) {
    for (int i = 0; i < 3; i++) {students[i].avg = (students[i].math + students[i].english + students[i].c_language) / 3.0;}}
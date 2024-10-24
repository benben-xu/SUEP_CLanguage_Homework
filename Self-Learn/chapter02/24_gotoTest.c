//
// Created by benben on 2024/10/24.
//

#include <stdio.h>
int main(){

    //录入学生成绩，并计算学生的平均分。当输入-1时程序结束
    int score;//记录每个学生的分数
    int sum;//记录学生的总分
    int i = 0;//记录第几个学生
    next:printf("请输入第%d个学生的成绩：",i+1);
    scanf("%d",&score);
    if(score != -1){
        sum += score;
        i++;
        goto next;
    }

    if(i != 0){
    printf("%d个学生的平均成绩是%d",i,sum/i);
    }

    return 0;
}
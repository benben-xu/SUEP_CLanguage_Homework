//
// Created by ben on 2024/10/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fp;
    double input_amount=0.0;
    int total_amount=0;
    int red_num;

    printf("请输入红包总金额（元）: ");
    scanf("%lf", &input_amount);
    total_amount = (int)(input_amount * 100);  // 将金额转为“分”
    printf("请输入红包个数: ");
    scanf("%d", &red_num);
    int packet[red_num];
    fp = fopen("/Users/ben/CLionProjects/cProject/School_Test/c5/red_packet.txt", "w");
    if (fp == NULL) {
        printf("无法打开文件 red_packet.txt\n");
        return 1;
    }
    fprintf(fp, "总金额: %.2f 元\n红包个数: %d 个\n", input_amount, red_num);
    printf("总金额: %.2f 元\n红包个数: %d 个\n", input_amount, red_num);
    srand(time(0));
    for (int i = 0; i < red_num; i++) {
        if (i==red_num-1) {
            packet[i] = total_amount;
        }else {
            packet[i]=rand() % (total_amount - (red_num -1 - i)+1) + 1;
            total_amount = total_amount -packet[i];
        }
        printf("红包 %d: %.2f 元\n", i+1, packet[i] / 100.0);
        fprintf(fp, "红包 %d: %.2f 元\n", i+1, packet[i] / 100.0);
    }

    fclose(fp);

    printf("红包已发放，结果保存到 red_packet.txt\n");
    return 0;
}
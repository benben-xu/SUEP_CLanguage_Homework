//
// Created by JiaMing Xu on 24-12-17.
//
#include <stdio.h>
#include <string.h>
#include <time.h>
typedef struct {int year;int month;int day;  } Date;typedef struct{char No[9];char name[20];int trav_line_no;Date order_date; } bus_order;
void order() {
    FILE *file = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c11/order.txt", "a");
    bus_order order;time_t now;struct tm *tm_now;time(&now);tm_now = localtime(&now);
    printf("请输入工号/学号: ");scanf("%s", order.No);printf("请输入姓名: ");scanf("%s", order.name);printf("请输入班车编号 (1-10): ");scanf("%d", &order.trav_line_no);
    if (order.trav_line_no < 1 || order.trav_line_no > 10) {printf("班车编号不合法。\n");fclose(file);return;}
    printf("请输入预约日期 (年 月 日): ");scanf("%d %d %d", &order.order_date.year, &order.order_date.month, &order.order_date.day);
    if (order.order_date.year < tm_now->tm_year + 1900 ||
        (order.order_date.year == tm_now->tm_year + 1900 && order.order_date.month < tm_now->tm_mon + 1) ||
        (order.order_date.year == tm_now->tm_year + 1900 && order.order_date.month == tm_now->tm_mon + 1 && order.order_date.day < tm_now->tm_mday)) {
        printf("预约日期不能早于当前日期。\n");fclose(file);return;}
    fprintf(file, "%s %s %d %d %d %d\n", order.No, order.name, order.trav_line_no, order.order_date.year, order.order_date.month, order.order_date.day);
    printf("预约成功！\n");fclose(file);}
int read(bus_order orders[], int max_count) {
    FILE *file = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c11/order.txt", "r");
    int count = 0;while (count < max_count && fscanf(file, "%s %s %d %d %d %d",
                                        orders[count].No, orders[count].name, &orders[count].trav_line_no,
                                        &orders[count].order_date.year, &orders[count].order_date.month,
                                        &orders[count].order_date.day) == 6) {count++;}fclose(file);return count;}
void query() {bus_order orders[100];int count = read(orders, 100);if (count == 0) {printf("没有预约记录。\n");return;}
    char No[9];printf("请输入工号/学号: ");scanf("%s", No);printf("查询结果:\n");
    for (int i = 0; i < count; i++) {if (strcmp(orders[i].No, No) == 0) {printf("%s %s 班车编号: %d 日期: %d-%d-%d\n", orders[i].No, orders[i].name,
                orders[i].trav_line_no, orders[i].order_date.year, orders[i].order_date.month, orders[i].order_date.day);}}}
void menu() {printf("====== 班车预约系统 ======\n");
    printf("1. 班车预约\n");printf("2. 查询预约信息\n");printf("0. 退出\n");printf("==========================\n");printf("请输入你的选择: ");}
int main() {int choice;while (1) {menu();scanf("%d", &choice);switch (choice) {
            case 1:order();break;case 2:query();break;case 0:printf("退出系统。\n");return 0;default:printf("无效的选择，请重新输入。\n");}}return 0;}

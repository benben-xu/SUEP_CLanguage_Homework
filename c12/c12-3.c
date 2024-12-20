//
// Created by JiaMing Xu on 24-12-20.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct List{int num; char name[20]; struct List *next;};
struct List * H_creat_list() {struct List *head = NULL, *new_node, *temp;int num;char name[20];char choice;while (1) {
        new_node = (struct List *)malloc(sizeof(struct List));printf("输入学生学号：");scanf("%d", &num);getchar();printf("输入学生姓名：");gets(name);
        new_node->num = num;strcpy(new_node->name, name);new_node->next = NULL;if (head == NULL) {head = new_node;
        } else {temp = head;while (temp->next != NULL) {temp = temp->next;}temp->next = new_node;}
        printf("Do you want to continue? (y/n): ");scanf(" %c", &choice);if (choice == 'n' || choice == 'N') {break;}}return head;}
void print(struct List *head) {struct List *temp = head;if (temp == NULL) {printf("The list is empty.\n");return;}printf("Student List:\n");
    while (temp != NULL) {printf("Student Number: %d, Name: %s\n", temp->num, temp->name);temp = temp->next;}}
struct List *insert_Node_k(struct List *head, int num, char name[], int k) {
    struct List *new_node, *temp = head;int i;if (k < 1) {printf("位置无效！\n");return head;}
    new_node = (struct List *)malloc(sizeof(struct List));new_node->num = num;strcpy(new_node->name, name);new_node->next = NULL;
    if (k == 1) {new_node->next = head;head = new_node;return head;}for (i = 1; i < k - 1 && temp != NULL; i++) {temp = temp->next;}
    if (temp == NULL) {printf("链表长度不足，无法插入！\n");free(new_node);return head;}new_node->next = temp->next;temp->next = new_node;return head;}
struct List *Del_Node_x(struct List *head, int x) {struct List *temp = head, *prev = NULL;if (head == NULL) {printf("The list is empty.\n");return head;}
    if (head->num == x) {temp = head;head = head->next;free(temp);return head;}while (temp != NULL && temp->num != x) {prev = temp;temp = temp->next;}
    if (temp == NULL) {printf("学号： %d 未找到。\n", x);return head;}prev->next = temp->next;free(temp);return head;}
int main() {
    struct List *head = NULL;int choice, num, k;char name[20];head = H_creat_list();while (1) {
        printf("\nMenu:\n");printf("1. 输出链表\n");printf("2. 添加\n");printf("3. 删除\n");printf("4. 退出\n");printf("输入你的选择：");scanf("%d", &choice);
        switch (choice) {
        case 1:print(head);break;
        case 2:printf("输入学生学号：");scanf("%d", &num);
            getchar();printf("输入学生姓名：");gets(name);printf("想要插入的位置：");scanf("%d", &k);head = insert_Node_k(head, num, name, k);break;
        case 3:printf("想要删除的学生学号: ");scanf("%d", &num);head = Del_Node_x(head, num);break;
        case 4:printf("成功退出\n");return 0;
        default:printf("无效选择\n");}}return 0;}

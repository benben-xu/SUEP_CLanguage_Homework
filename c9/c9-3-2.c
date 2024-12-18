//
// Created by JiaMing Xu on 24-11-29.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
int main() {
    char keyword[MAX_LINE_LENGTH];
    char buffer[MAX_LINE_LENGTH];
    int keyword_len;
    FILE *input_file, *output_file1,*output_file2;
    input_file = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c9/使命与担当.txt", "r");
    // output_file1 = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c9/学习笔记1.txt", "w");
    output_file2 = fopen("/Users/jiamingxu/CLionProjects/cProject/School_Test/c9/学习笔记2.txt", "w");
    printf("请输入要查找的关键字：\n");
     fgets(keyword, MAX_LINE_LENGTH, stdin);
    keyword_len = strlen(keyword);
    if (keyword[keyword_len - 1] == '\n') {
        keyword[keyword_len - 1] = '\0';
        keyword_len--;
    }

    while (fgets(buffer, MAX_LINE_LENGTH, input_file)) {
        // if (strstr(buffer, keyword) != NULL) {fprintf(output_file1, "%s", buffer);printf("%s", buffer);}
        if (strstr(buffer, keyword) != NULL) {fprintf(output_file2, "%s", buffer);printf("%s", buffer);}
    }
    printf("已将所有含有关键字 \"%s\" 的句子复制到 \"学习笔记.txt\" 文件中。\n", keyword);
    fclose(input_file);
    // fclose(output_file1);
    fclose(output_file2);

    return 0;
}

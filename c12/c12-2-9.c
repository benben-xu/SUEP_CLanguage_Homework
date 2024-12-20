//
// Created by JiaMing Xu on 24-12-20.
//
#include <stdio.h>
#include <string.h>
void sort(char names[][50], int n) {
    int i, j;
    char temp[50];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {\
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int i;
    char names[20][50] = {
        "John", "Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Helen", "Ivy",
        "Jack", "Kathy", "Louis", "Mona", "Nick", "Olivia", "Paul", "Quincy", "Rita", "Steve"
    };
    sort(names, 20);
    printf("\n排序后的姓名为：\n");
    for (i = 0; i < 20; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}

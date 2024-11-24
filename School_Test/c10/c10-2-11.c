//
// Created by JiaMing Xu on 24-12-3.
//
#include <stdio.h>
void select_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}
int main() {
    int n;
    printf("请输入数组的大小: ");
    scanf("%d", &n);
    int arr[n];
    printf("请输入数组的元素:\n");
    for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);}
    select_sort(arr, n);
    printf("排序后的数组为:\n");
    for (int i = 0; i < n; i++) {printf("%d ", arr[i]);}
    printf("\n");
    return 0;
}

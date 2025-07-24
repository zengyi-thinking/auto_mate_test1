#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;
    
    // 动态分配内存
    arr = (int*)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    
    // 使用内存
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }
    
    printf("动态数组: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // 释放内存
    free(arr);
    return 0;
}

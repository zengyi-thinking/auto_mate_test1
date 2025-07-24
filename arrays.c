#include <stdio.h>

#define SIZE 5

int main() {
    // 一维数组
    int numbers[SIZE] = {1, 2, 3, 4, 5};
    printf("数组元素: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // 二维数组
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("矩阵[1][2]: %d\n", matrix[1][2]);
    return 0;
}

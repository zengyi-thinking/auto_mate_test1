#include <stdio.h>

// 函数声明
int add(int a, int b);
void print_stars(int count);

int main() {
    int sum = add(7, 3);
    printf("7 + 3 = %d\n", sum);
    print_stars(5);
    return 0;
}

// 函数定义
int add(int a, int b) {
    return a + b;
}

void print_stars(int count) {
    for (int i = 0; i < count; i++) {
        printf("*");
    }
    printf("\n");
}

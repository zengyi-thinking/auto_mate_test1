#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;
    
    printf("变量值: %d\n", num);
    printf("指针地址: %p\n", (void*)ptr);
    printf("指针取值: %d\n", *ptr);
    
    // 指针运算
    *ptr += 8;
    printf("修改后值: %d\n", num);
    
    // 数组指针
    int arr[] = {10, 20, 30};
    int *arr_ptr = arr;
    printf("数组第二个元素: %d\n", *(arr_ptr + 1));
    return 0;
}

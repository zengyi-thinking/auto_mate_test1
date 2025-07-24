#include <stdio.h>
#include <string.h>

int main() {
    char greeting[20] = "Hello";
    char name[] = "Alice";
    
    // 字符串操作
    strcat(greeting, " ");
    strcat(greeting, name);
    printf("%s\n", greeting);
    
    // 字符串长度
    printf("长度: %zu\n", strlen(greeting));
    
    // 字符串比较
    if (strcmp(name, "Alice") == 0) {
        printf("匹配成功\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

// 结构体定义
struct Student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    // 创建结构体实例
    struct Student stu1;
    strcpy(stu1.name, "Bob");
    stu1.id = 1001;
    stu1.gpa = 3.8f;
    
    // 结构体指针
    struct Student *stu_ptr = &stu1;
    printf("学生信息: %s (ID:%d, GPA:%.1f)\n", 
           stu_ptr->name, stu_ptr->id, stu_ptr->gpa);
    
    // 结构体数组
    struct Student class[3] = {
        {"Alice", 1002, 3.9},
        {"Tom", 1003, 3.7},
        {"Jane", 1004, 4.0}
    };
    printf("班级平均GPA: %.2f\n", (class[0].gpa + class[1].gpa + class[2].gpa)/3);
    return 0;
}

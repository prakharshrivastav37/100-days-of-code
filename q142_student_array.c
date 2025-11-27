#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;
    
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    
    printf("\nDisplaying Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: Name: %s, Roll: %d, Marks: %.2f\n", i + 1, s[i].name, s[i].roll, s[i].marks);
    }
    
    return 0;
}

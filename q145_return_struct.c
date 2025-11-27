#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent() {
    struct Student s;
    printf("Enter details of top student (Name Roll Marks): ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    return s;
}

int main() {
    struct Student top;
    
    top = getTopStudent();
    
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);
    
    return 0;
}

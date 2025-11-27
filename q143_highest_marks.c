#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;
    
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll: %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);
    
    return 0;
}

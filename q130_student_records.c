#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;
    
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    
    printf("\nReading from file:\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Name\tRoll\tMarks\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("%s\t%d\t%.2f\n", s.name, s.roll, s.marks);
    }
    
    fclose(fp);
    return 0;
}

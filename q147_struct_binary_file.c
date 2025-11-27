#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e1, e2;
    
    // Writing to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter Employee ID, Name, Salary: ");
    scanf("%d %s %f", &e1.id, e1.name, &e1.salary);
    
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    
    // Reading from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fread(&e2, sizeof(struct Employee), 1, fp);
    
    printf("\nData read from binary file:\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);
    
    fclose(fp);
    return 0;
}

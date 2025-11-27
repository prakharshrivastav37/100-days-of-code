#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void writeToFile(const char *filename) {
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }

    struct Employee emps[3] = {
        {101, "Alice", 50000.0},
        {102, "Bob", 60000.0},
        {103, "Charlie", 55000.0}
    };

    size_t written = fwrite(emps, sizeof(struct Employee), 3, fp);
    printf("Written %zu employee records to %s\n", written, filename);

    fclose(fp);
}

void readFromFile(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return;
    }

    struct Employee emp;
    printf("\nReading employee data from %s:\n", filename);
    printf("ID\tName\tSalary\n");
    printf("----------------------------\n");
    
    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("%d\t%s\t%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(fp);
}

int main() {
    const char *filename = "employee.dat";
    writeToFile(filename);
    readFromFile(filename);
    return 0;
}

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date joiningDate;
};

int main() {
    struct Employee e1;
    
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter Name: ");
    scanf("%s", e1.name);
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e1.joiningDate.day, &e1.joiningDate.month, &e1.joiningDate.year);
    
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Joining Date: %02d-%02d-%d\n", e1.joiningDate.day, e1.joiningDate.month, e1.joiningDate.year);
    
    return 0;
}

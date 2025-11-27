#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1;
    int g;
    
    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Enter gender (0: Male, 1: Female, 2: Other): ");
    scanf("%d", &g);
    p1.gender = (enum Gender)g;
    
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: ");
    if (p1.gender == MALE) printf("Male\n");
    else if (p1.gender == FEMALE) printf("Female\n");
    else printf("Other\n");
    
    return 0;
}

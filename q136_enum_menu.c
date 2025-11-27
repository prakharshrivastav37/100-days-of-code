#include <stdio.h>

enum Menu {ADD=1, SUBTRACT, MULTIPLY};

int main() {
    enum Menu choice;
    int a, b;
    
    printf("1. Add\n2. Subtract\n3. Multiply\nEnter choice: ");
    scanf("%d", &choice);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    switch(choice) {
        case ADD:
            printf("Sum = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Difference = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Product = %d\n", a * b);
            break;
        default:
            printf("Invalid Choice\n");
    }
    return 0;
}

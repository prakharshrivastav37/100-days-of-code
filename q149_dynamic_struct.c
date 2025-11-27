#include <stdio.h>
#include <stdlib.h>

struct Product {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Product *ptr;

    // Allocate memory for one struct Product
    ptr = (struct Product *)malloc(sizeof(struct Product));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory successfully allocated.\n");

    // Input details
    printf("Enter Product ID: ");
    scanf("%d", &ptr->id);
    
    printf("Enter Product Name: ");
    scanf("%s", ptr->name); // Assuming no spaces for simplicity, or use fgets
    
    printf("Enter Product Price: ");
    scanf("%f", &ptr->price);

    // Print details
    printf("\nProduct Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Price: %.2f\n", ptr->price);

    // Free memory
    free(ptr);
    printf("\nMemory successfully freed.\n");

    return 0;
}

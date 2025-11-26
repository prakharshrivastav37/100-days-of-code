#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        // Print stars
        for (j = i; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

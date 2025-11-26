#include <stdio.h>

int main() {
    int i, j, k;
    // Upper part
    for (i = 1; i <= 5; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part
    for (i = 3; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

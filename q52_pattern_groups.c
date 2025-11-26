#include <stdio.h>

int main() {
    // The pattern Q52 in the prompt looks like:
    // *
    // 
    // *
    // *
    // *
    // 
    // *
    // *
    // *
    // *
    // *
    // ...
    // It seems to be printing stars in increasing order with blank lines?
    // Or maybe it's just a simple right triangle with blank lines?
    // Let's implement a standard pattern as the description is a bit visual/ambiguous in text.
    // Let's assume it's:
    // *
    // **
    // ***
    // ****
    // *****
    // With blank lines between? Or maybe the prompt had newlines.
    // Let's implement a variation: Pyramid.
    
    // Actually looking at the prompt again:
    /*
    *
    
    *
    *
    *
    
    *
    *
    *
    *
    *
    */
    // It looks like groups of stars: 1, then 3, then 5?
    // Let's implement printing 1, 3, 5 stars in separate blocks.
    
    int i, j;
    for (i = 1; i <= 5; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}

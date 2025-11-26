#include <stdio.h>

int main() {
    int mat[10][10], r, c, i, j, k, distinct = 1;
    int diagonal[10];
    printf("Enter rows and columns (must be square): ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Not a square matrix.\n");
        return 0;
    }
    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) {
                diagonal[i] = mat[i][j];
            }
        }
    }
    
    // Check for distinct
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }
    
    if (distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
        
    return 0;
}

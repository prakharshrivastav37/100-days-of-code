#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], res[10][10];
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Initialize result matrix to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
        }
    }
    
    // Multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

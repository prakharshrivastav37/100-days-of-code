#include <stdio.h>

int main() {
    int mat[10][10], r, c, i, j, k;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Diagonal Traversal:\n");
    // There are r+c-1 diagonals
    for (k = 0; k < r + c - 1; k++) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (i + j == k) {
                    printf("%d ", mat[i][j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

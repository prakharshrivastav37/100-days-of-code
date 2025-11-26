#include <stdio.h>

int main() {
    int mat[10][10], rowSum[10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    
    printf("Sum of each row:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    return 0;
}

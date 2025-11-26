#include <stdio.h>

int main() {
    int mat[10][10], r, c, i, j, sum = 0;
    printf("Enter rows and columns: ");
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
                sum += mat[i][j];
            }
        }
    }
    
    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}

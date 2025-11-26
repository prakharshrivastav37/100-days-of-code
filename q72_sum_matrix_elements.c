#include <stdio.h>

int main() {
    int mat[10][10], r, c, i, j, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    
    printf("Sum of all elements = %d\n", sum);
    return 0;
}

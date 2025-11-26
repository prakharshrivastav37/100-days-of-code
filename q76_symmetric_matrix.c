#include <stdio.h>

int main() {
    int mat[10][10], r, c, i, j, isSymmetric = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }
    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    
    if (isSymmetric)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is not Symmetric\n");
        
    return 0;
}

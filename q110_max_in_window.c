#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, max;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    printf("Max elements in window: ");
    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}

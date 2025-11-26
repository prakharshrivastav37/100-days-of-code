#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, found;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    printf("First negative in window: ");
    for (i = 0; i <= n - k; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0 ");
        }
    }
    printf("\n");
    return 0;
}

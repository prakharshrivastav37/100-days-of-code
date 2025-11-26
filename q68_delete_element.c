#include <stdio.h>

int main() {
    int arr[100], n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);
    
    if (pos >= n + 1 || pos <= 0) {
        printf("Invalid position!\n");
    } else {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        
        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

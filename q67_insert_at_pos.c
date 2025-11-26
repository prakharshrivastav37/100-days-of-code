#include <stdio.h>

int main() {
    int arr[100], n, i, element, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter position (1-based): ");
    scanf("%d", &pos);
    
    if (pos > n + 1 || pos <= 0) {
        printf("Invalid position!\n");
    } else {
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        n++;
        
        printf("Array after insertion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

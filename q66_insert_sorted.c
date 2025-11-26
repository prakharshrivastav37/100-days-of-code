#include <stdio.h>

int main() {
    int arr[100], n, i, element, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &element);
    
    // Find position
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }
    if (i == n) pos = n;
    
    // Shift elements
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = element;
    n++;
    
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

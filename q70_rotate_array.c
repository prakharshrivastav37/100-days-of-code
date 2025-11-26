#include <stdio.h>

int main() {
    int arr[100], n, i, k, j, last;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k (number of rotations): ");
    scanf("%d", &k);
    
    k = k % n; // Optimize k
    
    for (i = 0; i < k; i++) {
        last = arr[n - 1];
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
    
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

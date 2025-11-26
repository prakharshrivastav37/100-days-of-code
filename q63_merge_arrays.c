#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, k = 0;
    
    printf("Enter number of elements for first array: ");
    scanf("%d", &n1);
    printf("Enter elements for first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[k++] = arr1[i];
    }
    
    printf("Enter number of elements for second array: ");
    scanf("%d", &n2);
    printf("Enter elements for second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[k++] = arr2[i];
    }
    
    printf("Merged array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

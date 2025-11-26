#include <stdio.h>

int main() {
    int arr[100], n, i, totalSum = 0, leftSum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }
    
    for (i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            printf("Pivot Index: %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }
    
    printf("Pivot Index: -1\n");
    return 0;
}

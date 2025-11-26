#include <stdio.h>

int main() {
    int arr[100], n, k, i, currentSum = 0, maxSum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    if (k > n) {
        printf("Invalid k\n");
        return 0;
    }
    
    for (i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;
    
    for (i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    printf("Maximum sum of subarray of size %d is %d\n", k, maxSum);
    return 0;
}

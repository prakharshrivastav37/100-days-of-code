#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0, totalSum;
    
    printf("Enter n (range 0 to n): ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Sum of 0 to n is n*(n+1)/2
    totalSum = n * (n + 1) / 2;
    
    printf("Missing number: %d\n", totalSum - sum);
    return 0;
}

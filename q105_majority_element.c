#include <stdio.h>

int main() {
    int arr[100], n, i, candidate = -1, count = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Boyer-Moore Voting Algorithm
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // Verify
    count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }
    
    if (count > n / 2)
        printf("Majority Element: %d\n", candidate);
    else
        printf("Majority Element: -1\n");
        
    return 0;
}

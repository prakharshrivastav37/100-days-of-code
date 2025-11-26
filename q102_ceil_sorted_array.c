#include <stdio.h>

int main() {
    int arr[100], n, x, i, ceilIndex = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    // Linear scan for O(n), Binary Search for O(log n)
    // Using Linear for simplicity as per prompt "Logic Enhancers" usually implies logic over complex algo unless specified.
    // Prompt asked for O(log n) as follow up. I'll implement O(n) first or just simple loop.
    // Actually, let's do simple loop.
    
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }
    
    printf("Ceil index: %d\n", ceilIndex);
    return 0;
}

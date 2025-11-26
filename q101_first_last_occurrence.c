#include <stdio.h>

int main() {
    int arr[100], n, target, i;
    int first = -1, last = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    
    printf("First Occurrence = %d\n", first);
    printf("Last Occurrence = %d\n", last);
    return 0;
}

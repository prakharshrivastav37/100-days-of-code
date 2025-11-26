#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int maxSoFar = INT_MIN, maxEndingHere = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        maxEndingHere = maxEndingHere + arr[i];
        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;
        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }
    
    // Handle case where all numbers are negative
    if (maxSoFar == 0) { // If maxSoFar is 0, it might be because of initialization or all negatives
       // Let's check if there is at least one positive or zero
       int allNegative = 1;
       int maxElement = INT_MIN;
       for(i=0; i<n; i++) {
           if(arr[i] >= 0) {
               allNegative = 0;
               break;
           }
           if(arr[i] > maxElement) maxElement = arr[i];
       }
       if(allNegative) maxSoFar = maxElement;
    }
    
    printf("Maximum Contiguous Sum: %d\n", maxSoFar);
    return 0;
}

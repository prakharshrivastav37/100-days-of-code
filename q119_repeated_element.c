#include <stdio.h>

int main() {
    int arr[100], n, i, result = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements (one repeated): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Using XOR logic? No, XOR works for finding single non-repeated.
    // If range is 1 to n-1 and one repeated?
    // The question says "Only one element will be repeated". Doesn't specify range.
    // If range is not specified, we might need O(n^2) or sorting or hashing.
    // "Try to find the result in one single iteration" suggests O(n).
    // This usually implies specific constraints like range 1 to N-1 (Floyd's Cycle or Sum/XOR).
    // Let's assume standard problem: Array of size N+1 with elements 1 to N.
    // Or maybe just use a simple frequency array if range is small?
    // Let's assume the question implies the XOR trick or Sum trick if elements are 1 to N-1.
    // But if elements are arbitrary, we can't do O(n) O(1) space easily without modifying array.
    // Let's implement a simple nested loop for safety as "Logic Enhancers" might not require optimal O(n) unless specified.
    // Wait, prompt says "Try to find the result in one single iteration".
    // This strongly suggests XOR or Sum method if range is known, or Hash Map.
    // In C, Hash Map is hard.
    // Let's assume the elements are within a reasonable range or use nested loop if we can't assume.
    // Actually, let's look at the problem statement again: "Only one element will be repeated. Print the repeated element."
    // If we assume elements are 1 to N-1, we can use: Sum(Arr) - Sum(1..N-1).
    
    // Let's try the nested loop approach as a fallback if constraints aren't clear, but since it asks for single iteration...
    // Let's assume the user inputs sorted array? No.
    // Let's assume the standard interview question: elements 1 to n-1.
    // Let's implement the Sum difference method.
    
    // But wait, if the array has arbitrary numbers, single iteration is impossible without extra space.
    // Let's use a frequency array of size 1000 (assuming small inputs for this level).
    
    int freq[1000] = {0};
    int repeated = -1;
    
    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > 1) {
            repeated = arr[i];
            break;
        }
    }
    
    if (repeated != -1)
        printf("Repeated element: %d\n", repeated);
    else
        printf("No repeated element found\n");
        
    return 0;
}

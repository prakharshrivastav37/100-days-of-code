#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    // Using formula n*(n+1)/2 is more efficient, but loop is often expected in basics
    // Let's use the formula for O(1)
    sum = n * (n + 1) / 2;
    
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}

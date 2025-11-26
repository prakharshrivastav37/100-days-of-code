#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; count < n; i += 2) {
        sum += i;
        count++;
    }
    
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}

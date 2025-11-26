#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Sum 1 to x = x(x+1)/2
    // Sum x to n = Sum 1 to n - Sum 1 to x-1
    // x(x+1)/2 = n(n+1)/2 - x(x-1)/2
    // x^2 + x = n^2 + n - (x^2 - x)
    // 2x^2 = n^2 + n
    // x = sqrt((n^2 + n) / 2)
    
    long long sum = (long long)n * (n + 1) / 2;
    long long x_sq = sum; // Wait, 2x^2 = n(n+1) -> x^2 = n(n+1)/2 = sum
    // So x = sqrt(sum)
    
    int root = (int)sqrt(sum);
    if (root * root == sum) {
        printf("Pivot Integer: %d\n", root);
    } else {
        printf("Pivot Integer: -1\n");
    }
    return 0;
}

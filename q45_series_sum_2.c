#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    // Series: 2/3 + 4/7 + 6/11 + 8/15 + ...
    // Numerator: 2, 4, 6, 8... -> 2*i
    // Denominator: 3, 7, 11, 15... -> AP with a=3, d=4 -> 3 + (i-1)*4 = 3 + 4i - 4 = 4i - 1
    
    for (i = 1; i <= n; i++) {
        float num = 2 * i;
        float den = 4 * i - 1;
        sum += num / den;
    }
    
    printf("Sum of series = %.2f\n", sum);
    return 0;
}

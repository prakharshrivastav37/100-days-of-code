#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    // Series: 1 + 3/4 + 5/6 + 7/8 + ...
    // Numerator: 1, 3, 5, 7... (2*i - 1)
    // Denominator: 1, 4, 6, 8... Wait, 1st term is 1 (1/1?). 
    // Let's assume 1st term is 1/1? No, 1 + 3/4...
    // Pattern: 1st term: 1
    // 2nd term: 3/4
    // 3rd term: 5/6
    // ith term (for i>1): (2*i - 1) / (2*i)
    
    // Actually looking at the series: 1 + 3/4 + 5/6 + 7/8
    // 1 can be 1/2? No.
    // Let's assume 1 is separate.
    // Or maybe 1/2? No.
    // Let's follow the pattern (2i-1)/(2i) starting from i=1?
    // i=1: 1/2. Not matching.
    // Maybe 1 is just 1.
    // Let's assume the pattern starts from 2nd term?
    // Let's look at numerators: 1, 3, 5, 7... -> Odd numbers.
    // Denominators: (implicit 1?), 4, 6, 8... -> Even numbers starting from 4?
    // If 1st term is 1/2, then 1, 3, 5... and 2, 4, 6...
    // The question says: 1 + 3/4 + 5/6 +...
    // Let's implement exactly as written.
    
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;
        } else {
            float num = 2 * i - 1;
            float den = 2 * i;
            sum += num / den;
        }
    }
    
    printf("Sum of series = %.2f\n", sum);
    return 0;
}

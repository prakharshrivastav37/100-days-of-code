#include <stdio.h>

int main() {
    int n, product = 1, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
        }
        n /= 10;
    }
    
    printf("Product of odd digits = %d\n", product);
    return 0;
}

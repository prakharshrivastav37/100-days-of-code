#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original = n;
    
    // Count digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
        
    return 0;
}

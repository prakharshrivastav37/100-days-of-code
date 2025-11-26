#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits = 0, swapped, temp, divisor;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    last = n % 10;
    temp = n;
    
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    divisor = pow(10, digits - 1);
    first = n / divisor;
    
    int middle = (n % divisor) / 10;
    
    swapped = last * divisor + middle * 10 + first;
    
    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}

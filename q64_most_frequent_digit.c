#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int i, digit, maxCount = 0, maxDigit = 0;
    
    printf("Enter an integer: ");
    scanf("%lld", &n);
    
    if (n < 0) n = -n;
    if (n == 0) count[0]++;
    
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    
    printf("Digit occurring most times is %d (Frequency: %d)\n", maxDigit, maxCount);
    return 0;
}

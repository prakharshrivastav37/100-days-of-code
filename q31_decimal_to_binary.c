#include <stdio.h>

int main() {
    int n, binary = 0, remainder, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    int temp = n;
    while (n > 0) {
        remainder = n % 2;
        binary = binary + remainder * place;
        n /= 2;
        place *= 10;
    }
    
    printf("Binary representation of %d = %d\n", temp, binary);
    return 0;
}

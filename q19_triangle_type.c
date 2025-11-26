#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    
    if (s1 == s2 && s2 == s3) {
        printf("Equilateral Triangle\n");
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }
    return 0;
}

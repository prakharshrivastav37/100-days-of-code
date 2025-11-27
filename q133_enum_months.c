#include <stdio.h>

enum Month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    enum Month m;
    
    printf("Enter month number (1-12): ");
    scanf("%d", &m);
    
    switch(m) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 Days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 Days\n");
            break;
        case FEB:
            printf("28 or 29 Days\n");
            break;
        default:
            printf("Invalid Month\n");
    }
    return 0;
}

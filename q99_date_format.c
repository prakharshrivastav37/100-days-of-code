#include <stdio.h>

int main() {
    int d, m, y;
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    
    if (m >= 1 && m <= 12) {
        printf("Formatted Date: %02d-%s-%d\n", d, months[m], y);
    } else {
        printf("Invalid month\n");
    }
    return 0;
}

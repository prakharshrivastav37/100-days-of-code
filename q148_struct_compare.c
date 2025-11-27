#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

int areIdentical(struct Date d1, struct Date d2) {
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        return 1;
    }
    return 0;
}

int main() {
    struct Date date1, date2;

    printf("Enter first date (dd mm yyyy): ");
    if (scanf("%d %d %d", &date1.day, &date1.month, &date1.year) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second date (dd mm yyyy): ");
    if (scanf("%d %d %d", &date2.day, &date2.month, &date2.year) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (areIdentical(date1, date2)) {
        printf("The dates are identical.\n");
    } else {
        printf("The dates are not identical.\n");
    }

    return 0;
}

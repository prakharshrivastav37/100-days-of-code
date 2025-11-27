#include <stdio.h>

enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    enum Day today;
    
    for (today = SUNDAY; today <= SATURDAY; today++) {
        printf("Day %d\n", today);
    }
    return 0;
}

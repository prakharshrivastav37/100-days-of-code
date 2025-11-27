#include <stdio.h>

enum Colors {RED, GREEN, BLUE, YELLOW, BLACK, WHITE};

int main() {
    enum Colors c;
    char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW", "BLACK", "WHITE"};
    
    for (c = RED; c <= WHITE; c++) {
        printf("Color Value: %d, Name: %s\n", c, colorNames[c]);
    }
    return 0;
}

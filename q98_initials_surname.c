#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, len, lastSpaceIndex = -1;
    
    printf("Enter full name: ");
    scanf("%[^\n]s", str);
    
    len = strlen(str);
    
    // Find last space
    for (i = 0; i < len; i++) {
        if (str[i] == ' ') {
            lastSpaceIndex = i;
        }
    }
    
    printf("Formatted Name: ");
    // Print first char
    printf("%c. ", toupper(str[0]));
    
    // Print initials of middle names
    for (i = 0; i < lastSpaceIndex; i++) {
        if (str[i] == ' ' && str[i+1] != ' ') {
            printf("%c. ", toupper(str[i+1]));
        }
    }
    
    // Print surname
    for (i = lastSpaceIndex + 1; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

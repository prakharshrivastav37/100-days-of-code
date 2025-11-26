#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i]]++;
        }
    }
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i]] > 1) {
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;
        }
    }
    
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

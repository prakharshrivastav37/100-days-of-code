#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Enter full name: ");
    scanf("%[^\n]s", str);
    
    printf("Initials: ");
    if (str[0] != ' ')
        printf("%c", toupper(str[0]));
        
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            printf("%c", toupper(str[i+1]));
        }
        i++;
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    char lower = tolower(ch);
    
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
        printf("%c is a Vowel\n", ch);
    } else if (isalpha(ch)) {
        printf("%c is a Consonant\n", ch);
    } else {
        printf("%c is not an alphabet\n", ch);
    }
    return 0;
}

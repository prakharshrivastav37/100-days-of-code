#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;
    return 0;
}

int main() {
    char str[100], result[100];
    int i, j = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    
    printf("String without vowels: %s\n", result);
    return 0;
}

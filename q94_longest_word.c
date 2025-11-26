#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], maxWord[50];
    int i = 0, j = 0, maxLen = 0, len = 0;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    
    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(maxWord, word);
            }
            j = 0;
        }
    }
    
    printf("Longest word: %s\n", maxWord);
    return 0;
}

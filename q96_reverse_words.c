#include <stdio.h>
#include <string.h>

void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[100];
    char *word_begin = NULL;
    char *temp = str;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    
    while (*temp) {
        if ((word_begin == NULL) && (*temp != ' ')) {
            word_begin = temp;
        }
        if (word_begin && ((*(temp + 1) == ' ') || (*(temp + 1) == '\0'))) {
            reverse(word_begin, temp);
            word_begin = NULL;
        }
        temp++;
    }
    
    printf("Reversed words: %s\n", str);
    return 0;
}

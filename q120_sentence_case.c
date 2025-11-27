#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    // Capitalize first character
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = toupper(str[0]);
    }
    
    for (i = 1; str[i] != '\0'; i++) {
        // If previous char was space or punctuation? 
        // Sentence case usually means first letter of sentence is capital.
        // Assuming single sentence or multiple?
        // Let's assume standard sentence case: First letter capital, rest lower (unless proper noun, but we can't detect that easily).
        // Or maybe after full stop?
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
        
        if (str[i-1] == '.' && str[i] == ' ') {
             // Next char should be upper?
             // Need to handle ' ' after '.'
             // Let's just implement simple logic: Capitalize after '. '
        }
    }
    
    // Let's refine: Capitalize first letter. Capitalize letter after ". ".
    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0) {
            str[i] = toupper(str[i]);
        } else if (str[i-2] == '.' && str[i-1] == ' ') {
            str[i] = toupper(str[i]);
        } else {
             // Keep as is or lower? "Change it to sentence case" usually implies fixing casing.
             // Let's assume we lowercase everything else?
             // But proper nouns...
             // Let's just lowercase everything else for simplicity of "Sentence case" definition in basic programming.
             if (str[i] >= 'A' && str[i] <= 'Z') {
                 // Check if it's start of sentence
                 if (!(str[i-2] == '.' && str[i-1] == ' ')) {
                     str[i] = tolower(str[i]);
                 }
             }
        }
    }
    
    printf("Sentence case: %s\n", str);
    return 0;
}

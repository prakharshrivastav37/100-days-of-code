#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    
    fp = fopen("info.txt", "r"); // Using info.txt as example
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        
        if (ch == '\n') {
            lines++;
        }
        
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    
    if (chars > 0) {
        // If file doesn't end with newline, count last line
        // Actually standard definition usually requires newline.
        // But let's increment line if last char wasn't newline?
        // Simple logic: lines = newline count.
        // If file has content but no newline, it's 1 line?
        // Let's assume lines starts at 1 if chars > 0?
        // Or just count newlines.
        // Let's stick to newline count + 1 if chars > 0?
        // Standard `wc` counts newlines.
    }
    
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    fclose(fp);
    return 0;
}

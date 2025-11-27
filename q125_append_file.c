#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];
    
    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter text to append: ");
    scanf(" %[^\n]s", text); // Read line
    
    fprintf(fp, "%s\n", text);
    
    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}

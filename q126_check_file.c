#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], ch;
    
    printf("Enter filename to open: ");
    scanf("%s", filename);
    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
    } else {
        printf("File '%s' opened successfully. Contents:\n", filename);
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }
        fclose(fp);
    }
    return 0;
}

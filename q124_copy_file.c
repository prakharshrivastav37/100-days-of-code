#include <stdio.h>

int main() {
    FILE *source, *dest;
    char sourceFile[50], destFile[50], ch;
    
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);
    
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }
    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        fclose(source);
        printf("Error opening destination file!\n");
        return 1;
    }
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    
    printf("File copied successfully.\n");
    
    fclose(source);
    fclose(dest);
    return 0;
}

#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[255];
    
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file! Make sure info.txt exists.\n");
        return 1;
    }
    
    printf("Contents of info.txt:\n");
    while (fgets(buffer, 255, fp) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fp);
    return 0;
}

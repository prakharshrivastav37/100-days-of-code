#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;
    
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }
    
    out = fopen("output.txt", "w");
    if (out == NULL) {
        fclose(in);
        printf("Error opening output.txt\n");
        return 1;
    }
    
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = toupper(ch);
        }
        fputc(ch, out);
    }
    
    printf("Converted text written to output.txt\n");
    
    fclose(in);
    fclose(out);
    return 0;
}

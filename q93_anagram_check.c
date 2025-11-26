#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i;
    
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    
    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagrams\n");
        return 0;
    }
    
    for (i = 0; s1[i] != '\0'; i++) {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }
    
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    
    printf("Anagrams\n");
    return 0;
}

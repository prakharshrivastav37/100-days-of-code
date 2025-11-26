#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, i, j, maxLen = 0;
    int visited[256];
    
    printf("Enter a string: ");
    scanf("%s", str);
    n = strlen(str);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < 256; j++) visited[j] = 0;
        int currLen = 0;
        for (j = i; j < n; j++) {
            if (visited[str[j]] == 1)
                break;
            visited[str[j]] = 1;
            currLen++;
        }
        if (currLen > maxLen)
            maxLen = currLen;
    }
    
    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}

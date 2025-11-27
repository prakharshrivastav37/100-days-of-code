#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;
    
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening numbers.txt\n");
        return 1;
    }
    
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    
    if (count > 0) {
        avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    } else {
        printf("No numbers found in file.\n");
    }
    
    fclose(fp);
    return 0;
}

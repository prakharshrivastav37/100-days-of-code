#include <stdio.h>

int main() {
    int nums[100], answer[100], n, i;
    int leftProduct[100], rightProduct[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    leftProduct[0] = 1;
    for (i = 1; i < n; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }
    
    rightProduct[n - 1] = 1;
    for (i = n - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }
    
    printf("Product array: ");
    for (i = 0; i < n; i++) {
        answer[i] = leftProduct[i] * rightProduct[i];
        printf("%d ", answer[i]);
    }
    printf("\n");
    return 0;
}

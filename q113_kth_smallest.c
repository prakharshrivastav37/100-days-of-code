#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, k, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    sort(arr, n);
    
    if (k > 0 && k <= n)
        printf("%dth smallest element is %d\n", k, arr[k - 1]);
    else
        printf("Invalid k\n");
        
    return 0;
}

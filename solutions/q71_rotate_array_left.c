#include <stdio.h>

void leftRotate(int arr[], int n, int k) {
    // Normalize k to be within array bounds
    k = k % n;
    
    // Rotate k times
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        
        // Shift all elements to left by one position
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        
        arr[n - 1] = temp;
    }
}

int main() {
    int n, k;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &k);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    leftRotate(arr, n, k);
    
    printf("After left rotation by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


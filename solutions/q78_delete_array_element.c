#include <stdio.h>

int main() {
    int n, pos;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("Array after deletion: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


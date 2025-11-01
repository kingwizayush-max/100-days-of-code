#include <stdio.h>

// Recursive function to print array elements
void printArray(int arr[], int size, int index) {
    if (index >= size) {
        return; // Base case
    }
    
    printf("%d ", arr[index]);
    printArray(arr, size, index + 1); // Recursive call
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array elements: ");
    printArray(arr, n, 0);
    printf("\n");
    
    return 0;
}


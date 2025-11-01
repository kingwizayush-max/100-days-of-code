#include <stdio.h>

// Recursive function to check if array is sorted in descending order
int isDescending(int arr[], int size) {
    if (size <= 1) {
        return 1; // Single element or empty array is sorted
    }
    
    // Check if current and previous elements are in descending order
    if (arr[size - 2] < arr[size - 1]) {
        return 0; // Not descending
    }
    
    // Recursive check for rest of array
    return isDescending(arr, size - 1);
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
    
    if (isDescending(arr, n)) {
        printf("Array is sorted in descending order.\n");
    } else {
        printf("Array is not sorted in descending order.\n");
    }
    
    return 0;
}


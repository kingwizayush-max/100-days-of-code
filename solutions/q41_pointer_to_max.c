#include <stdio.h>

// Function that returns a pointer to the maximum element
int* findMax(int arr[], int size) {
    if (size <= 0) {
        return NULL;
    }
    
    int *max = &arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            max = &arr[i];
        }
    }
    
    return max;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int *maxPtr = findMax(arr, n);
    
    if (maxPtr != NULL) {
        printf("Maximum element: %d (at address: %p)\n", *maxPtr, maxPtr);
    }
    
    return 0;
}


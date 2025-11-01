#include <stdio.h>

// Function that returns pointer to second largest element
int* findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return NULL;
    }
    
    int *largest = &arr[0];
    int *secondLargest = NULL;
    
    // Find largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            secondLargest = largest;
            largest = &arr[i];
        } else if (secondLargest == NULL || arr[i] > *secondLargest) {
            if (arr[i] < *largest) {
                secondLargest = &arr[i];
            }
        }
    }
    
    return secondLargest;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 1;
    }
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int *secondLargest = findSecondLargest(arr, n);
    
    if (secondLargest != NULL) {
        printf("Second largest element: %d (at address: %p)\n", *secondLargest, secondLargest);
    } else {
        printf("Second largest element not found.\n");
    }
    
    return 0;
}


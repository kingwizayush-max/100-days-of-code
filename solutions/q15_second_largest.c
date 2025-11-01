#include <stdio.h>

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
    
    // Find the largest element
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Find the second largest element
    int secondLargest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("Second largest element: %d\n", secondLargest);
    
    return 0;
}


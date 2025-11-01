#include <stdio.h>

// Recursive function to calculate sum of array elements
int recursiveSum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    
    return arr[size - 1] + recursiveSum(arr, size - 1);
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
    
    int sum = recursiveSum(arr, n);
    
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}


#include <stdio.h>

// Recursive function to find minimum element
int recursiveMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    
    int minRest = recursiveMin(arr, size - 1);
    return (arr[size - 1] < minRest) ? arr[size - 1] : minRest;
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
    
    int min = recursiveMin(arr, n);
    
    printf("Minimum element: %d\n", min);
    
    return 0;
}


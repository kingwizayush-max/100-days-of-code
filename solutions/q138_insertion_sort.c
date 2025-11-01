#include <stdio.h>

// Insertion Sort function for floating-point numbers
void insertionSort(float arr[], int size) {
    int i, j;
    float key;
    
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        
        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    float arr[n];
    printf("Enter %d floating-point numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    
    insertionSort(arr, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


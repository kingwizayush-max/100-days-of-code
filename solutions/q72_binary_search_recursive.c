#include <stdio.h>

// Recursive binary search
int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1; // Key not found
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == key) {
        return mid; // Key found at mid
    }
    
    if (arr[mid] > key) {
        return binarySearch(arr, left, mid - 1, key); // Search left half
    }
    
    return binarySearch(arr, mid + 1, right, key); // Search right half
}

int main() {
    int n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    int index = binarySearch(arr, 0, n - 1, key);
    
    if (index != -1) {
        printf("Key found at index: %d\n", index);
    } else {
        printf("Key not found in the array.\n");
    }
    
    return 0;
}


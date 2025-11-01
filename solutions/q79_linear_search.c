#include <stdio.h>

// Linear search function
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    int index = linearSearch(arr, n, key);
    
    if (index != -1) {
        printf("Key found at index: %d\n", index);
    } else {
        printf("Key not found in the array.\n");
    }
    
    return 0;
}


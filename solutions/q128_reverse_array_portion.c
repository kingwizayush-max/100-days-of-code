#include <stdio.h>

// Function to reverse array portion using pointers
void reversePortion(int *start, int *end) {
    int temp;
    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n, startIdx, endIdx;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter start index (0 to %d): ", n - 1);
    scanf("%d", &startIdx);
    
    printf("Enter end index (%d to %d): ", startIdx, n - 1);
    scanf("%d", &endIdx);
    
    if (startIdx < 0 || endIdx >= n || startIdx > endIdx) {
        printf("Invalid indices!\n");
        return 1;
    }
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Reverse portion using pointers
    reversePortion(&arr[startIdx], &arr[endIdx]);
    
    printf("After reversing from index %d to %d: ", startIdx, endIdx);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


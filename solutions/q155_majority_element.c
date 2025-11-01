#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Boyer-Moore Majority Vote Algorithm
    int candidate = arr[0];
    int count = 1;
    
    // Find candidate
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        }
    }
    
    // Verify candidate appears more than n/2 times
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    
    if (count > n / 2) {
        printf("Majority element: %d (appears %d times, more than %d/2)\n", 
               candidate, count, n);
    } else {
        printf("No majority element found.\n");
    }
    
    return 0;
}


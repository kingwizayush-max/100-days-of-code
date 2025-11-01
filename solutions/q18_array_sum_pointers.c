#include <stdio.h>

// Function to calculate sum using pointer arithmetic
int arraySum(int *arr, int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    
    return sum;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    
    int sum = arraySum(arr, n);
    
    printf("Sum of all elements: %d\n", sum);
    
    return 0;
}


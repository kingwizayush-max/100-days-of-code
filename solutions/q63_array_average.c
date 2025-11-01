#include <stdio.h>

// Function to calculate average of array elements
float arrayAverage(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return (float)sum / size;
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
    
    float average = arrayAverage(arr, n);
    
    printf("Average of array elements: %.2f\n", average);
    
    return 0;
}


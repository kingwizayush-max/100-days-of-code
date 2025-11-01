#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }
    
    // Dynamically allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    
    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free the allocated memory
    free(arr);
    
    printf("Memory freed successfully.\n");
    
    return 0;
}


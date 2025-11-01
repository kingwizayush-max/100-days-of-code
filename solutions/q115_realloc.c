#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    
    // Dynamically allocate array of 5 integers
    arr = (int *)malloc(5 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array (5 elements): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Expand array to 10 integers using realloc
    arr = (int *)realloc(arr, 10 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    printf("Enter 5 more integers: ");
    for (int i = 5; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nExpanded array (10 elements): ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}


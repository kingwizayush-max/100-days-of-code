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
    
    printf("Unique elements: ");
    
    // Find and print unique elements
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        
        // Check if element appears before current position
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}


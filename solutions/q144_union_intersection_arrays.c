#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    printf("Enter %d integers: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter %d integers: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Find union
    printf("\nUnion: ");
    // Print all elements from arr1
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    // Print elements from arr2 that are not in arr1
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");
    
    // Find intersection
    printf("Intersection: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    
    return 0;
}


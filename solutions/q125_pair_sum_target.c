#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target sum: ");
    scanf("%d", &target);
    
    int found = 0;
    
    // Find pair with sum equal to target
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("No pair found with sum equal to %d\n", target);
    }
    
    return 0;
}


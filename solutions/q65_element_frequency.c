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
    
    // Count frequency of each element
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    
    printf("\nElement frequency:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i]) {
            continue;
        }
        
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d appears %d time(s)\n", arr[i], count);
    }
    
    return 0;
}


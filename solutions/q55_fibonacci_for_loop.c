#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    
    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }
    
    // Generate remaining terms using for loop
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    
    printf("\n");
    
    return 0;
}


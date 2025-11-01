#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Enter the position (N): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: Please enter a non-negative number.\n");
    } else {
        int result = fibonacci(n);
        printf("The %dth Fibonacci number is: %d\n", n, result);
    }
    
    return 0;
}


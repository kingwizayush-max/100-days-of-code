#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        long long result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }
    
    return 0;
}


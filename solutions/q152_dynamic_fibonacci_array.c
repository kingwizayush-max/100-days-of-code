#include <stdio.h>
#include <stdlib.h>

// Function that returns dynamically allocated Fibonacci array
long long* generateFibonacci(int n) {
    if (n <= 0) {
        return NULL;
    }
    
    long long *fib = (long long *)malloc(n * sizeof(long long));
    
    if (fib == NULL) {
        return NULL;
    }
    
    if (n >= 1) {
        fib[0] = 0;
    }
    if (n >= 2) {
        fib[1] = 1;
    }
    
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    return fib;
}

int main() {
    int n;
    
    printf("Enter number of Fibonacci numbers: ");
    scanf("%d", &n);
    
    long long *fibArray = generateFibonacci(n);
    
    if (fibArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("First %d Fibonacci numbers: ", n);
    for (int i = 0; i < n; i++) {
        printf("%lld ", fibArray[i]);
    }
    printf("\n");
    
    // Free dynamically allocated memory
    free(fibArray);
    
    return 0;
}


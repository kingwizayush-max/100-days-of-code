#include <stdio.h>

// Recursive function to multiply two integers without * operator
int multiply(int a, int b) {
    // Base cases
    if (b == 0) {
        return 0;
    }
    if (b == 1) {
        return a;
    }
    if (b == -1) {
        return -a;
    }
    
    // Recursive case for positive b
    if (b > 0) {
        return a + multiply(a, b - 1);
    }
    
    // Recursive case for negative b
    return -a + multiply(a, b + 1);
}

int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    int result = multiply(a, b);
    
    printf("%d multiplied by %d = %d\n", a, b, result);
    
    return 0;
}


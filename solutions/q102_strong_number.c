#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num, original, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    // Calculate sum of factorial of digits
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is not a Strong Number.\n", original);
    }
    
    return 0;
}


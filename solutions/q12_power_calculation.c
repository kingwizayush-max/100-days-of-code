#include <stdio.h>

// Function to calculate power of a number
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    
    double result = 1;
    int exp = exponent > 0 ? exponent : -exponent;
    
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    
    return exponent > 0 ? result : 1 / result;
}

int main() {
    double base;
    int exponent;
    
    printf("Enter base: ");
    scanf("%lf", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);
    
    return 0;
}


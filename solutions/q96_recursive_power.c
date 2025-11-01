#include <stdio.h>

// Recursive function to calculate x^y
double power(double x, int y) {
    if (y == 0) {
        return 1;
    }
    
    if (y < 0) {
        return 1 / power(x, -y);
    }
    
    return x * power(x, y - 1);
}

int main() {
    double base;
    int exponent;
    
    printf("Enter base: ");
    scanf("%lf", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    
    printf("%.2lf raised to the power of %d = %.2lf\n", base, exponent, result);
    
    return 0;
}


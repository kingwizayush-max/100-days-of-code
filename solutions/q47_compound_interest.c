#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;
    
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter annual interest rate (%%): ");
    scanf("%lf", &rate);
    
    printf("Enter time period in years: ");
    scanf("%lf", &time);
    
    // Calculate compound interest
    // Compound Interest = P * (1 + r/100)^t - P
    amount = principal * pow(1 + rate / 100, time);
    compoundInterest = amount - principal;
    
    printf("\nCompound Interest: %.2lf\n", compoundInterest);
    printf("Total Amount: %.2lf\n", amount);
    
    return 0;
}


#include <stdio.h>

int main() {
    float principal;
    float rate;
    int time;
    float simpleInterest;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest (%% per year): ");
    scanf("%f", &rate);
    
    printf("Enter time in years: ");
    scanf("%d", &time);
    
    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;
    
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Total Amount = %.2f\n", principal + simpleInterest);
    
    return 0;
}


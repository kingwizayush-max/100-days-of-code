#include <stdio.h>

int main() {
    float units, bill = 0.0, surcharge, total;
    
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    
    // Calculate bill based on rates
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    
    // Add 20% surcharge
    surcharge = bill * 0.20;
    total = bill + surcharge;
    
    printf("\nElectricity Bill Calculation:\n");
    printf("Units consumed: %.2f\n", units);
    printf("Base bill: $%.2f\n", bill);
    printf("Surcharge (20%%): $%.2f\n", surcharge);
    printf("Total bill: $%.2f\n", total);
    
    return 0;
}


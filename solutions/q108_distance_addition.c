#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

// Function to add two Distance objects
struct Distance addDistance(struct Distance d1, struct Distance d2) {
    struct Distance result;
    
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;
    
    // Convert inches to feet if sum >= 12
    if (result.inches >= 12.0) {
        result.feet += (int)(result.inches / 12.0);
        result.inches = result.inches - ((int)(result.inches / 12.0) * 12.0);
    }
    
    return result;
}

int main() {
    struct Distance d1, d2, sum;
    
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);
    
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);
    
    sum = addDistance(d1, d2);
    
    printf("\nSum: %d feet %.2f inches\n", sum.feet, sum.inches);
    
    return 0;
}


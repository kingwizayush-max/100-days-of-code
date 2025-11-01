#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    struct Complex c1, c2, sum;
    
    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imaginary);
    
    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imaginary);
    
    sum = addComplex(c1, c2);
    
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
    
    return 0;
}


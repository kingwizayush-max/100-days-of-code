#include <stdio.h>

// Math functions
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return (b != 0) ? a / b : 0; }

int main() {
    float num1, num2, result;
    int choice;
    
    // Array of function pointers
    float (*operations[])(float, float) = {add, subtract, multiply, divide};
    
    printf("Simple Calculator using Function Pointers Array:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    if (choice < 1 || choice > 4) {
        printf("Invalid choice!\n");
        return 1;
    }
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Call function using array index
    result = operations[choice - 1](num1, num2);
    
    printf("Result: %.2f\n", result);
    
    return 0;
}


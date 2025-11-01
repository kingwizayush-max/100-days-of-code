#include <stdio.h>

// Calculator functions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2, result;
    char operator;
    
    // Function pointer declaration
    float (*operation)(float, float);
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Assign function pointer based on operator
    switch(operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }
    
    // Call function using pointer
    result = operation(num1, num2);
    
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    
    return 0;
}


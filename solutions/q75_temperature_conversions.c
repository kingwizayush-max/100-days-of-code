#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float temp;
    int choice;
    
    printf("Temperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, celsiusToFahrenheit(temp));
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp, fahrenheitToCelsius(temp));
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}


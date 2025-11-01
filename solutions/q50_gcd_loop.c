#include <stdio.h>

// Function to find GCD using a loop
int findGCD(int a, int b) {
    int gcd = 1;
    int min = (a < b) ? a : b;
    
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    
    return gcd;
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int gcd = findGCD(num1, num2);
    
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    
    return 0;
}


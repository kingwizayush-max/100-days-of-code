#include <stdio.h>

// Function to find GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Calculate LCM using relationship: (a * b) = GCD(a, b) * LCM(a, b)
    int lcm = (a * b) / gcd(a, b);
    
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    
    return 0;
}


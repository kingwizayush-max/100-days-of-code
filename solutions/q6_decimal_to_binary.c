#include <stdio.h>

int main() {
    int decimal, remainder;
    long long binary = 0;
    int place = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    int originalDecimal = decimal;
    
    // Convert decimal to binary
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * place;
        decimal /= 2;
        place *= 10;
    }
    
    printf("Binary representation of %d is: %lld\n", originalDecimal, binary);
    
    return 0;
}


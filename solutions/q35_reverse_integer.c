#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int original = num;
    
    // Reverse the integer using while loop
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}


#include <stdio.h>

// Function to convert integer to string
void integerToString(int n, char str[]) {
    int i = 0;
    int isNegative = 0;
    
    // Handle negative numbers
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }
    
    // Handle zero
    if (n == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }
    
    // Extract digits in reverse order
    while (n > 0) {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }
    
    // Add negative sign if needed
    if (isNegative) {
        str[i++] = '-';
    }
    
    str[i] = '\0';
    
    // Reverse the string
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int num;
    char str[50];
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    integerToString(num, str);
    
    printf("String representation: %s\n", str);
    
    return 0;
}


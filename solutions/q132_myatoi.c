#include <stdio.h>

// Custom atoi function
int myAtoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;
    
    // Skip whitespace
    while (str[i] == ' ') {
        i++;
    }
    
    // Handle sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }
    
    // Convert digits
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    
    return sign * result;
}

int main() {
    char str[100];
    
    printf("Enter a string of digits: ");
    gets(str);
    
    int num = myAtoi(str);
    
    printf("String: %s\n", str);
    printf("Integer: %d\n", num);
    
    return 0;
}


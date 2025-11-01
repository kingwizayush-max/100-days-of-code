#include <stdio.h>

// Custom strlen using pointer arithmetic
size_t myStrlen(const char *str) {
    const char *p = str;
    while (*p++);  // Increment pointer until null terminator
    return p - str - 1;  // Subtract 1 because p points one past '\0'
}

int main() {
    char str[200];
    
    printf("Enter a string: ");
    gets(str);
    
    size_t len = myStrlen(str);
    
    printf("String: %s\n", str);
    printf("Length: %zu\n", len);
    
    return 0;
}


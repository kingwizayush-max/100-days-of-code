#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    // Find length using pointer
    char *ptr = str;
    int length = 0;
    
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}


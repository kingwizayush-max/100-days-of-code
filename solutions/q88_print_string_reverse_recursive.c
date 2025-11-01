#include <stdio.h>

// Recursive function to print string in reverse
void printReverse(char *str) {
    if (*str == '\0') {
        return;
    }
    
    printReverse(str + 1);
    printf("%c", *str);
}

int main() {
    char str[200];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    printReverse(str);
    printf("\n");
    
    return 0;
}


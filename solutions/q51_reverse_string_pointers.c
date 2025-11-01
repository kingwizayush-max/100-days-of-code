#include <stdio.h>

// Function to reverse string in place using pointers
void reverseString(char *str) {
    char *start = str;
    char *end = str;
    char temp;
    
    // Move end pointer to end of string
    while (*end != '\0') {
        end++;
    }
    end--; // Move back from null terminator
    
    // Swap characters from both ends
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Original string: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}


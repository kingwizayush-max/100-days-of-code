#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive function to check palindrome
int isPalindromeRecursive(char str[], int start, int end) {
    // Base case: string is palindrome if start >= end
    if (start >= end) {
        return 1;
    }
    
    // Skip non-alphanumeric characters (optional, for better matching)
    while (!isalnum(str[start]) && start < end) {
        start++;
    }
    while (!isalnum(str[end]) && start < end) {
        end--;
    }
    
    // Compare characters (case-insensitive)
    if (tolower(str[start]) != tolower(str[end])) {
        return 0;
    }
    
    // Recursive call
    return isPalindromeRecursive(str, start + 1, end - 1);
}

int main() {
    char str[200];
    
    printf("Enter a string: ");
    gets(str);
    
    int len = strlen(str);
    
    if (isPalindromeRecursive(str, 0, len - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}


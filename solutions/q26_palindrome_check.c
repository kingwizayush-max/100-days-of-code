#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, len;
    int isPalindrome = 1;
    
    printf("Enter a string: ");
    gets(str);
    
    len = strlen(str);
    i = 0;
    j = len - 1;
    
    // Check if palindrome (case insensitive)
    while (i < j) {
        if (tolower(str[i]) != tolower(str[j])) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}


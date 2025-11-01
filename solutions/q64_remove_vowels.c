#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200], result[200];
    int i, j = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    // Remove vowels
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    
    printf("Original string: %s\n", str);
    printf("String after removing vowels: %s\n", result);
    
    return 0;
}


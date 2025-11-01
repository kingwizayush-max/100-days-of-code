#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, whitespace = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        
        if (isalpha(str[i])) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            whitespace++;
        }
    }
    
    printf("\nString Analysis:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Whitespace characters: %d\n", whitespace);
    
    return 0;
}


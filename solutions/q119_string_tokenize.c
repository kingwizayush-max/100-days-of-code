#include <stdio.h>
#include <string.h>

int main() {
    char str[200], delimiter;
    char *token;
    int i = 0;
    
    printf("Enter a string (e.g., apple,banana,cherry): ");
    gets(str);
    
    printf("Enter delimiter character: ");
    scanf(" %c", &delimiter);
    
    printf("\nTokens:\n");
    
    // Split string into tokens
    token = str;
    while (token[i] != '\0') {
        if (token[i] == delimiter) {
            token[i] = '\0';
            printf("%s\n", token);
            token = &token[i + 1];
            i = 0;
        } else {
            i++;
        }
    }
    
    // Print last token
    printf("%s\n", token);
    
    return 0;
}


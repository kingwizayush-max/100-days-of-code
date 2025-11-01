#include <stdio.h>
#include <string.h>

// Function to remove all occurrences of a character in-place
void removeChar(char str[], char ch) {
    int i, j = 0;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[200], ch;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter character to remove: ");
    scanf("%c", &ch);
    
    printf("Original string: %s\n", str);
    
    removeChar(str, ch);
    
    printf("String after removing '%c': %s\n", ch, str);
    
    return 0;
}


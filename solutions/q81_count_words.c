#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int wordCount = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    // Count words (words separated by single space)
    if (str[0] != '\0' && str[0] != ' ') {
        wordCount = 1; // First word
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            wordCount++;
        }
    }
    
    printf("Total number of words: %d\n", wordCount);
    
    return 0;
}


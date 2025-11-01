#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int visited[256] = {0}; // Track visited characters
    int j = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    // Remove duplicate characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (!visited[(unsigned char)str[i]]) {
            result[j] = str[i];
            visited[(unsigned char)str[i]] = 1;
            j++;
        }
    }
    result[j] = '\0';
    
    printf("Original string: %s\n", str);
    printf("String after removing duplicates: %s\n", result);
    
    return 0;
}


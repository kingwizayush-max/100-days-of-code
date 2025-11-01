#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    
    printf("Enter first string: ");
    gets(str1);
    
    printf("Enter second string: ");
    gets(str2);
    
    // Concatenate strings manually
    int i = 0, j = 0;
    
    // Copy first string
    while (str1[i] != '\0') {
        result[j] = str1[i];
        i++;
        j++;
    }
    
    // Append second string
    i = 0;
    while (str2[i] != '\0') {
        result[j] = str2[i];
        i++;
        j++;
    }
    
    result[j] = '\0'; // Null terminate
    
    printf("Concatenated string: %s\n", result);
    
    return 0;
}


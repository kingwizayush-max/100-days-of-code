#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to concatenate strings with dynamic memory allocation
char* dynamicConcat(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Allocate memory for new string (including null terminator)
    char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    
    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    
    // Copy first string
    strcpy(result, str1);
    
    // Concatenate second string
    strcat(result, str2);
    
    return result;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    gets(str1);
    
    printf("Enter second string: ");
    gets(str2);
    
    char *result = dynamicConcat(str1, str2);
    
    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result); // Free dynamically allocated memory
    }
    
    return 0;
}


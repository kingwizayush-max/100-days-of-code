#include <stdio.h>

// Custom strstr function
const char* myStrStr(const char *haystack, const char *needle) {
    if (*needle == '\0') {
        return haystack;
    }
    
    while (*haystack != '\0') {
        const char *h = haystack;
        const char *n = needle;
        
        while (*h != '\0' && *n != '\0' && *h == *n) {
            h++;
            n++;
        }
        
        if (*n == '\0') {
            return haystack; // Found
        }
        
        haystack++;
    }
    
    return NULL; // Not found
}

int main() {
    char haystack[200], needle[100];
    
    printf("Enter the main string (haystack): ");
    gets(haystack);
    
    printf("Enter the substring to find (needle): ");
    gets(needle);
    
    const char *result = myStrStr(haystack, needle);
    
    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - haystack);
        printf("Remaining string: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}


#include <stdio.h>

// Custom strcmp function
int myStrcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    gets(str1);
    
    printf("Enter second string: ");
    gets(str2);
    
    int result = myStrcmp(str1, str2);
    
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is lexicographically less than second string.\n");
    } else {
        printf("First string is lexicographically greater than second string.\n");
    }
    
    return 0;
}


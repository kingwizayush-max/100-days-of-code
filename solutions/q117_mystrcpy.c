#include <stdio.h>

// Custom strcpy function
void myStrcpy(char *destination, const char *source) {
    int i = 0;
    
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];
    
    printf("Enter source string: ");
    gets(source);
    
    myStrcpy(destination, source);
    
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}


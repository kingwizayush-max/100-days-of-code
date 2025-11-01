#include <stdio.h>

void toUppercase(char str[]) {
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[200];
    
    printf("Enter a string in lowercase: ");
    gets(str);
    
    printf("Original string: %s\n", str);
    
    toUppercase(str);
    
    printf("Uppercase string: %s\n", str);
    
    return 0;
}


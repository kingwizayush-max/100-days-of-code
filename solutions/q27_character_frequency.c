#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int frequency[256] = {0}; // ASCII character frequency
    
    printf("Enter a string: ");
    gets(str);
    
    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    
    printf("\nCharacter frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0 && isprint(i)) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }
    
    return 0;
}


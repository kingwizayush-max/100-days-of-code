#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int maxFreq = 0;
    char mostFrequent;
    
    printf("Enter a string: ");
    gets(str);
    
    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    
    // Find most frequent character
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequent = (char)i;
        }
    }
    
    printf("Most frequently occurring character: '%c' (appears %d times)\n", 
           mostFrequent, maxFreq);
    
    return 0;
}


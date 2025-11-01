#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int isAnagram = 1;
    
    printf("Enter first string: ");
    gets(str1);
    
    printf("Enter second string: ");
    gets(str2);
    
    // Count frequency of each character in first string
    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            freq1[tolower(str1[i]) - 'a']++;
        }
    }
    
    // Count frequency of each character in second string
    for (int i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            freq2[tolower(str2[i]) - 'a']++;
        }
    }
    
    // Compare frequencies
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }
    
    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    
    return 0;
}


#include <stdio.h>

// Recursive function to find last occurrence
int findLastOccurrence(char *str, char target, int index) {
    if (str[index] == '\0') {
        return -1; // Not found
    }
    
    int nextIndex = findLastOccurrence(str, target, index + 1);
    
    if (nextIndex != -1) {
        return nextIndex; // Found later in string
    }
    
    if (str[index] == target) {
        return index; // Found at current index
    }
    
    return -1; // Not found
}

int main() {
    char str[200], target;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter character to find: ");
    scanf("%c", &target);
    
    int index = findLastOccurrence(str, target, 0);
    
    if (index != -1) {
        printf("Last occurrence of '%c' is at index: %d\n", target, index);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }
    
    return 0;
}


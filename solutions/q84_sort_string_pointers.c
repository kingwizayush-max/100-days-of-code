#include <stdio.h>
#include <string.h>

int main() {
    char *strings[5] = {
        "zebra",
        "apple",
        "banana",
        "dog",
        "cat"
    };
    
    printf("Before sorting:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }
    
    // Sort by swapping pointers (bubble sort)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                // Swap pointers
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
    
    printf("\nAfter sorting (by swapping pointers):\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }
    
    return 0;
}


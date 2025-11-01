#include <stdio.h>

int main() {
    int height, i, j, space;
    
    printf("Enter the height of the middle row: ");
    scanf("%d", &height);
    
    // Upper half of diamond
    for (i = 1; i <= height; i++) {
        // Print spaces
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Lower half of diamond
    for (i = height - 1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= height - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


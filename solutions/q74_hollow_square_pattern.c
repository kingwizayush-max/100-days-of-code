#include <stdio.h>

int main() {
    int side, i, j;
    
    printf("Enter the side length: ");
    scanf("%d", &side);
    
    // Print hollow square pattern
    for (i = 1; i <= side; i++) {
        for (j = 1; j <= side; j++) {
            // Print stars only at boundaries
            if (i == 1 || i == side || j == 1 || j == side) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}


#include <stdio.h>

// Function to calculate binomial coefficient
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("\nPascal's Triangle:\n");
    
    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }
        
        // Print values in row
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
    
    return 0;
}

